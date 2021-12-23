#include<iostream>
using namespace std;

int main(){  
 int n,i,k=1,t1=0,t2=0,t3=0,a[100001];   
 cin>>n;  
 for(i=1;i<=n;i++)  
 cin>>a[i];  
  for(i=1;i<=n;i++)
 {
     if(a[i]==25)  
    {   t1++;   //Number of records 25 
    continue;  
    } 
     if(a[i]==50)
     {     if(t1>=1)   
           {  
            t1--;    
            t2++;  //If there is 50, one more is 50, and one less is 25, 
            continue;   
            }   
            else   
            {    k=0;  
              break; 
            }  
            }  
           if(a[i]==100)  //Two solutions 
         {     
             if(t1>=1&&t2>=1)   //The first to retrieve 50 and 25 
             {     
             t1--;   
              t2--;    
            continue;   
             }   
              if(t1>=3)   //three second back 25 
              {    
                 t1=t1-3;   
                 continue;    
              }  
             else  
        {    k=0;  
          break;  
        } 
    }
    }
       if(k==1)cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl;
 }