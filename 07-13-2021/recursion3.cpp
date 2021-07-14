/**
 * More recursion: palindromes.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <string>
#include <iostream>

#define BOOL(b) (b ? "YES" : "NO")

bool isPalindrome(std::string s) {
  auto sl = s.length();
  if (sl <= 1) {
    return true;
  }
  if (s[0] != s[sl - 1]) {
    return false;
  }
  return isPalindrome(s.substr(1, sl - 2));
}

int main() {
  std::string s;
  while (std::cin >> s) {
    std::cout << BOOL(isPalindrome(s)) << std::endl;
  }
}
