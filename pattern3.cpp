#include<iostream>
using namespace std;
int main(){

    /*NUMERIC PALINDROME EQUILATERAL PYRAMID*/
    // int n;
    // cout<<"enter the number of rows"<<endl;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     for(int m=0;m<n-i-1;m++){
    //         cout<<"  ";
    //     }
        
    //     int j;
    //     for( j=0;j<i+1;j++){
    //         cout<<j+1<<" ";
    //     }

    //     j=j-1;
    //     for(;j>0;j--){
    //         cout<<j<<" ";
    //     }
        
    //     cout<<endl;
    // }


    /*SOLID HALF DIAMOND*/

    // int n;
    // cout<<"enter the number of rows"<<endl;
    // cin>>n;
    //     //top-part
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    //     //bottom-part
    // for(int i=0;i<n-1;i++){
    //     for(int j=0;j<n-i-1;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    /*fancy pattern
     ********1********
     *******2*2*******           
     ******3*3*3******
     *****4*4*4*4*****
     ****5*5*5*5*5****
    */

//    int n;
//    cout<<"enter the number of rows"<<endl;
//    cin>>n;
//    for(int i=0;i<n;i++){
//      left part
//      for(int j=0;j<2*n-2-i;j++){
//         cout<<"*";
//      }

//      middle part
//      for(int j=0;j<i+1;j++){
//         cout<<i+1;
//         if(j!=2*i){
//             cout<<"*";
//         }
//      }

//      right part
//      for(int j=0;j<2*n-2-i;j++){
//         cout<<"*";
//      }
//      cout<<endl;
//    }


/*
Fancy Pattern
1
2*3
4*5*6
7*8*9*10
7*8*9*10
4*5*6
2*3
1
*/
// int n;
// cout<<"enter the number of rows"<<endl;
// cin>>n;

// //top part
//   int c=1;  
// for(int i=0;i<n;i++){
//   for(int j=0;j<i+1;j++){
//    cout<<c;
//    c++;
   
//    if(j!=i){
//     cout<<"*";
//    }
//   }
//   cout<<endl;
// }

// //bottom part
// int start=c-n;
// for(int i=0;i<n;i++){
//   int k=start;
//   for(int j=0;j<n-i;j++){
//     cout<<k;
//     k++;

//     if(j!=n-i-1){
//       cout<<"*";
//     }
//   }
//   start=start-(n-i-1);
//   cout<<endl;
  
// }


/*FANCY PATTERN
*
* 1 *
* 1 2 1 *
* 1 2 3 2 1 *
* 1 2 1 *
* 1 *
*
*/

// int n;
// cout<<"enter the number of rows"<<endl;
// cin>>n;
// //top- part
// for(int i=0;i<n;i++){
//  if(i==0){
//   cout<<"*";
//  }

//  else{
//   cout<<"* ";
//   int j=0;
//   for(j;j<i;j++){
//     cout<<j+1<<" ";
//   }
//   j=j-1;
//   for(j;j>0;j--){
//     cout<<j<<" ";
//   }
//   cout<<"* ";
//  }
//  cout<<endl;
// }

// //bottom-part
// for(int i=0;i<n-1;i++){
//   if(i==n-2){
//     cout<<"* ";
//   }
//   else{
//     cout<<"* ";
//     int j=0;
//     for(j;j<n-i-2;j++){
//       cout<<j+1<<" ";
//     }
     
//      j=j-1;
//      for(j;j>0;j--){
//       cout<<j<<" ";
//      }
//      cout<<"* ";
//   }
//   cout<<endl;
// }



/*FLOYD'S TRIANGLE PATTERN*/

// int n;
// cout<<"enter the number of rows"<<endl;
// cin>>n;
// int c=1;
// for(int i=0;i<n;i++){
//   for(int j=0;j<i+1;j++){
//     cout<<c<<" ";
//     c++;
//   }
//   cout<<endl;
// }


/*PASCAL'S TRIANGLE PATTERN*/
 
// int n;
// cout<<"enter the number of rows"<<endl;
// cin>>n;
// for(int i=1;i<=n;i++){
//   int c=1;
//   for(int j=1;j<=i;j++){
//     cout<<c;
//     c=c*(i-j)/j;
//   }
//   cout<<endl;
// }


/*BUTTERFLY PATTERN*/

// int n;
// cout<<"enter the number of rows"<<endl;
// cin>>n;
// //top part
// for(int i=0;i<n;i++){
//   for(int j=0;j<i+1;j++){
//     cout<<"*";
//   }
//   for(int j=0;j<2*n-2*i-1;j++){
//     cout<<" ";
//   }
//   for(int j=0;j<i+1;j++){
//     cout<<"*";
//   }
//   cout<<endl;
// }

// //bottom-part
// for(int i=0;i<n;i++){
//   for(int j=0;j<n-i;j++){
//     cout<<"*";
//   }
//   for(int j=0;j<2*i+1;j++){
//     cout<<" ";
//   }
//    for(int j=0;j<n-i;j++){
//     cout<<"*";
//   }
//   cout<<endl;
// }

/*NUMERIC FULL PYRAMID*/

// int n;
// cout<<"enter the number of rows"<<endl;
// cin>>n;
// for(int i=0;i<n;i++){
//   for(int m=0;m<n-i-1;m++){
//     cout<<" ";
//   }
//   int j=0;
//   for(j;j<i+1;j++){
//     cout<<i+j+1;
//   }
//   j=j-1;
//   for(j;j>0;j--){
//     cout<<i+j;
//   }
//   cout<<endl;
// }


/*NUMERIC HOLLOW PYRAMID*/

int n;
cout<<"enter the number of rows"<<endl;
cin>>n;
for(int i=0;i<n;i++){
  for(int j=0;j<n-i-1;j++){
    cout<<" ";
  }

  if(i==0 ){
    cout<<i+1;
  }
  else if(i==n-1 && i!=0){
    for(int j=0;j<n;j++){
      cout<<j+1<<" ";
    }
  }

  else if(i!=0 && i!=n-1){
    for(int j=0;j<2*i+1;j++){
      if(j==0){
        cout<<1;
      }
      else if(j!=0 && j==2*i ){
        cout<<i+1;
      }
      else if(j!=0 && j!=2*i){
        cout<<" ";
      }
    }
  }
  cout<<endl;

}

}