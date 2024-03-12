class Solution {
public:
//long long int binarySearch(int n){
//     int mysqrt(int x){
//     int s=0;
//     int e=x;
//     long long int mid=s+(e-s)/2;
//    // long long int ans=-1;
//     int ans=-1;
//     while(s<=e){
//         long long int square=mid*mid;
//         if(square==n)
//         return mid;
//         if(square<n){
//             ans=mid;
//             s=mid+1;
//         }
//         else
//         {
//             e=mid-1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return ans;
// }
   int mySqrt(int x) {
        int s=0;
       int e=x;
       long long int mid=s+(e-s)/2;
       int ans=-1;
       while(s<=e){
       if(mid*mid==x){
           return mid;
       }
       else if(mid*mid<x){
           //ans store
           //right me jao
           ans=mid;
           s=mid+1;
       }
       else{
           //left me jao
           e=mid-1;
       }
           mid=s+(e-s)/2;
    }
       return ans;
   }
};