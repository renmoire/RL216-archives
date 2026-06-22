// Nama: Irenia Maisa Kamila
// Kelas: 2B
// NIM: 2506031

#include <iostream>
using namespace std;

int vertex, edge, visited[20], **adj;

void buatGraph(int v, int e) {
    vertex = v;
    edge = e;

    adj = new int*[vertex];

    for (int i = 0; i < vertex; i++) {

        adj[i] = new int[vertex];

        for (int j = 0; j < vertex; j++) {
            adj[i][j] = 0;
        }
    }
}

void tambahEdge(int vAwal, int vTujuan) {
    adj[vAwal][vTujuan] = 1;
    adj[vTujuan][vAwal] = 1;
}

void dfs(int start) {
    visited[start] = 1;
    cout << start + 1 << " ";

    for (int i = 0; i < vertex; i++) {
        if (adj[start][i] == 1 && visited[i] == 0)
        {
            dfs(i);
        }
    }
}

int main() {
    int v = 14;
    int e = 12;

    buatGraph(v, e);

    tambahEdge(0, 1);
    tambahEdge(0, 2);
    tambahEdge(1, 3);
    tambahEdge(1, 4);
    tambahEdge(2, 5);
    tambahEdge(2, 6);
    tambahEdge(3, 7);
    tambahEdge(3, 8);
    tambahEdge(4, 9);
    tambahEdge(4, 10);
    tambahEdge(5, 12);
    tambahEdge(6, 13);

    for (int i = 0; i < v; i++)
    {
        visited[i] = 0;
    }
    
    cout << "\nDFS: ";
    dfs(0);
    cout << endl;
    return 0;
}