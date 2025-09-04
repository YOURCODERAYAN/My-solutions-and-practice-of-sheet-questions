// THIS IS STRIVER SHEET ARRAY MEDIUM PROBLEMS SOLUTION 
// 1. 2 SUM:

// this question is variant type 1

/*#include<bits/stdc++.h>
using namespace std;

string twosum(int n,vector<int> &arr,int target){

    //outer loop
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){

            //main condition
            if(arr[i]+arr[j]==target)
                return "yes";
    
            }
    }
        return "no";
}

int main(){

    vector<int> arr={2,6,5,8,11};
    int n=5;
    int target=14;
    string ans=twosum(n,arr,target);
    cout << " the answer is " << ans ;
    return 0;*/


// question variant type 2

// In this we have to return indicies 

/*#include<bits/stdc++.h>
using namespace std;

vector<int> two(int n,vector<int> &arr,int target){

    vector<int> ans;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){

            if(arr[i]+arr[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }

    return {-1,-1};
}
int main(){
    vector<int> arr={2,6,5,8,11};
    int n=5;
    int target=14;
    vector<int> val=two(n,arr,target);
    cout << "now this answer will be :["<< val[0] << "," << val[1] <<"]" ;
    return 0;

}*/

//BETTER APPROACH

// USING OF HASHMAP
//variant 1:

/*#include<bits/stdc++.h>
using namespace std;

string twoS(int n,vector<int> &arr,int target){
    unordered_map<int,int> mpp;

    //loop for traversing the array 
    for(int i=0;i<n;i++){
        int num=arr[i];
        int more_needed=target-num;

        if(mpp.find(more_needed)!=mpp.end()){
            return "yes";
        }
        mpp[num]=i;
    }
    return "no";
}
    int main(){
        vector<int> arr={2,6,5,8,11};
        int n=5;
        int target=14;
        string ans=twoS(n,arr,target);
        cout << " the better approach will be " << ans;
        return 0;
    }*/

// variant 2: return the indices

/*B#include<bits/stdc++.h>
using namespace std;

vector<int> two(int n,vector<int> &arr,int target){

    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        int num=arr[i];
        int more_needed=target-num;

        if(mpp.find(more_needed)!=mpp.end()){
            return{mpp[more_needed], i};
        }
        mpp[num]=i;
    }
    return {-1,-1};
}
int main(){
    vector<int> arr={2,6,5,8,11};
    int target=14;
    int n=5;
    vector<int> ans=two(n,arr,target);
    cout << " the answer is  :["<< ans[0] << "," << ans[1] << "]";
    return 0;

}*/

//OPTIMAL APPROACH --> TWO POINTER 

/*#include<bits/stdc++.h>
using namespace std;

string TwoSum(int n,vector<int> &nums,int target){

    // sort the given array
    sort(nums.begin(),nums.end());

    //place the pointers left and right
    int left=0,right=n-1;

    //loop for traversing
    while(left<right){
        int sum=nums[left]+nums[right];
        if(sum==target){
            return "yes";
        }

        else if(target>sum) left++;
        else right--;
    }
    return "no";
}

int main(){
    vector<int> nums={2,6,5,8,11};
    int n=5;
    int target=14;
    string ans=TwoSum(n,nums,target);
    cout << " the answer is :"<< ans ;
    return 0;
}*/


//2. SORT THE ARRAY OF 0'S , 1'S , 2'S 

// WE CAN GO TO BETTER SOLUTION 

/*#include<bits/stdc++.h>
using namespace std;

void elements(int n,vector<int> &arr){

    // declaration of three count variables 
    // count0 count1 and count2
    // for three seperate elements such as
    // count0 is for 0; count1 is for 1 and count2 is for 2

    int count0=0,count1=0,count2=0; // we will initilaize it to 0 
    for (int i=0;i<n;i++){
        if(arr[i]==0) count0++;
        else if(arr[i]==1) count1++;
        else count2++;
    }

    // Replace the places with original array
    for(int i=0;i<count0;i++) arr[i]=0;// replacing 0's
    for(int i=count0;i<count0+count1;i++) arr[i]=1;//replacing 1's
    for(int i=count0+count1;i<n;i++) arr[i]=2;//replacing 2's

}

int main(){
    vector<int> arr={0,2,1,2,0,1};
    int n=6;
    elements(n,arr);
    cout << " the answer will be " << endl;
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}*/

// OPTIMAL APPROACH --> DUTCH NATIONAL FLAG ALGORITHM 

/*#include<bits/stdc++.h>
using namespace std;

void sortarray(vector<int> &arr,int n){

    // we have to place the pointers 
    int low=0, mid=0, high=n-1;

    while(mid<=high){
        // 1st condition
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }

        // 2nd condition

        else if(arr[mid]==1){
            mid++;
        }

        //3rd condition
        else {
            swap(arr[high],arr[mid]);
            high--;
        }
    
    }

}

int main(){
    vector<int> arr={0,2,1,2,0,1};
    int n=6;
    sortarray(arr,n);
    cout << " the answer of optimal solution is " << endl;

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}*/

//3. FIND THE MAJORITY ELEMENT THAT OCCURS MORE THAN N/2 TIMES 

// BRUTE FORCE APPROACH 
// EXTREME SIMPLE NAIVE APPROACH KEEING COUNT VARIBLE 

/*#include<bits/stdc++.h>
using namespace std;

int majority(vector<int> a){
    // keeping size of the array
    int n=a.size();

    // selected element is a[i]
    for(int i=0;i<n;i++){
    // couting freq of a[i]
    int cnt=0;
    for(int j=0;j<n;j++){
        if(a[j]==a[i])
        cnt++;
    }
    if(cnt>(n/2))
    return a[i];

    }
    return -1;
}
int main(){
    vector<int> a={2,2,1,1,1,2,2};
    int ans=majority(a);
    cout << " the answer to this question is " << ans << endl;
    return 0;

}*/

// BETTER SOLUTION --> HASH MAP APPROACH 

/*#include<bits/stdc++.h>
using namespace std;

int major(vector<int> a){

    int n=a.size();

    // declaration of map 
    map<int,int> mpp;

    for(int i=0;i<n;i++){
        mpp[a[i]]++;
    }

    for(auto it:mpp){
        if(it.second > (n/2)){
            return it.first;
        }
    }
    return -1;

}
int main(){
    vector<int> a={2,2,1,1,1,2,2};
    int ans=major(a);
    cout << "the answer of better approach is" << ans << endl;
    return 0;
}*/

// OPTIMAL SOLUTION 
// MOORE VOTING ALGORITHM 

/*#include<bits/stdc++.h>
using namespace std;

int major(vector<int> v){
// declaring the size of the array
    int n=v.size();

    int cnt=0;// declartion and initialization of count
    int ele;// declaration of element 


    // applying the algorithm 
    for(int i=0;i<n;i++){
        if(cnt==0){
            cnt=1;
            ele=v[i];
         }
         else if(ele==v[i]) cnt++;
         else cnt--;
    }

    //now checking if the stored element 
    // is the majority ones or not 
    int cnt1=0;
    for(int i=0;i<n;i++){
        if(v[i]==ele) cnt1++;
    }

    if(cnt1 > (n/2)) return ele;
    return -1;
}

int main(){

    vector<int> v={ 2,2,1,1,1,2,2};
    int ans=major(v);
    cout << " the answer of the optimal approach : " << ans << endl;
    return 0;
}*/


//4. MAXIMUM SUBARRAY SUM IN AN ARRAY

//BRUTE FORCE ALGORITHM 

/*#include<bits/stdc++.h>
using namespace std;

int maxSubArray(int arr[],int n){

    int maxii=INT_MIN;// MAXIMUM SUM

    //declaration of first loop
    for(int i=0;i<n;i++){
        //declaration of second loop
        for(int j=i;j<n;j++){

            int sum=0;// we are taking sum as 0 initially 
            // declaring another loop
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }

            //finding the maximum
            maxii=max(maxii,sum);

        }
    }
    return maxii;

}
int main(){
    int arr[]={1,3,2};
    int n=sizeof (arr) / sizeof (arr[0]);

    int maxi=maxSubArray(arr,n);
    cout << " the answer we got from brute force solution" << maxi << endl;
    return 0; */

    // BETTER APPROACH 

    /*#include<bits/stdc++.h>
    using namespace std;

    int maxsub(int arr[],int n){

        int maxx=INT_MIN;

        for(int i=0;i<n;i++){

            int sum=0;
            for(int j=i;j<n;j++){

                sum+=arr[j];
            }
            maxx=max(maxx,sum);
        }
         return maxx;
        
    }
     
    
    int main(){

        int arr[]={1,3,2};
        int n=sizeof (arr)/sizeof (arr[0]);
        int maxi=maxsub(arr,n);
        cout << " the better approach solution is " << maxi << endl;
        return 0;
    }*/
// OPTIMAL APPROACH 

//  WE HAVE TO USE KADANE'S ALGORITHM TO SOLVE THIS PROBLEM

/*#include<bits/stdc++.h>
using namespace std;

long long maxsubarray(int arr[],int n){

    // initialization of maxi 
    long long maxi=LONG_MIN;
    //initialization of sum variable
    long long sum=0;

    // loop for traversing the array 
    for(int i=0;i<n;i++){
        sum+=arr[i];

        // condition 1: 
        if(sum > maxi){
            maxi=sum;
        }
        // condition 2:
        if(sum < 0){
            sum=0;
        }
    } // condition 3: if needed 
    // To consider the sum of the empty subarray 
    //if(maxi<0) maxi=0;
    return maxi;
}

int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int n= sizeof (arr)  / sizeof (arr[0]);
    long long summ=maxsubarray(arr,n);

    cout << " the answer of optimal approach is  : " << summ << endl;
    return 0;
}*/

// 5. FOLLOW UP QUESTION 
// PRINT THE SUBARRAY WITH MAXIMUM SUBARRAY SUM

/*#include<bits/stdc++.h>
using namespace std;

int maximum(int arr[], int n){

    long long maxii=INT_MIN;
    long long sum=0;

    int start=0;
    int ansStart=-1 , ansEnd=-1;

    for(int i=0;i<n;i++){

        if(sum==0) start=i; // starting index

        sum+=arr[i];

        if(sum> maxii){
        maxii=sum;
        ansStart=start;
        ansEnd=i;
    }


        if(sum<0){
        sum=0;
    }

    }


    // now printing the subarray
    cout << " the subarray will be : [";
    for(int i=ansStart;i<=ansEnd;i++){
        cout << arr[i]  << " ";
    }
    cout << "]";
return maxii;

}

int main(){

    int arr[]={-2,1,-3,4,-1,2,1,-5,4};

    int n=sizeof (arr) / sizeof (arr[0]);

    int maxSum=maximum(arr,n);
    cout << " the array is this  " << maxSum <<  endl;
    return 0;
}*/

// 6.  STOCK BUY AND SELL
// BRUTE FORCE APPROACH 

/*#include<bits/stdc++.h>
using namespace std;

int maxu(vector<int> &arr){

    int maxpro = 0;
    int n=arr.size();

    // declaration of loops
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){

            if (arr[j] > arr[i]){
                maxpro=max(arr[j] -arr[i] , maxpro);
            }
        }
    }
    return maxpro;
}

int main(){
    vector<int> arr={7,1,5,3,6,4};
    int n=6;
    int val=maxu(arr);
    cout << "the answer of this problem will be " << val << endl;
    return 0;
}
*/

// OPTIMAL APPROACH 

/*#include<bits/stdc++.h>
using namespace std;

int maxsub(vector<int> &arr){
 // declaration of maxPro 
 // declaration of mini and taking largest variable 
 // from start
    int maxPro=0;
    int mini=INT_MAX;
    int n=arr.size();

    for(int i=0;i<n;i++){
        mini=min(mini,arr[i]);
        maxPro=max(maxPro,arr[i]-mini);
    }
    return maxPro;
}

int main(){
    vector<int> arr={7,1,5,3,6,4};
    int n=6;
    int maxx=maxsub(arr);
    cout << "the main answer is " << maxx << endl;
    return 0;
}*/

// 7. REARRANGE THE ARRAY IN ALTERNATING 
// POSITIVE AND NEGATIVE ITEMS

// BRUTE FORCE APPROACH

/*#include<bits/stdc++.h>
using namespace std;

vector<int> rearrange(vector<int> A , int n){

    vector<int> pos; // declartion for storing positive items.
    vector<int> neg; // declartion for storing negative items.

    for(int i=0;i<n;i++){
        if(A[i] > 0) pos.push_back(A[i]);


        else {
            neg.push_back(A[i]);
        }
    }

    for(int i=0;i<n/2;i++){
            A[2*i]=pos[i];// main logic the pos elements placed in 2*i places
            A[2*i+1]=neg[i];// main logic the neg elements placed in 2*i+1 places
    }

return A;
}

int main(){
    int n=4;
    vector<int> A={1,2,-4,-5};
    vector<int> ans=rearrange(A,n);

    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    return 0;*/


//OPTIMAL APPROACH 

/*#include<bits/stdc++.h>
using namespace std;

vector<int> Rearrange (vector<int> A){
    int n=A.size();

    // define the array for storing ans separately

    vector<int> ans(n,0);

    int negindex=1 ,posindex=0;

    for(int i=0;i<n;i++){

        if(A[i] < 0){
            ans[negindex]=A[i];
            negindex+=2;
        }

        else{
            ans[posindex]=A[i];
            posindex+=2;
        }
    }
    return ans;
}
int main(){
    vector<int> A={1,2,-4,-5};
    int n=4;
    vector<int> ans=Rearrange(A);

    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    return 0;
}*/

// NOW VARIETY - 2 OF THIS SAME PROBLEM 
/*#include<bits/stdc++.h>
using namespace std;

vector<int> Rearrangeelements(vector<int> A ,int n){
    vector<int> pos;// declaring space for pos elements
    vector<int> neg;// declaring space for neg elements

    // declaring loop 
    //Segragate the array into positives and negatives 
    for(int i=0;i<n;i++){
        if(A[i] > 0) pos.push_back(A[i]); 
        else neg.push_back (A[i]);
    }

    // If positives are lesser than negatives 
    if(pos.size() < neg.size()){
    // First fill the array to the point 
    // where positives and negatives are equal in number 
        for(int i=0;i<pos.size();i++){

            A[2*i]=pos[i];
            A[2*i+1]=neg[i];
        }

    // now fill the array with remaining elements
    int index=pos.size() * 2;
    for(int i=pos.size();i<neg.size();i++){
        A[index]=neg[i];
        index++;
    }
}
    else{
        // repeat like the above but if the negatives are lesser
        // than positives

        for(int i=0;i<neg.size();i++){

            A[2*i]=pos[i];
            A[2*i+1]=neg[i];
        }

        // now fill the array with remaining elements like the previous one
        int index=neg.size()*2;
        for(int i=neg.size();i<pos.size();i++){

            A[index]=pos[i];
            index++;
        }
    }
return A;

}

int main(){
    int n=6;
    vector<int> A={1,2,-4,-5,3,4};
    vector<int> val=Rearrangeelements(A,n);

    for(int i=0;i<val.size();i++){
        cout << val[i] << "  ";
        
    }
    return 0;
}*/

//8.NEXT_ PERMUTATION : FIND LEXICOGRAPHICALY GREATER PERMUTATION 

//BEST APPROACH TO APPLY 

/*#include<bits/stdc++.h>
using namespace std;

vector<int> next(vector<int> &a){

    int n=a.size();

    // STEP 1: Find the breakpoint 

    int index=-1;
    for(int i=n-2;i>=0;i--){
        if(a[i] < a[i+1]){
            index = i;
            break;
        }
    }

    // NOW EDGE CASE 
    if(index==-1){

        // reverse the full array
        reverse(a.begin() , a.end());
        return a;
    }

    // STEP 2: if break point available then found the 
    // next greater element which is greter than index 
    // and swap with it 

    for(int i=n-1;i>index;i--){
        if(a[i] > a[index]){
            swap(a[i] , a[index]);
            break;

        }
    }

    // STEP 3: REVERSE THE REST : now after founding the next greater 
    // we have to reverse the elements from i+1 to n-1

    reverse(a.begin()+index+1, a.end());
    return a;
}

int main(){
    vector<int> a={2,1,5,3,4,0,0};

    
    vector<int> ans=next(a);
     for(auto it:ans){
        cout << it << " ";
     }
     return 0;
}*/

// 9.LEADERS IN THE ARRAY 

// BRUTE FORCE APPROACH 
/*#include<bits/stdc++.h>
using namespace std;

vector<int> leader (int arr[] , int n){

    vector<int> ans;

    for(int i=0;i<n;i++){

            bool leaders=true;
        for(int j=i+1;j<n;j++)
            if(arr[j] > arr[i]){
                leaders = false;
                break;
            }

           if(leaders==true)
            ans.push_back(arr[i]);
        }

    return ans;
}

int main(){

    int n=6;
    int arr[n]={10,22,12,3,0,6};
    vector<int> val=leader(arr,n);

    for(int i=0;i<val.size();i++){
        cout << val[i] << " ";
    }
    return 0;
}*/


/// OPTIMAL APPROACH 
 /*#include<bits/stdc++.h>
 using namespace std;

 vector<int> leaders (int arr[] ,int n){

    vector<int> ans;

    // the last element of the array will always be 
    // the leader so the max would be that last element 
    int max=arr[n-1];
    ans.push_back(arr[n-1]);

    // now we should now start traversing the array from 
    // the second last position 
    for(int i=n-2;i>=0;i--){
        // now we have to check while traversing the array
        // that each elemnt with the max 
        if(arr[i] > max){
            ans.push_back(arr[i]);
            max=arr[i];
        }
    }
    // now we have to return the ans 
    return ans;
 }

 int main(){
    int n=6;
    int arr[]={10,22,12,3,0,6};
    vector<int> val=leaders(arr,n);

    for(int i=val.size() -1;i>=0;i--){
        cout << val[i] << " ";
    }
    return 0;

 }*/


 // 10 . FIND THE LONGEST CONSECUTIVE ELEMENTS 

 // BRUTE FORCE APPROACH 
 /*#include<bits/stdc++.h>
 using namespace std;
// linear search function 
 bool linear(vector<int> &a ,int num){

    int n =a.size();
    for(int i=0;i<n;i++){
        if(a[i] == num)
            return true;
        }
    return false ;
 }

 // main fuction 
 int longest(vector<int> &a){
    int n=a.size();

    int longst=1;// initially we are taking longest as 1 because 
                // at minimum even if we take only one element 
                // it length will be 1 
    for(int i=0;i<n;i++){
        int x =a[i];
        int cnt =1;
    // main logic 
    while(linear(a,x+1)==true){
        x+=1;
        cnt+=1;
    }
    longst=max(longst,cnt); // we are finding the longest to return 
    
    }
    return longst;
 }
 int main(){
    vector<int> a={100,4,200,1,2,3};
    int n=6;
    int ans=longest(a);
    cout << ans << " ";
    return 0;
 }*/

// BETTER APPROACH 

/*#include<bits/stdc++.h>
using namespace std;

int sequence(vector<int>&arr){

    int n=arr.size();

    // edge case 
    if(n==0) return 0;

    // first to sort the array
    sort(arr.begin()  , arr.end());
    // initialization of variables we are working with 
        int last_smaller =INT_MIN;
            int cnt=0;
            int largest=1;
    
    for(int i=0;i<n;i++){
        if(arr[i] -1 ==last_smaller  ){
            cnt+=1;
            last_smaller=arr[i];
        }


        else if(arr[i]!=last_smaller){
            cnt=1;
            last_smaller=arr[i];
        }

        largest=max(largest,cnt);
    }
    return largest;
}

int main(){

    vector<int> arr ={100,200,1,3,2,4};
    int n=6;

    int ans=sequence(arr);
    cout << ans << " ";
    return 0;
}*/

// OPTIMAL APPROACH 

//USING SET DATASTRUCTURE

/*#include<bits/stdc++.h>
using namespace std;

int large(vector<int> &a){

    int n=a.size();

    // edge case
    if(n==0) return 0;

    // now declaration of set
    unordered_set<int> st;
    int longest=1;
    // putting all array elements inside the set
    for(int i=0;i<n;i++){
        st.insert(a[i]);
    }

    for(auto it:st){
        if(st.find(it-1)== st.end()){

        int cnt=1;
        int x=it;
    

        while(st.find(x+1)!=st.end()){
            x=x+1;
           cnt=cnt+1;
        }
        longest=max(longest,cnt);
    }
}
return longest;
}

int main(){
    vector<int> a={200,100,1,2,3,4};
    int n=6;
    int ans=large(a);
    cout << ans << " ";
    return 0;
}*/

// 11. SET MATRIX ZEROS 

// BRUTE FORCE APPROACH
/*#include<bits/stdc++.h>
using namespace std;

void markRow(vector<vector<int>> & matrix ,int n,int m,int i ){
    // Set all non-zero elements as -1 in the row i
    for(int j=0;j<m;j++){
        if(matrix[i][j]!=0){
            matrix[i][j]=-1;
        }
    }
}

void markColumn(vector<vector<int>> &matrix , int n,int m,int j){
    //Set all non-zero elements as -1 in the column j
    for(int i=0;i<n;i++){
        if(matrix[i][j]!=0){
            matrix[i][j]=-1;
        }
    }
}

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix  , int n ,int m){
    // Set -1 for rows and columns 
    // that contains 0  .. Donot mark any 0 as -1
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if (matrix[i][j]==0){
                markRow(matrix,n,m,i);
                markColumn(matrix,n,m,j);
            }
        }
    }

    //Finally mark -1 as 0 
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==-1){
                matrix[i][j]=0;
            }
        }
    }
    return matrix;
}
int main(){
    vector<vector<int>> matrix={{1,1,1} , {1,0,1} , {1,1,1}};
    int n=matrix.size();
    int m=matrix[0].size();
    vector<vector<int>> ans=zeroMatrix(matrix,n,m);
    cout << " the Final matirx : n" ;

    for(auto it:ans){
        for(auto el:it){
            cout << el << " ";
        }
        cout << "n";
    }
    return 0;
}*/

//BETTER APPROACH 
/*#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix , int n,int m){

    // In this approach we have to take 
    // extra row & column
    int row[n]={0};
    int col[m]={0};

    // now we have to traverse the matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){

                // mark the ith index of row 
                row[i]=1;
                // mark the ith index of column
                col[j]=1;
            }
        }
    }
    // Finally mark all(i,j) elements as 0
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(row[i] || col[j]){
                matrix[i][j]=0;
            }
        }
    }
    return matrix;

}

int main(){
    vector<vector<int>> matrix={{1,1,1} , {1,0,1} , {1,1,1}};
    int n=matrix.size();
    int m=matrix[0].size();
    vector<vector<int>> ans=zeroMatrix(matrix,n,m);
    cout << " the matrix would be  : n";

    for(auto it:ans){
        for(auto el:it){
            cout << el << " ";
        }
        cout << "n";
    }
    return 0;
}*/

// OPTIMAL APPROACH 
/*#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> zeromatrix(vector<vector<int>> &matrix ,int n ,int m){
    // row[n]={0} --> col[0] = matrix[0][...]
    // col[m]={0} --> row[0] = matrix[...][0]
    int cnt0=1;

    // Step 1: Traverse the matrix and mark down 
    // 1st row and 1st column accordingly
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){

                // mark down the ith row 
                matrix[i][0]=0;

                // mark down the jth column
                if(j!=0){
                    matrix[0][j]=0;
                }
                else 
                    cnt0=0;
            }
        }
    }

    // Step 2: mark with 0 from (1,1) to (n-1) and (m-1)
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(matrix[i][j]!=0){
            // check for colun and row 
            if (matrix[i][0] == 0 || matrix[0][j]== 0){
                matrix[i][j]=0;
            }
        }
    }
}

// finally mark the first col and first row
if(matrix[0][0]==0){
    for(int j=0;j<m;j++){
         matrix[0][j]=0;
    }
}
if(cnt0=0){
    for(int i=0;i<n;i++){
         matrix[i][0]=0;
    }

}
return matrix;
}
int main(){
    vector<vector<int>> matrix={{1,1,1} , {1,0,1} ,{1,1,1}};
    int n=matrix.size();
    int m=matrix[0].size();

    vector<vector<int>> ans=zeromatrix(matrix,n,m);
    cout << " the marix is : " ;
    for(auto it:ans){
        for(auto el:it){
            cout << el  << " ";
        }
        cout  <<  endl;
    }
    return 0;
}*/

// 12. ROTATE IMAGE / MATRIX BY 90 DEGREES

// BRUTE FORCE APPROACH

/*#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> rotate(vector<vector<int>> &matrix){

    int n=matrix.size();
 // we are declaring here a new empty matrix to store the answer of n spaces 
 // and initialized it with 0 zeros 
    vector<vector<int>> rotated (n,vector<int> (n,0));

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
            // main logic 

                rotated[j][(n-1) -i] = matrix[i][j];
            }
        }
     return rotated;
}

int main(){
    
    vector<vector<int>> matrix={{1,2,3} , {4,5,6} , {7,8,9}};
    vector<vector<int>> ans = rotate(matrix);

    cout << " the rotate matrix would be  :";

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}*/


// OPTIMAL APPROACH

/*#include<bits/stdc++.h>
using namespace std;

void rotate1(vector<vector<int>> &matrix){
    int n=matrix.size();
// Transposing the matrix 
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            swap(matrix[i][j] , matrix[j][i]);
        }
    }

// now we have to reverse the row after traversing
    for(int i=0;i<n;i++){
        reverse(matrix[i].begin() , matrix[i].end());
    }
}

int main(){
    vector<vector<int>> matrix={{1,2,3} , {4,5,6} , {7,8,9}};
    rotate1(matrix);
    
    cout << "the rotated matrix is  :";
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}*/


///13. SPIRAL TRAVERSAL OF MATRIX 

// ONE APPROACH 
// OPTIMAL APPROACH 

#include<bits/stdc++.h>
using namespace std;

vector<int> spiral (vector<vector<int>> matrix){

    vector<int> ans; // declaring ans extra space for storing the answer

    int n=matrix.size();// no of rows
    int m=matrix[0].size();// no of columns

    //initialize the pointers in the matrix
    int top=0 , left=0 , bottom=n-1 , right=m-1;

    // now next step is loop until all elements are being traversed

    while(top <=bottom &&  left<=right){

        // now to move pointer from left to right
        // for printing the top row 
        for(int i=left;i<=right;i++)
            ans.push_back(matrix[top][i]);

            top++;
        
        // now to move pointer from top to bottom for 
        // printing the right column 
        for(int i=top;i<=bottom;i++)
            ans.push_back(matrix[i][right]);

            right--;

        //now to print the end row 
        // there will be some condition
        if(top<=bottom){
            for(int i=right;i>=left;i--)
                ans.push_back(matrix[bottom][i]);

                bottom --;
        }

        // now to print the leftmost column 
        if(left<=right){
            for(int i=bottom;i>=top;i--)
                ans.push_back(matrix[i][left]);

                left++;
        }
        
    }
    return ans;
}

int main(){
    vector<vector<int>> matrix={{1,2,3,4} , {5,6,7,8} , {9,10,11,12} , {13,14,15,16}};
    vector<int> ans=spiral(matrix);
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    return 0;
}









