#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int rows, cols;
    int fieldNumber = 1;

    while (cin >> rows >> cols && !(rows == 0 && cols == 0)) {
        vector<string> field(rows);

        for (int i = 0; i < rows; i++) {
            cin >> field[i];
        }

        if (fieldNumber > 1) {
            cout << endl;
        }

        cout << "Field #" << fieldNumber << ":" << endl;

        int dr[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
        int dc[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                if (field[r][c] == '*') {
                    cout << '*';
                }
                else {
                    int count = 0;

                    for (int k = 0; k < 8; k++) {
                        int nr = r + dr[k];
                        int nc = c + dc[k];

                        if (nr >= 0 && nr < rows && nc >= 0 && nc < cols &&
                            field[nr][nc] == '*') {
                            count++;
                        }
                    }

                    cout << count;
                }
            }

            cout << endl;
        }

        fieldNumber++;
    }

    return 0;
}
