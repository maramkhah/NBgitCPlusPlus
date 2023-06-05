#include<iostream>
#include<vector>
using namespace std;

int main(){

vector<long long unsigned> table;
table.push_back(1);

long long unsigned sum=0;
int cnt=0;

for(int i=0;i<24;i++){
long long unsigned term=table[i-1];
table.push_back(term+table[i]);
cnt++;
if(cnt==3){
if(sum<=4000000){
cout<<table[i]<<"\n";
sum+=table[i];
cnt=0;
}
}
}
cout<<"Sum of even valued numbers: "<<sum;

return 0;
};

