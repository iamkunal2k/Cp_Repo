// problem Link :
// https://www.codingninjas.com/studio/problems/893405?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/


//OPTIMAL SOLUTION

#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.

    int maxPrice = 0, minprice = INT_MAX;

    for(int i = 0; i < prices.size(); i++) {

        minprice = min(prices[i], minprice);
        maxPrice  = max(maxPrice, prices[i] - minprice);
    }
    return maxPrice;
}


// BRUTE FORCE
/*
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int maxprice = 0;

        for(int i = 0; i < prices.size(); i++) {

            for(int j = i + 1; j < prices.size(); j++) {
                
                if(prices[j] > prices[i]) {
                    maxprice = max( prices[j] - prices[i], maxprice);
                }
            }
        }
        return maxprice;
    }
};

*/