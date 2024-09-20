// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

class Solution {
public:

    vector<int> searchRange(vector<int>& input, int target) {

        int n=input.size();
        int start=0;
	    int end=n-1;

	    int ans1=-1;
	    int ans2=-1;

        while(start <= end)
        {
            int mid=start + (end-start)/2;

            if(target > input[mid])
            {
                start=mid+1;
            }
            else if(target < input[mid])
            {
                end=mid-1;
            }
            else
            {
                ans1=mid;
                end=mid-1;
            }
        }

        start=0;
	    end=n-1;

        while(start <= end)
        {
            int mid=start + (end-start)/2;

            if(target > input[mid])
            {
                start=mid+1;
            }
            else if(target < input[mid])
            {
                end=mid-1;
            }
            else
            {
                ans2=mid;
                start=mid+1;
            }
        }

        vector<int> result;
        result.push_back(ans1);
        result.push_back(ans2);
        return result;

    }
};