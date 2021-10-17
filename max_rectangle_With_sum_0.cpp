/*
    Largest rectangular sub-matrix whose sum is 0
    https://www.geeksforgeeks.org/largest-rectangular-sub-matrix-whose-sum-0/
*/

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution{
    public:
        vector<vector<int>> max_rectangle(vector<vector<int>> &grid){

            int mx = 0; //represents size of max rectangular matrix
            int rs = -1 , re = -1 , cs = -1 , ce = -1; //represents starting of row and column of ans matrix

            
            for(int i = 0 ; i < grid.size() ; ++i){ // row starting
                
                vector<int> helper(grid[0].size() , 0);

                for(int j = i ; j < grid.size() ; ++j){ //row ending
                    unordered_map<int , int> mp;    //for finding if sum already exist

                    int csum = 0;
                    mp[0] = -1;

                    for(int c = 0 ; c < grid[0].size() ; ++c){  // finds sum of col
                        helper[c] += grid[j][c];
                        csum += helper[c];
                
                        if(mp.find(csum) == mp.end()){
                            mp[csum] = c;
                        }
                        else{
                            int crr = (c - mp[cs])*(j - i + 1);
                            if(mx < crr){
                                mx = crr;
                                rs = i;
                                re = j;
                                cs = mp[csum] + 1;
                                ce = c;
                            }
                        }

                    }
                }

            }
            vector<vector<int>> ans;
            for(int i = rs ; i <= re ; ++i){
                vector<int> vr;
                for(int j = cs ; j <= ce ; ++j){
                    vr.push_back(grid[i][j]);
                }
                ans.push_back(vr);
            }
            return ans;
        }
};

int main(){

    int row,col;
    cin>>row>>col;

    vector<vector<int>> grid;

    for(int i = 0 ; i < row ; ++i){
        vector<int> vr;
        for(int j = 0 ; j < col ; ++j){
            int x;
            cin>>x;
            vr.push_back(x);
        }
        grid.push_back(vr);
    }

    Solution sl;

    vector<vector<int>> ans = sl.max_rectangle(grid);

    for(int i = 0 ; i < ans.size() ; ++i){
        
        for(int j = 0 ; j < ans[0].size() ; ++j){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}