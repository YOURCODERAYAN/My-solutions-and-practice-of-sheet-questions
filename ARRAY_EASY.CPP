// FIRST PROBLEM OF  STRIVER SHEET 
//1.LARGEST ELEMENT IN THE ARRAY.
// THIS SOLUTION IS THE BRUTE FORCE SOLUTION
/*#include<bits/stdc++.h>
using namespace std;

int SortArr(vector<int> &arr){
    //step1-> sort the array
    sort(arr.begin(),arr.end());
    //step -> return the last index of the array
    return arr[arr.size()-1];
}
    int main(){
        vector<int> arr1={2,5,1,3,0};
        vector<int> arr2={8,10,5,7,9};
    
    cout <<"The largest element in the Array"<< SortArr(arr1)<< endl;
    cout<<"The largest elemnt in the Array " << SortArr(arr2)<< endl;
    }*/

// NOW THIS SOLUTION IS USING RECURSIVE APPROACH-> By using max variable
/*#include<bits/stdc++.h>
using namespace std;

int findthelargest(int arr[],int n){
    //using of max variable and initialize it with arr[0]
    int max=arr[0];
    //using the loop to traverse through the array
    for(int i=0;i<n;i++){
        //compare with every elemnts in the array
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}
    int main(){
        int arr1[]={2,5,1,3,0};
        int n=5;
        int max=findthelargest(arr1,n);
        cout<< "the largest elements is"<< max << endl;
    }*/

//2.FIND THE SECOND SMALLEST AND SECOND LARGEST ELEMENT IN THE ARRAY
//BRUTE FORCE APPROACH -> <LIMITED CASE IF THERE ARE NO DUPLICATE VALUES IN THE ARRAY
/*#include<bits/stdc++.h>
using namespace std;

void getelements(int arr[],int n){
    //edge case if the array contain no elements or contains 1 elements
    if(n==0||n==1)
    cout << -1 << " " << -1 << endl;

    // sort the array
    sort(arr,arr+n);
    int small=arr[1];
    int large=arr[n-2];
    cout << "the second smallest element is "<< small<< endl;
    cout<<"the second largest element is" << large<<endl;
}
    int main(){
        int arr[]={1,2,4,8,7,5};
        int n=sizeof(arr)/sizeof(arr[0]);
        getelements(arr,n);
        return 0;
    }*/

// THE BETTER APPROACH FOR THIS PROBLEM
/*#include<bits/stdc++.h>
using namespace std;

void get1(int arr[],int n){
    //edge case 
    if(n==0||n==1)
    cout << -1 << " "<< -1 << endl;
    //initialization of small,second_small and large ,second_large
    int small=INT_MAX, second_small=INT_MAX;
    int large=INT_MIN,second_large=INT_MIN;
    //first loop for finding the smallest and the largest elements
    for(int i=0;i<n;i++){
        small=min(small,arr[i]);
        large=max(large,arr[i]);
    }
    //now the second loop for finding the second_smallest and the second_largest
    for(int i=0;i<n;i++){
        if(arr[i]<second_small && arr[i]!=small)
            second_small=arr[i];
        
        if(arr[i]>second_large && arr[i]!=large)
            second_large=arr[i];
        
    }
    cout << "second samllest" << second_small << endl;
    cout << "second largest" << second_large << endl; 
}
    int main(){
        int arr[]={1,2,4,6,7,5};
        int n=sizeof (arr)/sizeof (arr[0]);
        get1(arr,n);
        return 0;
    }*/

// OPTIMAL APPROACH 
/*#include<bits/stdc++.h>
using namespace std;

int Ss(int arr[],int n){
    if(n<2)
        return -1;
    //Initialization of small and second_small
    int small=INT_MAX;
    int second_small=INT_MAX;

    //loop for traversal 
    for(int i=0;i<n;i++){
        if(arr[i]< small){
            second_small=small;
            small=arr[i];
        }
        else if(arr[i]<second_small && arr[i]!=small)
            second_small=arr[i];
    }
    return second_small;
}
// from this we will begin to find second largest
int Sl(int arr[],int n){
    if(n<2)
    return -1;
    int large=INT_MIN;
    int second_large=INT_MIN;
    //loop for traversal
    for(int i=0;i<n;i++){
        if(arr[i]> large){
            second_large=large;
            large=arr[i];
        }
        else if(arr[i]>second_large && arr[i]!=large)
            second_large=arr[i];
    }
    return second_large;
}
int main(){
    int arr[]={1,2,4,7,5};
    int n=sizeof (arr)/sizeof (arr[0]);
    int S=Ss(arr,n);
    int S1=Sl(arr,n);
    cout << "second small "<< S << endl;
    cout << " second large " << S1 << endl;
    return 0;
}*/

//3.CHECK IF THE ARRAY IS SORTED OR NOT 
//THIS IS SIMPLE PROBLEM WITH BASIC BRUTE AND OPTIMAL APPROACH
//BRUTE APPROACH
/*#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[],int n){
    //first loop
    for(int i=0;i<n;i++){
        //second loop
        for(int j=i+1;j<n;j++){
            //condition
            if(arr[j]<arr[i])
                return false;
        }
    }
    return true;
}
int main(){
    int arr[]={1,2,3,4,5},n=5;
    bool ans=isSorted(arr,n);
    if(ans) cout << "true" << endl;
    else cout << "false" << endl;
    

}*/
// OPTIMAL APPROACH 
//SO IN THIS APPROACH WE HAVE TO MADE IT THROUGH SINGLE TRAVERSAL
/*#include<bits/stdc++.h>
using namespace std;

bool sorted(int arr[],int n){
    //the loop for traversal 
    for(int i=1;i<n;i++){
        //condition 
        if(arr[i]<arr[i-1])
            return false;
    }
    return true;
}
int main(){
    int arr[]={1,7,4,4,5},n=5;
    bool ans=sorted(arr,n);
    if(ans) cout << "true" << endl;
    else cout << "false" << endl;
}*/

// 4. REMOVE DUPLICATES FROM SORTED ARRAY
//BRUTE FORCE APPROACH -> USING SET DATA STRUCTURE 
/*#include<bits/stdc++.h>
using namespace std;

    int duplicates(int arr[],int n){
        // declaring set data structure
        //for storing the values from the array to the set
        set<int> set;
        for(int i=0;i<n;i++){
            set.insert(arr[i]);
        }
        //declaring the size of set by k 
        int k=set.size();
        // from this we are filling back the array from the set 
        int j=0;
        // iterating through the set
        for(int x: set){
            arr[j++]=x;
        }
        return k;
    }
int main(){
    int arr[]={1,1,2,2,2,3,3};
    int n=sizeof (arr)/sizeof (arr[0]);
    int k=duplicates(arr,n);
    cout << "The array after removing the duplicates" << endl;
    //array traversing loop
    for(int i=0;i<k;i++){
        cout << arr[i] << " ";
    }
}*/
//OPTIMAL APPROACH -> TWO POINTER APPROACH 
/*#include <bits/stdc++.h>
using namespace std;

int Dup(int arr[],int n){
    //now declaration of two pointers--> i and j
    //we will initilaize i to 0
    // and the j pointer traverse through the whole array
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}

int main(){
    int arr[]={1,1,2,2,3,3,3,4};
    int n=sizeof (arr)/sizeof (arr[0]);
    int k=Dup(arr,n);
    cout << " removing all duplicates" << endl;
    for(int i=0;i<k;i++){
        cout << arr[i] << " ";
    }
}*/

//5.//LEFT ROTATE THE ARRAY BY ONE
//FIRST WE MUST GO WITH BRUTE FORCE SOLUTION

/*#include<bits/stdc++.h>
using namespace std;

void rotate (int arr[],int n){


//we have to proceeed by creating a temprary array of size n 
int temp[n];
    // this section is for storing the value of the array 
    //left side means previous of its current position
    for(int i=0;i<n;i++){
        temp[i-1]=arr[i];
    }
    // this is for storing the first index of the array 
    //to the last  index of the temp
    temp[n-1]=arr[0];
    for(int i=0;i<n;i++){
        cout << temp[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr[]={10,20,30,40,50};
    int n=5;
    rotate (arr,n);
}*/

//OPTIMAL SOLUTION OF THIS PROBLEM 
// HERE WE ARE NOT TAKING ANY EXTRA SPACE FOR STORING THE VALUES

/*#include<bits/stdc++.h>
using namespace std;

void solve(int arr[],int n){
// storing the first value or element of the array at the variable called temp
    int temp=arr[0]; 
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
//assinged the value of variable at the last index
    arr[n-1]=temp;
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int n=5;
    int arr[]={10,20,30,40,50};
    solve(arr,n);
}*/

//6. ROTATE THE ARRAY BY K ELEMENTS
//IN CASE OF RIGHT ROTATION 
//BRUTE FORCE APPROAC-> USING TEMP ARRAY
/*#include <bits/stdc++.h>
using namespace std;

void Rr(int arr[],int n,int k){

    // all edge cases
    if(n==0) // if there is no array
    return; 
    k=k%n; // suppose k=2 and n=5 then 2%5=2| still 2 
    if(k>n)//2>5 -> NO so go the main part 
    return;
// step1 --> copying k elements to temp array 
    int temp[k];
for(int i=n-k;i<n;i++){
    temp[i-n+k]=arr[i];
}
// step2 --> shifting remaining elements to the right
    for(int i=n-k-1;i>=0;i--){
        arr[i+k]=arr[i];
         
    }
// step3 --> Copy temp back to front
    for(int i=0;i<k;i++){
        arr[i]=temp[i];
    }
}
    int main(){
        int n=5;
        int arr[]={1,2,3,4,5};
        int k=2;
        Rr(arr,n,k);
        cout << " after rotating the values to the right" << endl;
        for(int i=0;i<n;i++){
            cout << arr[i]<< " ";
        } 
        return 0;
    }
*/
// REVERSAL METHOD
// same question we have to rotate the array elemnts by right

/*#include<bits/stdc++.h>
using namespace std;

void Reverse(int arr[],int start,int end){

    // reversal algorithm 
    while(start <=end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

// function to rotate k elements
void Rrr(int arr[],int n,int k){

    // Reverse first n-k elements
    Reverse(arr,0,n-k-1);
    //Reverse last k elements
    Reverse(arr,n-k,n-1);
    //Reverse the whole array
    Reverse(arr,0,n-1);
    }

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=7 ;
    int k=2;
    Rrr(arr,n,k);
    cout << " reversal right" ;
    for(int i=0;i<n;i++)
        cout << arr[i] << "";
        cout << endl;
        return 0;
    
}*/

//7.MOVE ALL ZEROS TO THE END OF THE ARRAY
// BRUTE FORCE APPROACH -> WE CAN THINK OF IS THAT USAGE OF AN EXTRA ARRAY
/*#include<bits/stdc++.h>
using namespace std;

vector<int> moveZeoros(int n,vector<int> a){
    // declaration of a temp array
    vector<int> temp;

    //Step1: Copy all non zeros elements 
    //from the original array to the temporoary array
    for(int i=0;i<n;i++){
        
        //condition
        if(a[i]!=0)
            temp.push_back(a[i]);
    }

    //Step2:determining the size of temp array 
    //means which contain all non zero elements
        int nz=temp.size();
    
    //Step3:Copy back all elements from temp array to original array
    //fill first nz places of original array
    for(int i=0;i<nz;i++){
        a[i]=temp[i];
    }
    //Step4:Now the final step we have to fill back array with zeros 
    for(int i=nz;i<n;i++){
        a[i]=0;
    }
    return a;
}
int main(){
     vector<int> arr={1,0,2,3,2,0,0,4,5,1};
     int n=10;
     vector<int> ans=moveZeoros(n,arr);
     for(auto &it:ans){
        cout << it << " "; 
     }
     return 0;
}*/

// OPTIMAL APPROACH 
//TWO POINTER APPROACH i and j
/*#include <bits/stdc++.h>
using namespace std;

vector<int> move (int n,vector<int> a){
    // initialize j that will store the index of first zero
    int j=-1;

    //now place the pointer j 
    for(int i=0;i<n;i++){
        if(a[i]==0){
            j=i;
            break;
        }
    }
    //if non-zero element present then 
    if(j==-1){
        return a;
    }
    //now move the pointer i and j
    // and swap accordingly
    for(int i=j+1;i<n;i++){
        if(a[i]!=0){
            swap(a[i],a[j]);
            j++;
        }
    }
    return a;
}
int main(){
    vector<int> arr={1,0,2,3,2,0,0,4,5,1};
    int n=10;
    vector<int> ans=move(n,arr);
    for(auto &it:ans){
        cout << it << " ";
    }
    return 0;
}*/

//8.LINEAR SEARCH 
// SIMPLE APPROACH USING 
/*#include <bits/stdc++.h>
using namespace std;

int search(int arr[],int n,int num){
    // loop for searching or traversing the whole array
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            return i;
        }
       
    }
     return -1;
}
int main(){
    int arr[]={1,3,4,6,7};
    int num=6;
    int n=sizeof (arr)/sizeof (arr[0]);
    int val=search(arr,n,num);
    cout << val ;
}*/

//9. FIND THE UNION OF THE GIVEN ARRAY
// WE MAY CAN USE MAP , SET AND TWO POINTER APPROACH 
// BUT THIS TWO POINTER APPROACH CAN ONLY BE USED IN IN CASE OF SORTED ARRAY
//BUT MAP AND SET APPROACH CAN BE USED IN CASE OF UNSORTED ARRAY

// BUT HERE WE ARE USING SET APPROACH
/*#include<bits/stdc++.h>
using namespace std;

vector<int> FindUnion(int arr1[],int arr2[],int n,int m){

        //declaration of set 
        set<int> s;
        // declaration of union vector which we are using as extra space
        vector<int> Union;

        // this is first loop for traversing the elements of arr1
        for(int i=0;i<n;i++){
            s.insert(arr1[i]);
        }
        //after this this is for arr2
        for(int i=0;i<m;i++){
            s.insert(arr2[i]);
        }

        // after this we are now traversing through the set and take those distinct value 
        // into union vector
        for(auto &it:s){
            Union.push_back(it);
        } 
    return Union;
}
    int main(){
        int n=10,m=7;
        int arr1[]={1,2,3,4,5,6,7,8,9,10};
        int arr2[]={2,3,4,4,5,11,12};
        vector<int> Union=FindUnion(arr1,arr2,n,m);
        cout << " the union array is" << endl;
        for(auto &val:Union)
        cout << val << " ";
        return 0;
    }*/

//10. FIND THE MISSING NUMBER IN THE ARRAY
// IN THIS PROBLEM WE WILL GO THROUGH BRUTE -> BETTER -> OPTIMAL 
//BRUTE FORCE APPROACH -> LINEAR SEARCH

/*#include<bits/stdc++.h>
using namespace std;

int missing(vector<int>&a ,int N){

//outer loop i that will traverse from 1 to N;
for(int i=1;i<=N;i++){

    // declaration and initialization of flag variable 
    int flag=0;

    // now we have to declare another loop which will traverse the array 
    // and find the elements
    for(int j=0;j<a.size();j++){
        if(a[j]==i){
            flag=1;
            break;
        }
    }
    // checking condition if the element is missing 
    if(flag==0) return i;
    }
   
    
}

int main(){
    vector<int> a={1,3};
    int N=3;
    int ans=missing(a,N);
    cout << " The missing value is " << ans << endl;
    return 0;

}*/

// AFTER THIS WE ARE USING BETTER APPROACH
//IN THIS APPROACH WE ARE USING HASHING

/*#include<bits/stdc++.h>
using namespace std;

int Missingnum(vector<int>& arr,int n){

    //declartion of hash of size n+1 and initializing with 0
    int hash[n+1]={0};

    // step 2:
    for(int i=0;i<arr.size();i++)
        hash[arr[i]]++;

    // step 3:
    for(int i=1;i<n;i++){
        if(hash[i]==0){
            return i;
        }
    }
    return -1;
    
}
int main(){
    vector<int> arr={1,2,4,5};
    int n=5;
    int ans=Missingnum(arr,n);
    cout << " the missing value is " << ans << endl;
    return 0;
}*/

//OPTIMAL APPROACH 
//In this approach we may can use summation method and also XOR method 
// both are giving same time and space complexity

//Summation approach
/*#include<bits/stdc++.h>
using namespace std;

int missing(vector<int>&arr,int n){

    // sum of first n numbers
    int sum=n*(n+1)/2;

    // sum of all array elements

    int s2=0;
    for(int i=0;i<n-1;i++){
        s2+=arr[i];
    }

    int miss=sum-s2;
    return miss;
}
int main(){
    vector<int> arr={1,2,4,5};
    int n=5;
    int ans=missing(arr,n);
    cout << " therefore missing element in the array is" << endl; 
    cout << ans ;
    return 0;
}*/

//11.COUNT MAXIMUM CONSECUTIVE ONE'S IN THE ARRAY

//SIMPLE STRAIGHT FORWARD APPROACH WE ARE THINKING OF 
/*#include<bits/stdc++.h>
using namespace std;

int findmax(vector<int> &nums){

    //initialization of cnt and max_count variable with 0
    int cnt=0;
    int maxx=0;
    // traversing the array
    for(int i=0;i<nums.size();i++){
        // if we find 1 then what to do
        if(nums[i]==1){
            cnt++;
            
            
        }
        // if we find 0 then what to do 
        else{
            cnt=0;
        }

        maxx=max(maxx,cnt);
    }
    return maxx;
}
int main(){
    vector<int> nums={1,1,0,1,1,1,1};
    int ans=findmax(nums);
    cout << " the maximum number is " << endl;
    cout << ans;
    return 0;
}*/

//12.FIND THE ARRAY THAT APPEAR ONCE AND THE OTER NUMBER TWICE 
//IN THIS PROBLEM WE SHOULD GO THROUGH THE BRUTE ,BETTER AND OPTIMAL SOLUTION 
//BRUTE FORCE APPROACH -> LINEAR SEARCH 

/*#include<bits/stdc++.h>
using namespace std;

int get(vector<int> &arr){

    int cnt=0;

    int n=arr.size();

    //loop to select the array elements one after another
    for(int i=0;i<n;i++){
        int nums=arr[i];
        int cnt=0;
    // another loop for traversing the array for searching and increment the count variable
        for(int j=0;j<n;j++){
            if(arr[j]==nums){
                cnt++;
            }
        }
        if (cnt==1) return nums;

    }
    return -1;
}
int main(){
    vector<int> arr={4,1,2,2,1,2};
    int n=6;
    int ans=get(arr);
    cout <<" the number is " << endl << ans ;
    return 0;

}*/

//BETTER APPROACH 
// now at first we are using array hashing approach

/*#include<bits/stdc++.h>
using namespace std;

int one(vector<int> &nums){

    // declaring the size of the array
    int n=nums.size();

    // find the maximum 
    int maxx=nums[0];
    for(int i=0;i<n;i++){
        maxx=max(maxx,nums[i]);
    }

    // declare the hash array 
    // and after that hash the given array
    vector<int> hash(maxx+1,0);
    //we are declaring a hash array of size maxx+1 and 
    //initilize with 0 
    for(int i=0;i<n;i++){
        hash[nums[i]]++;
    }

    // now we have to interate through the hash array and 
    // found the element which frequency is 1 and return it 
    for(int i=0;i<n;i++){
        if(hash[nums[i]]==1){
            return nums[i];
        }
    }
    return -1;
}

int main(){
    vector<int> nums={4,1,2,1,2};
    int ans=one(nums);
    cout << " the answer is " << ans ;
    return 0;
}*/

// ANOTHER APPROACH OF USING MAP DATASTRUCTURE 
/*#include<bits/stdc++.h>
using namespace std;

int Elements(vector<int> &arr){

    int n=arr.size();


    // we have to declare a hash map 
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    // now we have to find the element with the single element 
    // and return it

    for(auto &it:mpp){
        if(it.second==1){
            return it.first; 
        }
    }
    return -1;
}
int main(){
    vector<int> arr={4,1,2,1,2};
    int ans=Elements(arr);
    cout << "by using this we get the answer " << ans;
    return 0; 
}*/

//OPTIMAL APPROACH 
// XOR APPROACH
/*#include<bits/stdc++.h>
using namespace std;

int getelements(vector<int> &nums){

    int n=nums.size();

    // declaring xor of all array elements
    int xorr=0;
    for(int i=0;i<n;i++){
        xorr=xorr^nums[i];
    }
    return xorr;
}
int main(){
    vector<int> nums={4,1,2,1,2};
    int ans=getelements(nums);
    cout << " the final answer is " << ans;
    return 0;

}*/

//13. LONGEST SUBARRAY WITH GIVEN SUM K 

// BRUTE FORCE SOLUTION USING 3 LOOPS

/*#include<bits/stdc++.h>
using namespace std;

int subarray(vector<int> &arr ,long long k){
    int n=arr.size(); // size of the array

    //initialization of len variable which we would be result
    int len=0;

    for(int i=0;i<n;i++){// starting index 
        for(int j=i;j<n;j++){// ending index


            // add all elements
            // subarray arr[i....j]
            long long s=0;
            for(int k=i;k<=j;k++){
                s+=arr[k];
            }
            if(s==k)
                len=max(len,j-i+1);
        }
    }
    return len;
}

int main(){
    vector<int> arr={2,3,5,1,9};
    long long k=10;
    int val=subarray(arr,k);
    cout << " the sum of subarray would be " << val;
    return 0;
}*/


// SLIGHTLY BETTER APPROACH --> USING TWO LOOPS 

/*#include<bits/stdc++.h>
using namespace std;

int sub(vector<int> &arr ,long long k){

    int n=arr.size();

    // initialization of len variable 
    int len=0;
    for(int i=0;i<n;i++){// starting index
        long long s=0;
        for(int j=i;j<n;j++){//ending index

            // no extra loop we are adding directly 
            s+=arr[j];

            if(s==k)
            len=max(len,j-i+1);
        }
    }
    return len;
}
int main(){
    vector<int> arr={2,3,5,1,9};
    long long k=10;
    int ans=sub(arr,k);
    cout << " the answer is " << ans;
    return 0;
}*/

// NOW BETTER APPROACH -> HASHING 

/*#include <bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int>& a, long long k) {
    int n = a.size(); // size of the array.

    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    for (int i = 0; i < n; i++) {
        //calculate the prefix sum till index i:
        sum += a[i];

        // if the sum = k, update the maxLen:
        if (sum == k) {
            maxLen = max(maxLen, i + 1);
        }

        // calculate the sum of remaining part i.e. x-k:
        long long rem = sum - k;

        //Calculate the length and update maxLen:
        if (preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }

        //Finally, update the map checking the conditions:
        if (preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }

    return maxLen;
}

int main()
{
    vector<int> a = {2, 3, 5, 1, 9};
    long long k = 10;
    int len = getLongestSubarray(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}*/

// OPTIMAL APPROACH -> TWO POINTER APPROACH

#include<bits/stdc++.h>
using namespace std;

int get2(vector<int> &a ,long long k){

    // declare the size of the array
    int n=a.size();

    long long sum=a[0];
    int maxlen=0;

    int left=0, right=0;// declartion of two pointers
    while(right < n){
    // if sum > k then reduce the subarray from left
    //until sum becomes less or equal to k
    while(left<=right && sum>k){

        sum-=a[left];
        left++;
    }
    // if sum==k then update maxlen
    if (sum==k){
        maxlen=max(maxlen,right-left+1);    
    }

    //move the right pointer 
    right++;
    if(right<n)  sum+=a[right];
    
    }
return maxlen;
}
int main(){
    vector<int> a={2,3,5,1,9};
    long long k=10;
    int len=get2(a,k);
    cout << " the optimal answer is" << len << endl;
    return 0;
}

