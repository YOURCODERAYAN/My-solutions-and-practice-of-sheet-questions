#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &nums,int low,int mid,int high){
    vector<int> temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right <=high){
        if(nums[left]>nums[right]){
            temp.push_back(nums[left]);
            left++;
        }
        else{
            temp.push_back(nums[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(nums[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(nums[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        nums[i]=temp[i-low];
    }
}
void mergesort(vector<int> &nums,int low,int high){
    if(low>=high) return;
        int mid=(low+high)/2;
        mergesort(nums,low,mid);
        mergesort(nums,mid+1,high);
        merge(nums,low,mid,high);
    
}

    string largestnumber(vector<int> & nums){
        mergesort(nums,0,nums.size()-1);
        string result="";
        for(int i=0;i<nums.size();i++){
        result+= to_string(nums[i]);
     if(i!=nums.size()-1)
        result+="";
    }
    return result;
     
}
int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    string sortedStr = largestnumber(nums);
    cout << sortedStr << endl;

    return 0;
}
