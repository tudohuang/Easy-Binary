#include <bits/stdc++.h>
using namespace std;
int binary_search(vector<int> &nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (nums[mid] > target) {
            right = mid - 1;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            return true;
        }
    }
    return false;
}
int main(){
int n,q,t,x,l;
cin>>n>>q;
vector<int> guild(n);
for(int i=0;i<n;i++){
    cin>>x;
    guild[i] = x; 
}
for(int ii=0;ii<q;ii++){
cin>>l;
if(binary_search(guild, l)==true){
    cout <<"Yes"<<endl ;
}else{
    cout<<"No"<<endl;
}
}
}
