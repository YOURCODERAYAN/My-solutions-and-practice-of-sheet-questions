 //Your First C++ Program

/*#include<iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;   
    cout << "The value of x: " << x << " and y: " << y;
    return 0;
}*/
//WRITE A PROGRAM THAT TAKES INPUT OF AGE. 
//AND PRINTS IF YOU ARE ADULT OR NOT.
/*#include<iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    if (x >= 18){
 cout << "You are an adult!";
    } 
    else{
 cout << "You are not!";       
    }
    return 0;
}*/
/*#include<iostream>
using namespace std;

int main(){
    int marks;
    cin >> marks;
    if(marks < 25){
        cout << "F!";
    }
    if(marks >= 25 && marks <= 44){
        cout << "E!";
    }
    if(marks >= 45 && marks <= 49) {
        cout << "D!";
    }
    if(marks >= 50 && marks <= 59){
        cout << "C!";
    }
    if(marks >= 60 && marks <= 79){
        cout << "B!";
    }
    if(marks >= 80 && marks <=100){
        cout << "A!";
    }
    
    return 0;
}*/
/*#include<iostream>
using namespace std;
int main(){
    int marks;
    cin >> marks;
    if (marks < 25){
        cout << "F!";
    }
    else if (marks <= 44){
        cout << "E!";
    }
    else if (marks <= 49){
        cout << "D!";
    }
    else if (marks <=59){
        cout << "C!";
    }
    else if (marks <=79){
        cout << "B!";
    }
    else if (marks <=100){
        cout << "A!";
    }
    return 0;
}*/
//
/*#include<iostream>
using namespace std;
int main(){
    int age;
    cin >> age;
    if (age < 18){
        cout << "NOT ELIGIBLE FOR JOB!";
    }
    else if (age <= 57){
        cout << "ELIGIBLE FOR JOB!";
        if (age >= 55){
            cout << "RETIREMENT SOON!";
        }
    }
    else{
        cout << "RETIREMENT TIME!";
    }
}*/
// SWITCH CASE OR STATEMENTS:
/*#include<iostream>
using namespace std;
int main(){
    int day;
    cin >> day;
    switch(day){
        case 1: cout << "MONDAY";
        break;
        case 2: cout << "TUESDAY";
        break;
        case 3: cout << "WEDNESDAY";
        break;
        case 4: cout << "THRUSDAY";
        break;
        case 5: cout << "FRIDAY";
        break;
        case 6: cout << "SATURDAY";
        break;
        case 7: cout << "SUNDAY";
        break;
        default : cout << "INVALID";

    }
cout << "check";
return 0;
}*/
//ARRAYS AND STRINGS:
/*int main(){
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    // OPERATION WILL BE DONE HERE
    cout << arr[3];
    return 0;
}
int main(){
    int arr[3][5];
    arr[1][3] = 78;
    cout << arr[1][3];
    return 0;
}*/
//STRINGS//
/*int main(){
    string="Striver";
    int len=s.size();
    cout << s[len-1];
    return 0;
}
int len= s.size();
s[len-1]='z';
cout << s[len-1];
return 0;*/
//LOOPS: FOR WHILE, DO WHILE






/*#include<iostream>
using namespace std;

void printname(){
    cout << "STRIVER";
}
int main(){
    printname();
    return 0;
}*/
/*#include<iostream>
using namespace std;
void printname(){
    cout << "STRIVER";
}
int main(){
    int name;
    cin >> name;
    printname();
    return 0;
}*/
/*#include<iostream>
using namespace std;
void printname(string name){
    cout << "hey!" << name << ;

}
int main(){
    string name;
    cin >> name;
    printname(name);
    return 0;
}*/
//ADD TWO NUMBERS 
/*#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cin >> num1 >> num2 >> num3;
    cout << num1+num2+num3;
    return 0;
}*/
/*#include<iostream>
using namespace std;
void sum(int num1,int num2){
int num3= num1+num2;
cout << num3;
};
int main(){
    int num1,num2;
    cin >> num1 >> num2;
    sum(num1,num2);
    return 0;
}*/
// MAXIMUM AND MINIMUM 
/*#include<iostream>
using namespace std;
int maxx(int num1,int num2){
if (num1>=num2){
    return num1;
}
return num2;
}
int main(){
    int num1,num2;
    cin >> num1 >>num2;
    int maximum = maxx(num1,num2);
    cout << "maximum";
    return 0;
}*/
/*#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cin >> num1 >> num2;
    int maximum= max(num1,num2);
    cout << maximum;
    return 0;
}*/
//PASS BY VALUE//
/*#include<iostream>
using namespace std;
void dosomething(int num){
    cout << num << endl;
    num+=5;
    cout << num << endl;
    num+=5;
    cout << num << endl;
}
int main(){
    int num=10;
    dosomething(num);
     return 0;
}*/
//SAME THING BUT DOING WITH STRING//
/*#include<iostream>
using namespace std;
void dosomething(string s){
    s[0]='t';
    cout << s << endl;

}
int main(){
    string s= "Raj";
    dosomething(s);
    return 0;
}*/
//PASS BY REFERENCE
/*#include<iostream>
using namespace std;
void dosomething(string &s){
    s[1]='l';
    cout << s << endl;
}
int main(){
    string s= "raj";
    dosomething(s);
    cout << s << endl;
    return 0;
}*/
// IN ARRAY PASS BY RRFERENCE IS ALREADY DECLARED SO NOT USING '&' THIS SIGN//
/*#include<iostream>
using namespace std;
void dosomething(int arr[],int n ){
    arr[0]+=100;
    cout << arr[0] << endl;
}
int main(){
    int i=0;
    int n=5;
    int arr[n];
    for(i=0;i<n;i=i+1)
    cin >> arr[i];
    dosomething(arr,n);
    cout << arr[0] << endl;
}*/


/*#include<iostream>
using namespace std;
void dopattern(int i ,int j){
for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        cout << "* ";
    }
    cout << endl;
 }
}
int main(){
    int i,j;
    cin >> i >> j;
    dopattern(i,j);
    cout << endl;
    return 0;
}*/

//PATTERN PRINTING TAKING USER INPUT
/*#include<iostream>
using namespace std;
void print1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cout << "*";
        }
    cout << endl;
    }
}
int main(){
    int n ;
    cin >> n;
    print1(n);
}*/
/*#include<iostream>
using namespace std;
void print3(int n){
    for(int i=0;i<=n;i++){
        for(int j=1;j<=i+1;j++){
            cout << i+1 << " ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    print3(n);
}*/
/*#include<iostream>
using namespace std;
void print2(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    print2(n);
}*/
/*#include<iostream>
using namespace std;
void print4(int n){
    for(int i=0;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout << "*";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    print4(n);
}*/
/*#include<iostream>
using namespace std;
void print5(int n){
    for(int i=0;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout << " * ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    print5 (n);
}*/
/*#include<iostream>
using namespace std;
void print6(int n){
    for(int i=0;i<=n;i++){
        //SPACE
        for(int j=1;j<=n-i+1;j++){
            cout << " ";
        }
        //STAR
        for(int j=1;j<=2*i+1;j++){
            cout << "*";
        }
        //SPACE
        for(int j=1;j<=n-i+1;j++){
            cout << " ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    print6(n);
}*/
/*#include<iostream>
using namespace std;
void print7(int n){
for(int i=0;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout << " ";
    }
    for(int j=1;j<=2*n-2*i+1;j++){
        cout << "*";
    }
    for(int j=1;j<=i;j++){
        cout << " ";
    }
cout << endl;
}
}
int main(){
    int n;
    cin >> n;
    print7(n);
}*/
/*#include<iostream>
using namespace std;
void print6(int n){
    for(int i=0;i<=n;i++){
        //SPACE
        for(int j=1;j<=n-i+1;j++){
            cout << " ";
        }
        //STAR
        for(int j=1;j<=2*i+1;j++){
            cout << "*";
        }
        //SPACE
        for(int j=1;j<=n-i+1;j++){
            cout << " ";
        }
        cout << endl;
    }
}
void print8(int n){
    for(int i=0;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << " ";
        }
        for(int j=1;j<=2*n-2*i+1;j++){
            cout << "*";
        }
        for(int j=1;j<=i;j++){
            cout << " ";
        }
         cout << endl;
    }
    
}
int main(){
    int n;
    cin >> n;
    print6(n);
    print8(n);
}*/
/*#include<iostream>
using namespace std;
void print9(int n){
    for(int i=0;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << "*";
        }
       for(int j=1;j<=n-1;j++){
            cout << "*";
       }
    cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    print9(n);
}*/
/*#include<iostream>
using namespace std;
void print10(int n){
    for(int i=1;i<=2*n-1;i++){
        int stars=i;
        if(i>n)  stars=2*n-i;
        for(int j=1;j<=stars;j++){
            cout << "*";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    print10(n);
}*/
/*#include<iostream>
using namespace std;
void print11(int n){
    for(int i=0;i<=n;i++){
        int start=1;
        if(i%2==0) start=1;
        else start=0;
        for(int j=0;j<=i;j++){
            start=1-start;
            cout << start;
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    print11(n);
}*/
/*#include<iostream>
using namespace std;
void print12(int n){
    int space=2*(n-1);
    for(int i=1;i<=n;i++){
        //number
        for(int j=1;j<=i;j++){
            cout << j;
        }
        //space
        for(int j=1;j<=space;j++){
            cout << " ";
        }
        //number
        for(int j=i;j>=1;j--){
            cout << j;
        }
    cout << endl;
    space=space-2;
    }
}
    
    
int main(){
    int n;
    cin >> n;
    print12(n);
}*/
/*#include<iostream>
using namespace std;
void printpattern(int N){
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            cout <<  "*";
        }
        cout << " ";
    }
}
int main(){
    int N;
    cin >> N;
    printpattern(N);
}*/
/*#include<iostream>
using namespace std;
void print13(int n){
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << num;
            num=num+1;
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    print13(n);
}*/
/*#include<iostream>
using namespace std;
void print14(int n){
    for(int i=0;i<4;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    print14(n);
}*/
/*#include<iostream>
using namespace std;
void print15(int n){
    for(int i=0;i<=n;i++){
        for(char ch='A';ch=ch+1;ch++){
            cout << ch+1 << " ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    print15(n);
}*/
//GIVEN THE NUMBER 'N' FIND OUT AND RETURN THE NUMBER OF DIGITS PRESENT IN A NUMBER
/*#include<iostream>
using namespace std;
int count(int n){
    int cnt=0;
    while(n>0){
        int lastdigit=n%10;
        cnt=cnt+1;
        n=n/10;
    }
    cout <<cnt;
}
int main(){
    int n;
    cin >> n;
    count(n);
}*/
//WRITE A PROGRAM TO GENERATE THE REVERSE OF A GIVEN NUMBER 'N'
/*#include<iostream>
using namespace std;
int revN(int n){
   int  revN=0;
   while(n>0){
int lastdigit=n%10;
n=n/10;
revN=(revN*10)+lastdigit;
   }
   cout << revN;
}
int main(){
    int n;
    cin >> n;
    revN(n);
}*/

/*#include<iostream>
using namespace std;
int isPalindrome(int x){
    int isPalindrome=0;
    int dup=x;
   while(x>0){
    int lastdigit=x%10;
    isPalindrome=(isPalindrome*10)+lastdigit;
     x=x/10;
   }
   if(dup==isPalindrome)cout << "true";
   else cout << "false";
}
int main(){
    int x;
    cin >> x;
    isPalindrome(x);
}*/

/*#include<iostream>
using namespace std;
void printdivisiors(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout << i<< " ";
        }
    }
}
int main(){
    int n;
    cin >> n;
    printdivisiors(n);
}*/

/*#include<iostream>
#include<cmath>
using namespace std;
void printdivisors(int n){
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            cout << i << " ";
        }
        if((n/i)!=i){
            cout << n/i << " ";
        }

    }
}
int main(){
    int n;
    cin >> n;
    printdivisors(n);
}*/

/*#include<bits/stdc++.h>
using namespace std;
void printdivisors(int n){
     vector<int> ls;
     for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
           ls. push_back(i);
        }
        if((n/i)!=i){
            ls.push_back(n/i);
        }
     }
     sort(ls.begin(), ls.end());
     for(auto it=ls.begin();it!=ls.end();it++){
        cout << *(it) << " ";
     }
}
int main(){
    int n;
    cin >> n;
    printdivisors(n);
}*/
/*#include<iostream>
using namespace std;
void isPrime(int n){
     int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0)
            count ++;
    }
        if(count==2)
            cout <<  "true";
        
        else
             cout << "false";
    }

int main(){
    int n;
    cin >> n;
    isPrime(n);
}*/
/*#include<iostream>
using namespace std;
void isPrime(int n){
    int cnt=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0)
        {
        cnt++;
        if((n/i)!=i)
        cnt++;
    }
}
    if(cnt==2)
    cout << "true";
    else
    cout << "false";
}
int main(){
    int n;
    cin >> n;
    isPrime(n);
}*/
/*#include<iostream>
using namespace std;
void isArmstrong(int n){
    int dup=n;
    int sum=0;
    int isArmstrong=0;
    while(n>0){
        int lastdigit=n%10;
        sum=sum+(lastdigit*lastdigit*lastdigit);
        n=n/10;
    }
    if(sum==dup){
        cout << "true";
    }
    else{
        cout << "false";
    }
    
}
int main(){
    int n;
    cin >> n;
    isArmstrong(n);
}*/
////RECURSION/////
/*#include<bits/stdc++.h>
using namespace std;
int cnt=1;
void f(){
    if(cnt==6)
    return;
    cout << "Ayan" << endl;
    cnt++;
    f();
}
int main(){
    string N;
    cin >> N;
    f();
}*/
///backtracking 
///reverse order from N ...... 1;
/*#include<bits/stdc++.h>
using namespace std;
void f(int i,int n){
    if(i>n)return;
    f(i+1,n);
    cout << i << endl;
}
int main(){
    int n;
    cin >> n;
    f(1,n);
}*/
/// print from 1.......N 
/*#include<bits/stdc++.h>
using namespace std;
void f(int i,int n){
    if(i<1)return;
    f(i-1,n);
    cout << i << endl;
}
int main(){
    int n;
    cin >> n;
    f(n,n);
}*/
////power of 3 or power of 2 
/*#include<bits/stdc++.h>
using namespace std;
bool power(int n){
    if(n<0)return false;
    if(n==1)return true;
    if(n==0||n%3!=0)return false;
    return power(n/3);
}
int main(){
    int n;
    cin >> n;
    if(power(n))
    cout << n << "is power of 3" << endl;
    else
    cout << n << "is not a power of 3" << endl;
}*/
///PARAMETERIZED WAY OF PRINTING SUM OF N ELEMENTS
/*#include<bits/stdc++.h>
using namespace std;
void f(int i,int sum){
    if(i<1){
    cout << sum;
    return;
    }
    f(i-1,sum+i);
}
int main(){
    int n;
    cin >> n;
    f(n,0);
}*/
/////function way of recursion where the funtion return the value////
/*#include<bits/stdc++.h>
using namespace std;
int f(int n){
    if(n==0)
    return 0;
    return  n+f(n-1);
}
int main(){
    int n;
    cin >> n;
    cout << f(n);
}*/
////same way find the factorial of a number 
/*#include<bits/stdc++.h>
using namespace std;
int f(int n){
    if(n==0)
    return 1;
    return n*f(n-1);
}
int main(){
    int n;
    cin >> n;
    cout << f(n);
}*/
////reverse of an array by using two pointers
/*#include<bits/stdc++.h>
using namespace std;
void f(int l,int r,int arr[]){
    if(l>=r)
    return;
    swap(arr[l],arr[r]);
    f(l+1,r-1,arr);
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    f(0,n-1,arr);
    for(int i=0;i<n;i++) cout << arr[i] << ' ' << endl; 
}*/
/*#include<bits/stdc++.h>
using namespace std;
void f(int i,int n,int arr[]){
    if(i>=n/2)
    return;
    swap(arr[i],arr[n-i-1]);
    f(i+1,n,arr);
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];//reading purpose ;
    f(0,n,arr);
    for(int i=0;i<n;i++) cout << arr[i]<< " " << endl;//printing purpose;
}
//check weather the string is palindrome or not 
    /*#include<bits/stdc++.h>
    using namespace std;
    bool isPalindrome(string s){
        int i;
        if(s.empty())
        return false;
        if(i>=s.size()/2)
        return true;
        if(s[i]!=s[s.size()-i-1])
        return false;
return isPalindrome(i+1,s);

    }*/
   /*#include<bits/stdc++.h>
   using namespace std;
   int fib(int n) {
       if(n<=1)
       return n;
       int last=fib(n-1);
      int  slast=fib(n-2);
       return last+slast; 
    }
int main(){
    cout << fib(4);
    return 0;
}*/
//sum of n elements in an array//
/*#include<bits/stdc++.h>
using namespace std;
int gfg(int i,int n,int arr[]){
    if(i==n)
    return 0;
    return arr[i]+gfg(i+1,n,arr);
}
int main(){
    int n;
    cin >> n;
      int arr[n];
      for(int i=0;i<n;i++) cin >> arr[i];
    int sum=gfg(0,n,arr);
     cout << sum ;
}*/
//sum of elements in array and finding  its mean//
/*#include<bits/stdc++.h>
using namespace std;
    int gfg(int i,int n,int arr[]){
        if(i==n)
        return 0;
        return arr[i]+gfg(i+1,n,arr);
    }
    int main(){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin >> arr[i];
        int sum=gfg(0,n,arr);
        cout << sum/n;

    }*/
// Fibonacci number in reverse using recursion//
/*#include<bits/stdc++.h>
using namespace std;
void fibo(int n,int a,int b){
    if(n>0){
     fibo(n-1,b,a+b);
     cout << a << " " ;
    }
}
int main(){
    int N;
    N=10;
    fibo(N,0,1);
    return 0;
}*/
//HASING CONCEPT
/*#include<bits/stdc++.h>
using namespace std;
// main case 
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin >> arr[i];
//pre computation
unordered_map<int,int>mpp;
  for(int i=0;i<n;i++)
   mpp [arr[i]]++;
// fething 
int q;
cin >> q;
while(q--){
    int number;
    cin >> number;
cout << mpp[number]<< endl;
}
}*/
//
/*#include<bits/stdc++.h>
using namespace std;
//main case
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin >> arr[i];

//pre computiation
unordered_map<int,int>freq;
for(int i=0;i<n;i++){
freq[arr[i]]++;
}
//calculating most frequent element
int maxfreq=0;
int mostfreq=0;
for(auto pair:freq)
{
    if(pair.second>maxfreq){
        maxfreq=pair.second;
        mostfreq=pair.first;
    }
}
cout << mostfreq<<maxfreq<< endl;

}*/
/*#include<bits/stdc++.h>
using namespace std;
vector<int> topkFrequent(vector<int>& nums,int k){
      // at first declaring unordered map 
      unordered_map<int,int>freq;
      for(int i=0;i<nums.size();i++){
      freq[nums[i]]++;
      }
      //move map elements in prority queue
      priority_queue<pair<int,int>>pq;
      for(auto&p:freq){
      pq.push({p.second,p.first});
      }
//we have to take k elements
vector<int>result;
for(int i=0;i<k;i++){
result.push_back(pq.top().second);
pq.pop();
 }
 return result;
}
int main() {
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = 2;

    vector<int> res = topkFrequent(nums, k);

    for (int num : res)
        cout << num << " ";

    return 0;
}*/

/*#include <bits/stdc++.h>
using namespace std;

vector<string> topWordsFrequent(vector<string>& words, int k) {
    unordered_map<string, int> freq;

    // Count frequency
    for (const string& word : words) {
        freq[word]++;
    }

    // Move map to a vector for sorting
    vector<pair<string, int>> items(freq.begin(), freq.end());

    // Sort by: descending frequency, then lexicographically ascending
    sort(items.begin(), items.end(), [](const auto& a, const auto& b) {
        if (a.second == b.second)
            return a.first < b.first;
        return a.second > b.second;
    });

    // Collect top k
    vector<string> result;
    for (int i = 0; i < k && i < items.size(); i++) {
        result.push_back(items[i].first);
    }

    return result;
}

int main() {
    int k = 2;
    vector<string> words = {"i", "love", "leetcode", "i", "love", "coding"};
    vector<string> result = topWordsFrequent(words, k);
    for (const string& word : result) {
        cout << word << " ";
    }
    return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;
 int f(int number,int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++)
    {
       if (arr[i]==number)
       count=count+1;
    }
    return count;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
        for(int i=0;i<n;i++)
        cin >> arr[i];
        for(int i=0;i<n;i++){
        cout << "->" << arr[i] << f(arr[i],arr,n) << endl;
}
return 0;
}*/
//same question but now in case of string or characters
/*#include<bits/stdc++.h>
using namespace std;
int super(char c,string s,int n){
   int  count=0;
    for(int i=0;i<n;i++)
    {
    if(s[i]==c)
    count=count+1;
}   
return count;
}
int main(){
    
    string s;
    cin >>s;
    int n=s.size();
    for(int i=0;i<s.size();i++){ 
        cout << s[i] << "-->" << super(s[i],s,n)<< endl;
    }
    return 0;
    

}*/
/*#include<bits/stdc++.h>
using namespace std;
//main functionn
int main(){
    string s;
    cin >> s;

//pre computation
int hash[26]={0};
for(int i=0;i<s.size();i++){
    hash[s[i]-'a']++;
} 
//fething part
int q;
cin >> q;
while(q--){
    char c;
    cin >> c;
    cout << hash[c-'a'] << endl;
}
return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    //pre computation//
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    //queries part
    int q;
    cin>> q;
    while(q--){
        int number;
        cin >> number;
    
    //fethching part
    cout << hash[number] << endl;
    }
    return 0;
}
