#include<iostream> 
#include<vector>
using namespace std;
int main() {
    int row=3;
    int colmn=5;
    vector<vector<bool> >arr(5,vector<bool>(5,false));
    for(int i=0; i<row; i++) {
        for(int j=0; j<colmn; j++) {
            cout << arr[i][j] << " ";

        }
        cout << endl;
    }
    return 0;
}