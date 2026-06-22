#include <iostream>
using namespace std;

int vertex, edge, visited[20], **adj;

void buatGraf(int v, int e) {
    vertex = v;
    edge = e;

    adj = new int*[vertex];

    for (int baris = 0; baris < vertex; baris++) {
        adj[baris] = new int[vertex];
        for (int kolom = 0; kolom < vertex; kolom++) {
            adj[baris][kolom] = 0;
        }
    }
}

void tambahEdge(int vAwal, int vTujuan) {
    adj[vAwal][vTujuan] = 1;
    adj[vTujuan][vAwal] = 1;
}

void dfs(int start) {
    visited[start] = 1;
    cout << start << " ";

    for (int i = 0; i < vertex; i++) {
        if (adj[start][i] == 1 && visited[i] == 0) {
            dfs(i);
        }
    }
}

int main() {
    int v = 8, e = 7;

    buatGraf(v, e);

    tambahEdge(0, 1);
    tambahEdge(0, 5);
    tambahEdge(1, 2);
    tambahEdge(2, 3);
    tambahEdge(1, 4);
    tambahEdge(5, 6);
    tambahEdge(5, 7);

    for (int i = 0; i < v; i++) {
        visited[i] = 0;
    }

    cout << "Hasil DFS: ";
    dfs(0);
    cout << endl;

    return 0;
}