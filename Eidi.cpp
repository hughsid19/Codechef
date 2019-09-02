#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a1,a2,a3,c1,c2,c3;
        cin>>a1>>a2>>a3>>c1>>c2>>c3;
        int flag=0;
        if(a1>a2){
            if(c1<=c2)flag=1;
        }
        else if(a1==a2){
            if(c1!=c2)flag=1;
        }
        else if(a1<a2){
            if(c1>=c2)flag=1;
        }
        if(a2>a3){
            if(c2<=c3)flag=1;
        }
        else if(a2==a3){
            if(c2!=c3)flag=1;
        }
        else if(a2<a3){
            if(c2>=c3)flag=1;
        }
        if(a3>a1){
            if(c3<=c1)flag=1;
        }
        else if(a3==a1){
            if(c3!=c1)flag=1;
        }
        else if(a3<a1){
            if(c3>=c1)flag=1;
        }
        
        if(flag==1)cout<<"NOT FAIR"<<endl;
        else cout<<"FAIR"<<endl;
        
        
    }
    
    
    return 0;
}

