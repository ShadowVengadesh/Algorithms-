#include <stdio.h>
#include<conio.h>

// Function to compute the transitive closure of a graph using Warshall's algorithm

void transitiveClosure(int graph[][100], int n) {

    int closure[100][100];

    int i, j, k;

    // Initialize the closure matrix with the input graph

    for (i = 0; i < n; i++) {

        for (j = 0; j < n; j++) {

            closure[i][j] = graph[i][j];

        }

    }

    // Compute the transitive closure

    for (k = 0; k < n; k++) {

        for (i = 0; i < n; i++) {

            for (j = 0; j < n; j++) {

                closure[i][j] = closure[i][j] || (closure[i][k] && closure[k][j]);

            }

        }

    }

    // Print the transitive closure matrix

    printf("Transitive Closure:\n");

    for (i = 0; i < n; i++) {

        for (j = 0; j < n; j++) {

            printf("%d ", closure[i][j]);

        }

        printf("\n");

    }

}

int main() {

    int graph[100][100], n, i, j;

    printf("Enter the number of vertices in the graph: ");

    scanf("%d", &n);

    printf("Enter the adjacency matrix:\n");

    for (i = 0; i < n; i++) {

        for (j = 0; j < n; j++) {

            scanf("%d", &graph[i][j]);

        }

    }

    transitiveClosure(graph, n);
    getch();
    return 0;

}

