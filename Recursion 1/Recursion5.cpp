// What will be the output ?

#include <iostream>
using namespace std;

void print(int n){
    if(n < 0){
        return;
    }
    cout << n << " ";
    print(n - 2);
}

int main() {
    int num = 5;
    print(num);
}

// This problem has only one correct answer
// (a) time error
//5 4 3 2 1
// 5 3 1 
// None of these
