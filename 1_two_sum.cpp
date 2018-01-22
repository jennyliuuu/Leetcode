class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       
       //===========================================================
        // brute force
        vector<int> ret;
        vector<int>::iterator p = nums.begin();
        
        for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++)
        {
            p = find( it+1, nums.end(), target-*it );
            cout << *p <<endl;
            if ( p != nums.end() )
            {
                ret.push_back( it-nums.begin() );  // get the index and push into vector
                ret.push_back( p-nums.begin() );
            }
                
        }
        return ret;
        //===========================================================
        //===========================================================
        // brute force
        /*
        vector<int> ret;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i+1; j < nums.size(); j++)
                if( target-nums[i] == nums[j] )
                {
                    ret.push_back(i);
                    ret.push_back(j);
                }
        }
        return ret;
        */
        //===========================================================
    }
};