#include<iostream>
#include<algorithm>
#include <vector>
#include <climits>
using namespace std;
// 2D array---------

// int main(){
//     //1-D array--int arr[5]={1,2,3,4,5};
//     //2-D array--
//      int matrix[4][3];
//      cout<<"enter matrix:"<<endl;
//          for(int i=0;i<4;i++){
//         for(int j=0;j<3;j++){
//             cin>>matrix[i][j];
//         }
//         cout<<endl;
//     }
     ///int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{11,12,13}};
//     // int rows=4;
//     // int cols=3;
//     //  int matrix[4][3] ={{1,2,3},{4,5,6},{7,8,9},{11,12,13}};
//     // cout<<matrix[2][1];// i and j start from 0 
//     //cout<<matrix[1][1];
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

//     return 0;
// }

// user input row and column--------
// int main() {
//     int row, column;
    
//     cout << "Enter matrix rows: ";
//     cin >> row;
//     cout << "Enter matrix columns: ";
//     cin >> column;

//     // Create a 2D vector with given rows and columns
//     vector<vector<int>> matrix(row, vector<int>(column));

//     // Input matrix elements
//     cout << "Enter matrix elements:\n";
//     for(int i = 0; i < row; ++i) {
//         for(int j = 0; j < column; ++j) {
//             cin >> matrix[i][j];
//         }
//     }

//     // Output matrix
//     cout << "Matrix is:\n";
//     for(int i = 0; i < row; ++i) {
//         for(int j = 0; j < column; ++j) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
    

//     return 0;
// }
// lenear search and return pair ------------
// #include <iostream>
// using namespace std;

// int main() {
//     int matrix[4][3] = {{1,2,3}, {4,5,6}, {7,8,9}, {11,12,13}};
//     int key = 8;
//     pair<int, int>p={-1,-1};
//     for(int i = 0; i < 4; i++) {
//         for(int j = 0; j < 3; j++) {
//             if(matrix[i][j] == key){
//                // cout << i << "," << j << endl; // print index and move to next line
//                p = make_pair(i, j); // store index in pair and move to next line
//                //break;
//             }
//         }
//     }
//     cout << "Index of key: (" << p.first << ", " << p.second << ")" << endl; // print index
//     return 0;
// }
//maximum row sum------------------------
// int main() {
//     int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{11,12,13}};
//     int  max_sum=INT_MIN;
//     for(int i=0;i<4;i++){
//         int row_sum = 0;
//         for(int j=0;j<3;j++){
//             row_sum+= matrix[i][j];
//         }
//         max_sum = max(max_sum, row_sum);
//         cout<<endl;
//     }
//     cout<<"maximum row sum:"<<max_sum;
// }
// digonal sum---------
int main() {
    // int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    // int sum=0;
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<4;j++){
    //         if(i==j){
    //             sum+= matrix[i][j];
    //         }
    //         else if(j== 4-i-1){
    //             sum+= matrix[i][j];
    //         }
    //     }
    // }
    // cout<<"diagonal sum:"<<sum;
    //int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int sum=0;
    for(int i=0;i<3;i++){
        sum += matrix[i][i];
        if(i!=3-i-1){
            sum+=matrix[i][3-i-1];
        }
    }
    cout<<"diagonal sum:"<<sum;
    return 0;
}
