#include<iostream>
#include<vector>
using namespace std;

int main(){

vector<double> table;

table.push_back(1);

for(int i=0;i<=4000000;i++){
double term=table[i-1];
table.push_back(term+table[i]);

cout<<table[i]<<"\n";
}


return 0;
};
