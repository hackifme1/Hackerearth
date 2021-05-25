// By Chandramani Kumar
// Keep moving and must be simple bro!!!!!
// Espérons le meilleur mais préparez-vous au pire 😎


Cpp code :

#include<bits/stdc++.h>

using namespace std;

int main(){

long long int n;

cin>>n;

cout<<n;

vector<int>vec;

while(n){

if(n % 2)

vec.push_back(0);

else

vec.push_back(1);

n = n / 2;

}

for(int i = vec.size(); i >= 0 ; i--){

n = n + pow(2, i) * vec[i];

}

cout<<" "<<n;

return 0;

}