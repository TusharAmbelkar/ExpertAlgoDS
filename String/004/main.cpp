/* 
 * Topic: Minimum rotations required to get the same string
 * Link: https://www.geeksforgeeks.org/minimum-rotations-required-get-string
 * Difficulty: Easy
 * Topics: Strings
 * Author: Tushar Ambelkar
 */

#include <bits/stdc++.h>
using namespace std;


int findRotations(string str)
{
    string temp = str.substr(1,str.size()) + str;
    int res = temp.find(str);
    return res + 1;
}
// Driver code
int main()
{
    string str = "geegee";
    cout << findRotations(str) << endl;
    return 0;
}