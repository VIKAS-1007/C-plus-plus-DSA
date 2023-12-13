#include<iostream>
using namespace std;
int main(){
    /*HOLLOW PYRAMID*/

    // int n;
    // cout << "enter the number of rows" << endl;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int j = 0; j < 2 * i + 1; j++)
    //     {
    //         if (i == 0 || i == n - 1)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             if (j == 0 || j == 2 * i)
    //             {
    //                 cout << "* ";
    //             }
    //             else
    //             {
    //                 cout << "  ";
    //             }
    //         }
    //     }
    //     cout<<endl;
    // }



    /*NUMERIC HOLLOW HALF PYRAMID*/
    // int n;
    // cout<<"enter the number of rows"<<endl;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         if(i==0||i==n-1){
    //             cout<<j+1<<" ";
    //         }
    //         else{
    //             if(j==0||j==i){
    //                 cout<<j+1<<" ";
    //             }
    //             else{
    //                 cout<<"  ";
    //             }
    //         }
    //     }
    //     cout<<endl;
    // }



    /*NUMERIC HOLLOW INVERTED HALF PYRAMID*/

    int n;
    cout<<"enter the number of rows"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(i==0||i==n-1){
                cout<<i+j+1<<" ";
            }
            else{
                if(j==0||j==n-i-1){
                    cout<<i+j+1<<" ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
}