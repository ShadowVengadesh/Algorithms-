#include <stdio.h>

#include <stdbool.h>

#include <limits.h>

#define V 6 // Number of vertices in the graph

int minDistance(int dist[], bool visited[]) {

    int min = INT_MAX;

    int min_index;

    for (int v = 0; v < V; v++) {

        if (!visited[v] && dist[v] <= min) {

            min = dist[v];

            min_index = v;

        }

    }

    return min_index;

}

void printSolution(int dist[]) {

    printf("Vertex\tDistance from Source\n");

    for (int i = 0; i < V; i++) {

        printf("%d\t%d\n", i, dist[i]);

    }

}

void dijkstra(int graph[V][V], int src) {

    int dist[V]; // Array to store the shortest distance from the source to each vertex

    bool visited[V]; // Array to track visited vertices

    for (int i = 0; i < V; i++) {

        dist[i] = INT_MAX; // Initialize all distances as infinite

        visited[i] = false; // Mark all vertices as not visited

    }

    dist[src] = 0; // Distance of source vertex from itself is always 0

    for (int count = 0; count < V - 1; count++) {

        int u = minDistance(dist, visited); // Select the vertex with the minimum distance

        visited[u] = true; // Mark the selected vertex as visited

        for (int v = 0; v < V; v++) {

            if (!visited[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v]) {

                dist[v] = dist[u] + graph[u][v]; // Update the distance if a shorter path is found

            }

        }

    }

    printSolution(dist); // Print the distances from the source to all vertices

}

int main() {

    int graph[V][V] = {

        {0, 4, 0, 0, 0, 0},

        {4, 0, 8, 0, 0, 0},

        {0, 8, 0, 7, 0, 4},

        {0, 0, 7, 0, 9, 14},

        {0, 0, 0, 9, 0, 10},

        {0, 0, 4, 14, 10, 0}

    };

    int source = 0; // Source vertex

    dijkstra(graph, source); // Find the shortest paths from the source vertex

    return 0;

}
