#include<iostream>
using namespace std;
int main(){
    int n ;
    cin >>n;
    int row=1; 
    
    while(row<=n)
      {
      int col=1;
      int value =row; //alt method is to use col<=2*i
      while(col<=row)  
      {
        cout <<value; //cout<<col<<" ";
       value =  value +1;
        col=col+1;
      }
      cout<<endl;
      row=row+1;

      }


}