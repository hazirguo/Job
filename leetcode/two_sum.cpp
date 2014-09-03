//https://oj.leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        int i, j;
        vector<int> sortedNumbers(numbers);
        sort(sortedNumbers.begin(), sortedNumbers.end());
        vector<int> result;
        for (i=0, j=sortedNumbers.size()-1; i<j; ) {
            if (sortedNumbers[i]+sortedNumbers[j] == target)
            {
                int cnt = 0;
                for(int k=0; k<numbers.size(); k++)
                {
                    if (numbers[k] == sortedNumbers[i] || numbers[k] == sortedNumbers[j]){
                        result.push_back(k+1);
                        cnt++;
                        if (cnt == 2)
                            return result;
                    }
                }
            }
            else if (sortedNumbers[i]+sortedNumbers[j] > target)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
    }
};
