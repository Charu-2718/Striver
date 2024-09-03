#include <iostream>
using namespace std;

int main(){
    uint32_t n;
    cin >> n;

    uint32_t ans = 0;

    for(int i = 0; i < 32; i++){
        int bit = n & 1;          // Extract the least significant bit of n
        ans = (ans << 1) | bit;   // Left shift ans and add the extracted bit
        n = n >> 1;               // Right shift n to process the next bit
    }

    cout << ans << endl;          // Output the result
    return 0;
}
