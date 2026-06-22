#include <iostream>
using namespace std;

int main() {
    int i, j, u, v, INF = 99, nnode;
    int start, minimum, min_bobot;
    int m;     // index untuk node
    int update; // untuk menghitung bobot u ke v
    // int nnode; // inisialisasi nnode

    cout << "Input jumlah vertex: ";
    cin >> nnode;
    nnode++;

    int w[nnode][nnode], temp[nnode], path[nnode], prev[nnode];
    int *visited = new int[nnode]; // alokasi memori untuk array int sebesar nnode

    // inisialisasi graph
    for (i = 1; i < nnode; i++)
    {
        temp[i] = INF;
        prev[i] = -1;
        path[i] = 0;
        for (int j = 1; j < nnode; j++)
        {
            w[i][j] = INF;
        }
    };
}