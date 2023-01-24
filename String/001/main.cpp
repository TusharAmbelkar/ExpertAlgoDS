/* 
Topic: Change string to a new character set
Link: https://www.geeksforgeeks.org/change-string-to-a-new-character-set/
Difficulty: Easy
Topics: Map, String
Author: Tushar Ambelkar
 */

#include <bits/stdc++.h>
using namespace std;
char charmap[26];

void conversion(char *cset, string &str)
{
    // Create mapping using charset
    for (int i = 0; i < 26; i++)
    {
        charmap[cset[i] - 'a'] = i + 'a';
    }
    // Convert the string
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        str[i] = charmap[str[i]-'a'];
    }
}

int main()
{
    char charset[27] = "qwertyuiopasdfghjklzxcvbnm";
    string str = "utta"; 
    conversion(charset,str);
    cout << str << endl;
    return 0; 
}