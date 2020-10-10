#include <iostream>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {

        int first=0, last=nums.size();
        
	while (first <= last) { 

        	int m = first + (last - first) / 2; 
        	if (nums[m] == target) 
        		return m; 
        	if (nums[m] < target) 
        		first = m + 1; 
        	else
        		last = m - 1; 
    	}
    
	return -1;
    	}
};