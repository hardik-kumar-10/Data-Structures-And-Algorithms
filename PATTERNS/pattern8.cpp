#include<iostream>                           //output abcd bcde cdef defg
using namespace std;
int main(){
    int n ;
    cin >>n;
    int row=1; 
     
    while(row<=n)
      {
      int col=1;
      while(col<=n)  
      {
        char ch = 'A'+ col + row - 2;
        cout <<ch ; 
  
        col=col+1;
      }
      cout<<endl;
      row=row+1;

      }


}