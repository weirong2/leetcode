class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ret=0, buy_pos=-1, sell_pos=-1;
        int prices_size = prices.size();
        for (int y=1; y<prices_size;y++) {
            int x=y-1;
            //cout << "x: "<< x << " y: "<< y << " -- prices[x]: " << prices[x] << " prices[y]: " << prices[y] << endl;
            if (prices[x]>=prices[y]) {
                buy_pos=y;
                if (y==prices_size-1) sell_pos=prices_size-1;
                //cout << ">>" << " buy_pos: " << buy_pos << " sell_pos:" << sell_pos << endl;
            }
            else if (prices[x]<=prices[y]) {
                if (x==0) buy_pos=x;
                sell_pos=y;
                //cout << "<<" << " buy_pos: " << buy_pos << " sell_pos:" << sell_pos << endl;
            }
            if (sell_pos>buy_pos) {
                ret += prices[sell_pos]-prices[buy_pos];
                buy_pos = sell_pos;
            }
        }
        return ret;
    }
};