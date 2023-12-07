class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> arr={first};
        for(int &n:encoded)
            arr.push_back(arr.back()^n);
        return arr;

    }
};