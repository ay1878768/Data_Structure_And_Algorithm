#include<iostream>
using namespace std;
void waveprint(int arr[3][4]) {
    int row=3;
    int column=4;
    for(int startcolm=0; startcolm<column;startcolm++) {
        if(startcolm%2==0) {
            for(int i=0;i<row;i++) {
                cout << arr[i][startcolm] << " ";
            }
        }
        else {
            for(int i=row-1; i>=0;i--) {
                cout << arr[i][startcolm] << " ";
            }
        }
    }
}
int main() {
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    waveprint(arr);
   
    return 0;
}