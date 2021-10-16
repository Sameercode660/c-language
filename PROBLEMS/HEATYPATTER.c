#include <iostream>

#include<math.h>

using namespace std;

int main()

{

float i,j,n,s;

cout << "Enter n" << endl;

cin>>n;

for(j=n;j>=-2*n;j--){

for(i=-2*n+1;i<2*n;i++){

if((((pow(i+n,2)+j*j<=n*n)||(pow(i-n,2)+j*j<=n*n))&&(j>=0))||(((i-j<2*n&&i+j>-2*n)&&(j<0)))){

cout<<"*";}

else{

cout<<" ";

}

}

cout<<"\n";

}

return 0;

}

