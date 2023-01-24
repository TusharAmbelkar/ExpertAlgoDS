/* 
 * Topic: Perfect reversible string
 * Link: https://www.geeksforgeeks.org/perfect-reversible-string
 * Difficulty: Medium
 * Topics: String, palindrome
 * Author: Tushar Ambelkar
 */

/* 
 * Logic
 *      A simple solution for this problem is to generate all possible substrings of ‘st’ and check if 
 *      their reverse exist in the ‘str’ linearly.
 * 
 *      An efficient solution for this problem is based on the fact that reverse of all substrings of 
 *      ‘str’ will exist in ‘str’ if and only if the entire string ‘str’ is palindrome. We can justify 
 *      this fact by considering the whole string, a reverse of it will exist only if it is palindrome. 
 *      And if a string is palindrome, then all reverse of all substrings exist.
 */

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str)
{
    int n = str.length();
    int mid = (n-1)/2;
    for (int i = 0; i <= mid; i++)
    {
        if (str[i] != str[n-i-1])
            return false;
    }
    return true;
}

bool isReversible(string str)
{
    return isPalindrome(str);
}

// Driver program to run the case
int main()
{
  string str="abad";
  if (isReversible(str))
      cout << "YES\n";
  else
      cout << "NO\n";
  return 0;
}