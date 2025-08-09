/*#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int mini=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[mini]){
            mini=j;
            }
        }
        int temp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
    }



}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin >> arr[i];
    selection_sort(arr,n);
    for(int i=0;i<n;i++){
    cout << arr[i] << " ";
    }
    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
void bubble_Sort(int arr[],int n){
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
            }

        }

    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin >> arr[i];
    bubble_Sort(arr,n);
    for(int i=0;i<n;i++){
    cout << arr[i] << " ";
    }
    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
        while( j > 0 && arr[j-1]>arr[j]){
        int temp=arr[j-1];
        arr[j-1]=arr[j];
        arr[j]=temp;
        j--;
        }
    }

}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin >> arr[i];
    insertion_sort(arr,n);
    for(int i=0;i<n;i++){
    cout << arr[i] << " ";
    }
    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
int  romanToInt(string s,int num){
    vector<pair<string,int>> val={
        {"M",1000},{"CM",900},{"D",500},{"CD",400},{"C",100},{"XC",90},
        {"L",50},{"XL",40},{"X",10},{"IX",9},{"V",5},{"IV",4},{"I",1}
    };
    string res;
    for(auto & p:val){
        while(num>=p.second){
            res+=p.first;
            num-=p.second;
        }
    }
    return num;
}*/
/*#include <bits/stdc++.h>
using namespace std;
vector<int> merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void merge_sort(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}
int main()
{
    vector<int> arr = {9, 4, 7, 6, 3, 1, 5, 8};
    int n = 8;
    cout << "Before sorting array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    merge_sort(arr, 0, n - 1);
    cout << "After:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
    void divide(int dividend ,int divisor){
        int count=0;
        while(dividend>=divisor){
             dividend=dividend-(-divisor);
            count++;
           
        }
        cout << count << endl;
         
    }
    int main(){
        int n,m;
        cin >> n;
        cin >> m;
        divide(n,m);
        return 0;
    }*/

/*#include<bits/stdc++.h>
using namespace std;
bool isEven(int n){
    int rem=n%2;
    if(rem==0){
        cout << "yes";
    }
    else{
        cout << "this is not even";
    }
}
int main(){
    int n;
    cin >>n;
    isEven(n);
}*/

/*#include<bits/stdc++.h>
using namespace std;
int add(int nums){
    int count =0;
    while(nums>0){
        int lastdigit=nums%10;
        count=count+1;
        nums=nums/10;
    }
    cout << count ;
}
int main(){
    int n;
    cin >> n;
    add(n);
}*/
/*#include<bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr,int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}
void qs(vector<int> &arr,int low,int high){
    if(low<high){
        int pindex=partition(arr,low,high);
        qs(arr,low,pindex-1);
        qs(arr,pindex+1,high);
    }
}
vector<int> quick_sort(vector<int> &arr){
    qs(arr,0,arr.size()-1);
    return arr ;
}
int main(){
    vector<int> arr={4, 6, 2, 5, 7, 9, 1, 3};
    int n=arr.size();
    cout << "BEFORE USING QUICK SORT" << endl;
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    arr= quick_sort(arr);
    cout << "AFTER USING QUICK SORT" <<" \n";
    for(int i=0;i<n;i++){
        cout << arr[i]<< " ";
    }
    cout << " \n";
    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
void sortcolors( vector<int> &nums,int n){
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(nums[j]>nums[j+1]){
            swap(nums[j+1],nums[j]);
        }
    }
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
    cin >> nums[i];
    }
    sortcolors(nums,n);
    for(int i=0;i<n;i++){
    cout << nums[i] << " ";
}
return 0;
}*/
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
