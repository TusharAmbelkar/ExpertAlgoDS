/* 
 * Topic: Sorting array of strings (or words) using Trie
 * Link: https://www.geeksforgeeks.org/sorting-array-strings-words-using-trie/
 * Difficulty: Easy
 * Topics: String, Trie
 * Author: Tushar Ambelkar
 */

#include <bits/stdc++.h>
using namespace std;

// Create variable number of Trie node structure for current implementation
// Usually we used to create a global array of fixed number of Trie nodes
// and recycle those at end of every testcase.

struct Trie
{
    Trie *child[26];
    // Saves the index of the string in array and demarcates the string end in Trie
    int index;
    Trie()
    {
        for (int i=0;i<26;i++)
        {
            child[i] = NULL;
        }
        index = -1;
    }
};

void insert_Trie(Trie* root, string str, int id)
{
    Trie* curr = root;
    int n = str.length();
    for (int i=0;i<n;i++)
    {
        if (curr->child[str[i]-'a'] == NULL)
        {
            curr->child[str[i]-'a'] = new Trie();
        }
        curr = curr->child[str[i]-'a'];
    }
    curr->index = id;
}

void preOrderTraversal(Trie* node, string* arr)
{
    if (node == NULL)
        return;
    if (node->index != -1)
    {
        cout  << arr[node->index] << " ";
    }
    for (int i=0;i<26;i++)
    {
        if (node->child[i] != NULL)
        {
            preOrderTraversal(node->child[i],arr);
        }
    }
}

void printSorted(string* arr, int n)
{
    Trie* root = new Trie();
    for (int i = 0; i < n; i++)
    {
        insert_Trie(root,arr[i],i);
    }
    preOrderTraversal(root,arr);
    cout << endl;
}

// Driver code
int main()
{
    //string arr[] = { "abc", "xy", "bcd" };
    string arr[] = {"geeks", "for", "geeks", "a", "portal", 
        "to", "learn", "can", "be", "computer", 
        "science", "zoom", "yup", "fire", "in", "data"};
    int n = sizeof(arr) / sizeof(arr[0]);
    printSorted(arr, n);
    return 0;
}
