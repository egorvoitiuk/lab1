#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string TrimRightC(string S,char C){
for(int i=0; i<sizeof(S); i++){
 if(S[i] == C)
{
 S.erase(i,1);
 i--;
}
}
return S;
}
int main()
{
setlocale(LC_ALL, "Russian");
char C;
string S1;
string S2;
string S3;
string S4;
string S5;
cin>>C>>S1>>S2>>S3>>S4>>S5;
cout<<TrimRightC(S1, C)<<endl;
cout<<TrimRightC(S2, C)<<endl;
cout<<TrimRightC(S3, C)<<endl;
cout<<TrimRightC(S4, C)<<endl;
cout<<TrimRightC(S5, C)<<endl;

return 0;
}

/*
#include <iostream>
#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

string TrimRightC( string S,char C){
int j=0;
for(int i=0; i<sizeof(S)/sizeof(S[0]); i++){
    if(S[i]== C){
      S.erase(i,1);
        i--;
}
}

return S;
}
int main()
{
setlocale(LC_ALL, "Russian");
char C;
string S1;
cin>>S1;
cin>>C;
cout<<TrimRightC(S1, C);
return 0;
}*/
