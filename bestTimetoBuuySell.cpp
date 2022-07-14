#include<iostream>
#include<vector>

using namespace std ;

    int maxProfit(vector<int>& prices) {
        
        int max = 0 ;
        for(int i = 1, b = 0 ; i< prices.size(); i++){
            if((prices[i] - prices[b]) > max)
                max = prices[i] - prices[b] ;
            else
                b++ ;
                
        }
        return max ;
    }

    int main(){
        vector<int> prices = {7,1,5,3,6,4};
        cout << maxProfit(prices) << endl;
        return 0;
    }