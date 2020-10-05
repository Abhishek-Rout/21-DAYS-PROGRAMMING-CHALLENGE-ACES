#include <iostream>

using namespace std;

class Solution {
public:
	bool intersect(vector <int>& a, vector <int>& b){
		return (b[0] <= a[0] && b[1] >= a[1]) || (a[0] <= b[0] && a[1] >= b[1]);
   }
   static bool cmp(vector <int> a, vector <int> b){
      return a[1] < b[1];
   }
   void printVector(vector < vector <int> > a){
      for(int i = 0; i < a.size(); i++){
         cout << a[i][0] << " " << a[i][1] << endl;
      }
      cout << endl;
   }
   int removeCoveredIntervals(vector<vector<int>>& a) {
      sort(a.begin(), a.end(), cmp);
      stack < vector <int> > st;
      for(int i = 0; i < a.size(); i++){
         if(st.empty() || !intersect(a[i], st.top())){
            st.push(a[i]);
         }
         else{
            vector <int> temp = a[i];
            while(!st.empty() && intersect(temp, st.top())){
               st.pop();
            }
            st.push(temp);
         }
      }
      return st.size();
   }
};