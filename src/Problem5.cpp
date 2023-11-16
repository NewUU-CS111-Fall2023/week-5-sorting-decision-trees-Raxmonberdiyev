#include <iostream>
#include <vector>
using namespace std;
void displayColors(const vector<vector<char>>& matrix) {
    const char blue = 'b';
    const char yellow = 'y';
    const char white = 'w';
    for (const auto& row : matrix) {
        for (char symbol : row) {
            if (symbol == blue) {
                cout << "\033[44m  ";
            } else if (symbol == yellow) {
                cout << "\033[43m  ";
            } else if (symbol == white) {
                cout << "\033[47m  ";
            } else {
                cout << "Unknown symbol";
            }
        }
        cout << "\033[0m" << endl;
    }
}

int main() {
    vector<vector<char>> colorMatrix = {
            {'b', 'y', 'w', 'b'},
            {'y', 'w', 'b', 'y'},
            {'w', 'b', 'y', 'w'},
            {'b', 'y', 'w', 'b'}
    };

    cout << "Visual representation of colors: " <<endl;
    displayColors(colorMatrix);

    return 0;
}
