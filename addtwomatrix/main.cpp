#include <iostream>
using namespace std;
int main()
{
int row,column,ml[10][10],sum[10][10],result[10][10];
cin>>row;
cin >>column;
for(int i=0;i<row;i++){
    for(int j=0;j<column;j++)
    {
        cin>>ml[i][j];
    }
}
for(int i=0;i<row;i++){
    for(int j=0;j<column;j++)
    {
        cin>>ml[i][j];
    }
}
cout<<"Output: ";
   for (int i = 0;i<row;i++ ) {
      for (int j = 0;j<col;j++ ) {
        sum[i][j]=m1[i][j]+m2[i][j];
        cout<<sum[i][j]<<" ";
      }
   }

  
return 0;
}