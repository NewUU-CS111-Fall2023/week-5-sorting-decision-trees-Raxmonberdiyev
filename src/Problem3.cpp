//
// Created by Raximberdi on 15/11/2023.
//

#include <iostream>
#include <vector>
using namespace std;
void rearrangeSoldiers(vector<string>& soldiers) {
    int count = soldiers.size();
    for (int i = 0; i < count - 1; i += 2) {
        swap(soldiers[i], soldiers[i + 1]);
    }
}
int main() {
    vector<string> soldiers = {"Alpha", "Bravo", "Charlie", "Delta", "Echo"};
    cout << "Original order of soldiers: \n ";
    for (const auto& soldier : soldiers) {cout << soldier << " "<<endl;}
    rearrangeSoldiers(soldiers);
    cout << "Rearranged order of soldiers: \n ";
    for (const auto& soldier : soldiers) {cout << soldier <<endl;}
    return 0;
}
