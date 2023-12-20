#include <iostream>
using namespace std;
int main()
{
  // STAR PATTERNS

  // solid rectangle

  // for(int i=0;i<3;i++){
  //   for(int j=0;j<5;++j){
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }

  // hollow rectangle

  // int r,c;
  // cout<<"enter the no.of rows"<<endl;
  // cin>>r;
  // cout<<"enter the no. of columns"<<endl;
  // cin>>c;
  // for(int i=0;i<r;i++){
  //   if(i==0||i==r-1){
  //     for(int j=0;j<c;j++){
  //       cout<<"* ";
  //     }
  //   }
  //   else{
  //     for(int j=0;j<c;j++){
  //       if(j==0||j==c-1){
  //         cout<<"* ";
  //       }
  //       else{
  //         cout<<"  ";
  //       }
  //     }
  //   }
  //   cout<<endl;
  // }

  // meri approach for hollow rectangle

  //   int r;
  // cout<<"enter the no.of rows"<<endl;
  // cin>>r;
  // for(int i=0;i<r;i++){
  //   if(i==0||i==r-1){
  //     for(int j=0;j<5;j++){
  //       cout<<"* ";
  //     }
  //   }
  //   else{
  //     cout<<"*       * ";
  //   }
  //   cout<<endl;
  // }

  // another approach for hollow rectangle

  // int r,c;
  // cout<<"enter the number of rows"<<endl;
  // cin>>r;
  // cout<<"enter the number of columns"<<endl;
  // cin>>c;
  // for(int i=0;i<r;i++){
  //   if(i==0||i==r-1){
  //     for(int i=0;i<c;i++){
  //       cout<<"* ";
  //     }
  //   }
  //   else{
  //     cout<<"* ";
  //     for(int j=0;j<c-2;j++){
  //       cout<<"  ";
  //     }
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }
}