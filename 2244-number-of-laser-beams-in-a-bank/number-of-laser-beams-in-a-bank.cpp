class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n=bank.size();
        if(n<2) return 0;
        vector<int>ans;

        //pushing total sum of row from 2D vector to  new 1D `ans` vector
        for(int i=0;i<n;i++){
            int sum=0;
            for(auto j: bank[i]){
                if(j=='1') sum++;
            }
            if(sum>0)  ans.push_back(sum);
        }

        if(ans.size()<2) return 0;
        int laser=0;
        
        //total possible beams can be formed in two adjacent rows
        for(int i=0;i<ans.size()-1;i++){
            laser = laser+ (ans[i]*ans[i+1]);
        }
        return laser;
    }
};