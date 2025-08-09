//COUNT THE DIGITS 
/*#include <bits/stdc++.h>
using namespace std;
int count(int n)
{
    int count = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        count = count + 1;
        n = n / 10;
    }
    cout << count;
}
int main()
{
    int n;
    cin >> n;
    count(n);
}*/
// BRING OUT THE REVERSE OF THE GIVEN NUMBER 
/*#include <bits/stdc++.h>
using namespace std;
int revNum(int n){
  int  revNum=0;
  while(n>0){
    int lastdigit=n%10;
    n=n/10;
    revNum=(revNum*10)+lastdigit;
  }
  cout << revNum;

}
int main(){
    int n;
    cin >> n;
    revNum(n);
}*/
//CHECK IS THE NUMBER IS PALINDROME OR NOT!
/*#include<bits/stdc++.h>
using namespace std;
int isPalindrome(int n){
    int dup=n;
    int isPalindrome=0;
    while(n>0){
        int lastdigit=n%10;
        n=n/10;
        isPalindrome=(isPalindrome*10)+lastdigit;
    }
    if(dup==isPalindrome){
        cout<< "true";
    }
    else {
        cout << "false";
    }
}
int main(){
    int n;
    cin >> n;
    isPalindrome(n);
}*/
/*#include<bits/stdc++.h>
using namespace std;
int isArms(int n){
    int sum=0;
    int dup=n;
    while(n>0){
        int lastdigit=n%10;
        sum=sum+(lastdigit*lastdigit*lastdigit);
        n=n/10;
    }
    if(dup==sum){
        cout<< "true";
    }
    else{
        cout << "false";
    }
}
int main(){
    int n;
    cin >> n;
    isArms(n);
}*/
/*#include<bits/stdc++.h>
using namespace std;
int Printalldivisors(int n){
    for (int i=1;i<=n;i++){
        if(n%i==0){
            cout << i << " ";
        }
    }
}
int main(){
    int n;
    cin >> n;
    Printalldivisors(n);
}*/
/*#include<bits/stdc++.h>
using namespace std;
int PrintAll(int n){
    vector<int>ls;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            ls.push_back(i);
        }
        if((n/i)!=i){
            ls.push_back(n/i);
        }
    }
        sort(ls.begin(), ls.end());
        for(auto it:ls){
        cout << it << " ";
        }
    }
int main(){
    int n;
    cin >> n;
    PrintAll(n);
}*/
/*#include<bits/stdc++.h>
using namespace std;
int f(int n){
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
     f(n);
}*/
/*#include<bits/stdc++.h>
using namespace std;
int f(int n){
    int count =0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
        if(count==2){
            cout << "true";
        }
        else{
        cout << "false";
    }
}

int main(){
    int n;
    cin >> n;
     f(n);
}*/
/*#include<bits/stdc++.h>
using namespace std;
int gcd(int n1,int n2){
    int gcd=1;
    for(int i=min(n1,n2);i>=1;i--)
    {
        if(n1%i==0&&n2%i==0)
        cout <<(i);
        break;
        }    
}
int main(){
    int N;
    int n1;
    cin >>n1;
    int n2;
    cin >>n2;
    gcd(n1,n2);
}*/
/*#include<bits/stdc++.h>
using namespace std;
int gcd(int n1,int n2,int N){
    int gcd=1;
    for(int i=1;i<=N;i++)
    {
        if(n1%i==0&&n2%i==0)
        
        cout <<(i);
        break;
        }    
}
int main(){
    int N;
    int n1;
    cin >>n1;
    int n2;
    cin >>n2;
    gcd(n1,n2,N);
}*/
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    while(a>0&&b>0){
        if (a>b) a=a%b;
        else b=b%a;
    }
        if(a==0) {
            cout << b;
        }
        else{
            cout << a;
        }
    
}
int main(){
    int a;
    cin >> a;
    int b;
    cin >> b;
    gcd(a,b);
}

