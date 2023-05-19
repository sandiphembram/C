#include <stdio.h>
#include <stdlib.h>

#define MAX_DIRS 1000

int parent[MAX_DIRS];
int fileSize[MAX_DIRS];
int visited[MAX_DIRS];
int subtreeSize[MAX_DIRS];

int absDiff(int a, int b) {
    return a > b ? a - b : b - a;
}

int dfs(int node) {
    visited[node] = 1;
    int size = fileSize[node];

    for (int i = 0; i < MAX_DIRS; i++) {
        if (parent[i] == node && !visited[i]) {
            size += dfs(i);
        }
    }

    subtreeSize[node] = size;
    return size;
}

int findMinDiffBranch(int node, int totalSize) {
    visited[node] = 1;
    int minDiff = absDiff(totalSize - 2 * subtreeSize[node], totalSize);

    for (int i = 0; i < MAX_DIRS; i++) {
        if (parent[i] == node && !visited[i]) {
            int diff = findMinDiffBranch(i, totalSize);
            if (diff < minDiff) {
                minDiff = diff;
            }
        }
    }

    return minDiff;
}

int findMinDiff(int n) {
    int totalSize = dfs(0);
    for (int i = 0; i < MAX_DIRS; i++) {
        visited[i] = 0;
    }
    return findMinDiffBranch(0, totalSize);
}

int main() {
    // Example input
    int parent[] = {-1, 0, 0, 1, 1, 2};
    int fileSize[] = {1, 2, 2, 1, 1, 1};
    int n = sizeof(parent) / sizeof(parent[0]);

    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    int minDiff = findMinDiff(n);
    printf("Minimum difference in subtree sizes: %d\n", minDiff);

    return 0;
}
