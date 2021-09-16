// class Solution {
// public:
//     vector<int> twoSum(vector<int>& arr, int target) {
//         map<int,int> m;
//         vector<int> v;
//         int sz = arr.size();
//         for(int i=0;i<sz;i++)
//         {
//            m[arr[i]] = i;
//         }
     
//         for(int i=0;i<sz;i++)
//         {
//             if(m[target-arr[i]] && m[target-arr[i]] != i)
//             {
                
//                 v.push_back(i);
//                 v.push_back(m[target-arr[i]]);
//                 break;
//             }
//         }
//         return v;
//     }
// };