// class Solution {
// public:
//     void moveZeroes(vector<int>& arr) {
//         int cnt=0,pos=0,sizee = arr.size();
//         for(int i=0;i<sizee;i++)
//         {
//             if(arr[i] == 0)
//             {
//                 cnt++;
//                 continue;
//             }
//             arr[pos] = arr[i];
//             pos++;
//         }
//         for(int i=sizee-1;i>=pos;i--)
//         {
//             arr[i] = 0;
//         }
//     }
// };