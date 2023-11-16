//
// Created by Raximberdi on 15/11/2023.
//
#include <iostream>
#include <vector>
using namespace std;
void selectionSort(vector<int>& denominations) {
    int n = denominations.size();

    for (int i = 0; i < n - 1; ++i) {
        int min_index = i;
        for (int j = i + 1; j < n; ++j) {
            if (denominations[j] < denominations[min_index]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            swap(denominations[i], denominations[min_index]);
        }
    }
}

int main() {
    vector<int> denominations = {50, 10, 20, 5, 100, 1, 2, 500, 200};
    cout << "Unsorted denominations: ";
    for (const auto& denom : denominations) {cout << denom << " ";
    }
    cout <<endl;
    selectionSort(denominations);
    cout << "Sorted denominations: ";
    for (const auto& denom : denominations) {
        cout << denom << " ";
    }
    cout <<endl;

    return 0;
}
