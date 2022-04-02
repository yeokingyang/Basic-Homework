#include <iostream>
using namespace std;


int main()
{
    int total;
    const int stages = 4;
    int min, i = 1;
    int n = 9;
    int cost[10], d[10], p[5];

    int graph[10][10] =
    { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      {0, 0, 3, 1, 5, 7, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 2, 3, 0, 0},
      {0, 0, 0, 0, 0, 0, 9, 16, 0, 0},
      {0, 0, 0, 0, 0, 0, 5, 0, 7, 0},
      {0, 0, 0, 0, 0, 0, 10, 2, 4, 0},
      {0, 0, 0, 0, 0, 0, 0, 0, 0, 13},
      {0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
      {0, 0, 0, 0, 0, 0, 0, 0, 0, 2},
      {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };


    cout << "\n------ Backward Approach ----- \n";
    cost[1] = 0;

    for (int i = 2; i <= n; i++) {
        min = 32767;
        for (int k = 1; k <= n; k++) {

            if (graph[k][i] != 0 && graph[k][i] + cost[k] < min) {
                min = graph[k][i] + cost[k];
                d[i] = k;
            }
        }

        cost[i] = min;
    }

    p[1] = 1;
    p[stages] = n;
    cout << "The path   : ";
    cout << p[stages] << "-";
    for (int i = 3; i >= 2; i--) {

        cout << (p[i] = d[p[i + 1]]) << '-';
    }
    cout << p[1] << "\n";
    cout << "Total cost : " << cost[n];




    cout << "\n\n ------ Forward Approach ----- \n";


    cost[n] = 0;

    for (int i = n - 1; i >= 1; i--) {
        min = 32767;
        for (int k = i + 1; k <= n; k++) {

            if (graph[i][k] != 0 && graph[i][k] + cost[k] < min) {
                min = graph[i][k] + cost[k];
                d[i] = k;
            }

        }
        cost[i] = min;
    }
    p[i] = 1;
    p[stages] = n;
    cout << "The path   : ";
    cout << p[1] << '-';
    for (int i = 2; i < 5; i++) {
        if (i == 4)
            cout << (p[i] = d[p[i - 1]]) << endl;
        else
            cout << (p[i] = d[p[i - 1]]) << '-';
    }
    cout << "Total cost : " << cost[1] << "\n\n";

}
