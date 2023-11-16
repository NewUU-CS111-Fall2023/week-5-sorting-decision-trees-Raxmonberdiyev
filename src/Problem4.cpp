//
// Created by Raximberdi on 15/11/2023.
//
#include <iostream>
#include <vector>
using namespace std;
int countElementsMeetingCriteria(const vector<int>& arr) {
    int count = 0;
    int size = arr.size();
    for (int i = 1; i < size - 1; ++i) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<int> numbers = {4, 2, 7, 1, 5, 9, 3};
    cout << "Original array: ";
    for (const auto& num : numbers) {cout << num << " ";}
    cout << endl;
    int count = countElementsMeetingCriteria(numbers);
    cout << "Count of elements where both neighbors are smaller: " << count << endl;
    return 0;
}
