#include<iostream>
#include<vector>
using namespace std;

int main(){

vector<long> table;
table.push_back(1);

long sum=0;

for(int i=0;i<=4000000;i++){
long term=table[i-1];
table.push_back(term+table[i]);
if(table[i]%2==0){
sum+=table[i];
}
cout<<table[i]<<"\n";
};

cout<<"Considering the fibbonacci sequence whoes value do not exceed four million, find the sum of the even-valued terms:"<<sum;


return 0;
};

