#include<bits/stdc++.h>
using namespace std;
bool isvalid(string s){
    int n=s.size();
}
stack <char>st;
bool ans=true;
for(int i=0;i<=n;i++){

if s[i]=='{' or s[i]==')'or s[i]
st.push (s[i]);
}else if( s[i]==')'){

    if( st.top=='(');
    {
        st.pop();
    }else{ 
    ans=false;

    break;
}
}else{
    if( s[i]==']'){
        if(st.top()==')'){

            st.pop;

        }else{

            ans=false;
            break;
        }

    }
}
if (!st.empty())
return false;

return ans;



if(is valid(s))
cout<<"valid string"<<endl;
else{

    cout<<"invalid string"<<endl;

    return 0;
}