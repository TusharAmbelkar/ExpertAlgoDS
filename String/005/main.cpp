/* 
 * Topic: Check if given strings are rotations of each other or not
 * Link: https://www.geeksforgeeks.org/a-program-to-check-if-strings-are-rotations-of-each-other
 * Difficulty: Easy
 * Topics: Strings
 * Author: Tushar Ambelkar
 */

#include <bits/stdc++.h>
using namespace std;

bool check_rotation(string str1, string str2)
{
    if (str1.size() != str2.size())
        return false;
    string temp = str1 + str1;
    size_t n = temp.find(str2);
    if (n == string::npos)
        return false;
    return true;
}

// Driver code
int main()
{
    string str1 = "AACD", str2 = "ACDA";

    if (check_rotation(str1, str2))
        printf("Strings are rotations of each other\n");
    else
        printf("Strings are not rotations of each other\n");
    return 0;
}