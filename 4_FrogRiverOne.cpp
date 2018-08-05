// https://app.codility.com/programmers/lessons/4-counting_elements/frog_river_one/
#include <iostream>
#include <vector>
using namespace std;

int solution(int X, vector<int> &A) {
    int *count;
    int max = 0;
    int second = 0;
    count = new int[X+1]();
    for (unsigned int i = 0; i < A.size(); ++i) {
        if ( count[A[i]] == 0 ) {
            ++max;
            if (max == X) {
               second = i;
               break;
            }
        }
        count[A[i]]++;
    }
    delete[] count;
    if (max == X) {
        return second;
    } else {
        return -1;
    }
}

int main() {
    int X = 5;
    vector<int> A{1, 3, 1, 4, 2, 3, 5, 4};
    cout << solution(X, A) << endl;
    
    int X2 = 2;
    vector<int> A2{2, 2};
    cout << solution(X2, A2) << endl;
    return 0;
}