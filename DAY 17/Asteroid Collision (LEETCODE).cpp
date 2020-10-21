#include <iostream>

using namespace std;




class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> res;
        for(int a: asteroids) {
            if(a > 0)
                res.push_back(a);
            else{
                while(!res.empty() && res.back() > 0 && res.back() + a < 0)
                    res.pop_back();
                if(res.empty() || res.back() < 0)
                    res.push_back(a);
                else if(res.back() + a == 0)
                    res.pop_back();
            }
        }
        return res;
    }
};