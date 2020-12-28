#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
       string s;
       cin>>s;
       if(s[0]==')' || s[s.length()-1]=='(' || (s.length())%2==1)
          cout<<"No"<<endl;
       else
          cout<<"Yes"<<endl;
    }
}


/*Input              Output            
5  //test case
()                     Yes
(?)                    No
(??)                   Yes
??()                   Yes
)?(?                   No

*/
