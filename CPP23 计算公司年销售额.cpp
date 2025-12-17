#include <iostream>
using namespace std;

int main() {

    int arr[4][3] = {22,66,44,77,33,88,25,45,65,11,66,99};
    int sum = 0;
    for(int i = 0; i < 4; i++) 
    {
        for(int j = 0; j < 3; j++) 
        {
            sum += arr[i][j];
        }
    }
    cout << sum << endl;
    
    return 0;
}