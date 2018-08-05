// https://app.codility.com/programmers/lessons/4-counting_elements/missing_integer/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> &A) {
    int small = 0;
    int max = *max_element(A.begin(), A.end());
    int arr_size = A.size();
    int *count;
    if (max > 0) {
        count = new int[max+1]();
        for (unsigned int i = 0; i < arr_size; ++i) {
            if (A[i] > 0) {
                count[A[i]]++;
            }
        }
        for (int i = 1; i <= arr_size; ++i) {
            if (count[i] == 0) {
                small = i;
                break;
            }
        }
        if (small == 0){
            small = ++max;
        }
        delete[] count;
    } else {
        small = 1;
    }
    return small;
}

int main() {
    vector<int> A{1, 3, 1, 4, 2, 3, 5, 4};
    cout << solution(A) << endl;
    vector<int> A2{1, 2, 3};
    cout << solution(A2) << endl;
    vector<int> A3{-1, -10};
    cout << solution(A3) << endl;
    vector<int> A4{-1, 4};
    cout << solution(A4) << endl;
    vector<int> A5{-1000000, 1000000};
    cout << solution(A5) << endl;
    return 0;
}