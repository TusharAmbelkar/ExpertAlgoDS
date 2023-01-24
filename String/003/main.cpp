/* 
 * Topic: Left Rotation and Right Rotation of a String
 * Link: https://www.geeksforgeeks.org/left-rotation-right-rotation-string-2
 * Difficulty: Easy
 * Topics: String
 * Author: Tushar Ambelkar
 */

#include <bits/stdc++.h>
using namespace std;

void reverse(string &str, int left, int right)
{
    int mid = left + (right - left) / 2;
    char temp;
    for (int i=left;i<=mid;i++)
    {
        temp = str[i];
        str[i] = str[right-i];
        str[right-i] = temp;
    }
}

void leftrotate(string &str,int d)
{
    int n = str.length();
    reverse(str,0,d-1);         // Reverse the first d chars
    reverse(str,0,n-1);         // Reverse entire string so that left portion is rtated to right
    reverse(str,0, n-1-d);      // Reverse the remaining part to normal order
}

void rightrotate(string &str, int d)
{
    int n = str.length();
    leftrotate(str,n-d);
}

// Driver code
int main()
{
    string str1 = "GeeksforGeeks";
    leftrotate(str1, 2);
    cout << str1 << endl;
 
    string str2 = "GeeksforGeeks";
    rightrotate(str2, 2);
    cout << str2 << endl;
    return 0;
}