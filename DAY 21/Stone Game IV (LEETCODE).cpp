#include <iostream>

using namespace std;



class Solution {
public:
  bool winnerSquareGame(int n) {    
    vector<int> cache(n + 1, 0); 
    function<int(int)> win = [&](int n) -> int {
      if (n == 0) return -1;
      if (cache[n]) return cache[n];
      for (int i = sqrt(n); i >= 1; --i)
        if (win(n - i * i) < 0) return cache[n] = 1;      
      return cache[n] = -1;
    };
    return win(n) > 0;
  }
};