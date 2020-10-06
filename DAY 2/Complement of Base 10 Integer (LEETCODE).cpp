#include <iostream>

using namespace std;

class Solution {
public:
    int bitwiseComplement(int N) {
        if(N == 0) {
            return 1;
        }
        int ans = 0;
        int curr = 1;
        
        while(N != 0){
            
            if(N % 2 == 0){
                ans += curr;   
            }
            N /= 2;
            curr *= 2;
        }
        
        return ans;
    }
};