#include <iostream>
using namespace std;

int main()
{
    int number;
    int sum = 0;

    // zagniedanie pętli

    //pierwsza pętla
    for (int i = 1; i <= 3; i++) {

        //druga pętla
        for (int j = 1; j <= 3; j++) {
            if (j == 2) {
                continue;
            }
        }   cout << "i = " << i << ", j = " << j << endl;
    }
    return 0;
}