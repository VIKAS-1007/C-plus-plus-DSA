#include <iostream>
using namespace std;
int main()
{

    /*half pyramid*/

    // int n;
    // cout<<"enter the number of rows"<<endl;
    // cin>>n;
    // for(int i=0;i<n;i=i+1){
    //     for(int j=0;j<i+1;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    /*INverted HALF PYRAMID*/
    // int n;
    // cout<<"enter the number of rows"<<endl;
    // cin>>n;
    // for(int i=0;i<n;i=i+1){
    //     for(int j=0;j<n-i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    /*NUMERIC HALF PYRAMID*/
    // int n;
    // cout<<"enter the number of rows"<<endl;
    // cin>>n;
    // for(int i=0;i<n;i=i+1){
    //     for(int j=0;j<i+1;j=j+1){
    //         cout<<j+1<<" ";
    //     }
    //     cout<<endl;
    // }

    /*INVERTED NUMERIC HALF PYRAMID*/
    //    int n;
    //    cout<<"enter the number of rows"<<endl;
    //    cin>>n;
    //    for(int i=0;i<n;i=i+1){
    //     for(int j=0;j<n-i;j=j+1){
    //         cout<<j+1<<" ";
    //     }
    //     cout<<endl;
    //    }

    /*FULL PYRAMID*/
    //   int n;
    //   cout<<"enter the number of rows"<<endl;
    //   cin>>n;
    //   for(int i=0;i<n;i=i+1){
    //     for(int j=0;j<n-i-1;j=j+1){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<i+1;j=j+1){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    //   }

    /*INVERTED FULL PYRAMID*/
    //   int n;
    //   cout<<"enter the number of rows"<<endl;
    //   cin>>n;
    //   for(int i=0;i<n;i=i+1){
    //     for(int j=0;j<i;j=j+1){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<n-i;j=j+1){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    //   }

    /*SOLID DIAMOND*/
    // int n;
    // cout<<"enter the number of rows"<<endl;
    // cin>>n;
    // // top pyramid
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i-1;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<i+1;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // // bottom pyramid
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<n-i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    /*HOLLOW DIAMOND*/
    // int n;
    // cout << "enter the number of rows" << endl;
    // cin >> n;
    // // top hollow pyraimd
    // for (int i = 0; i < n; i++){
    //     for(int j=0;j<n-i-1;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<2*i+1;j++){
    //         if(j==0||j==2*i){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }
    // // bottom hollow pyramid
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<2*n-2*i-1;j++){
    //         if(j==0||j==(2*n-2*i-2)){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    /*FLIPPED SOLID DIAMOND*/
    // int n;
    // cout<<"enter the number of rows"<<endl;
    // cin>>n;
    // //Top part
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i;j++){
    //         cout<<"*";
    //     }
    //     for(int j=0;j<2*i+1;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<n-i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // //bottom-part
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<"*";
    //     }
    //     for(int j=0;j<2*n-2*i-1;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<i+1;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    /*
    1
    2*2
    3*3*3
    4*4*4*4
    4*4*4*4
    3*3*3
    2*2
    1
    pattern
    */
    //   int n;
    //   cout<<"enter the number of rows"<<endl;
    //   cin>>n;
    // //   top half
    //   for(int i=0;i<n;i++){
    //     for(int j=0;j<2*i+1;j++){
    //         if(j%2==0){
    //             cout<<i+1;
    //         }
    //         else{
    //             cout<<"*";
    //         }
    //     }
    //      cout<<endl;
    //   }

    // //   second half
    //   for(int i=0;i<n;i++){
    //     for(int j=0;j<2*n-2*i-1;j++){
    //         if(j%2==0){
    //             cout<<n-i;
    //         }
    //         else{
    //             cout<<"*";
    //         }
    //   }
    //     cout<<endl;
    //   }

    /*
       1
       2*2
       3*3*3
       4*4*4*4
       4*4*4*4
       3*3*3
       2*2
       1
       pattern

       another approach
       */
    //    int n;
    //    cout<<"enter number of rows"<<endl;
    //    cin>>n;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<i+1;
    //         if(j!=i){
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i;j++){
    //         cout<<n-i;
    //         if(j!=n-i-1){
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }

    /*ALPHABETIC PALINDROME PYRAMID*/

  int n;
  cout<<"enter the number of rows"<<endl;
  cin>>n;
  for(int i=0;i<n;i++){
    int j;
    for(j=0;j<i+1;j++){
        char ch=j+1+'A'-1;
        cout<<ch;
    }
    for(j;j>1;j--){
        char ch=j-1+'A'-1;
        cout<<ch;
    }
    cout<<endl;
  }
}