#include <iostream>
using namespace std;
int main(){
        int m;
        cin>>m;
        if(m%3==0 && m%5==0){
            cout<<"good number"; 
        }

        else if (m%3==0 && m%5!=0)    
        {
            cout<<"bad number";
        }

         else if (m%5==0 && m%3!=0)    
        {
            cout<<"poor number";
        }
        
        else if (m%5!=0 && m%3!=0)    
        {
            cout<<"-1";
        }
        
}