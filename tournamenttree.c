#include <stdio.h>

// Function to find the winner of a tournament between two players
int tournament(int a, int b) {
    return (a > b) ? a : b;
}

// Function to build a tournament tree from an array of players
void buildTournamentTree(int arr[], int tree[], int n) {
    // Copy the array of players to the leaves of the tree
    for (int i = 0; i < n; i++) {
        tree[n + i] = arr[i];
    }

    // Build the tournament tree bottom-up
    for (int i = n - 1; i > 0; i--) {
        tree[i] = tournament(tree[2 * i], tree[2 * i + 1]);
    }
}

// Function to get the winner of the tournament from the root of the tree
int getTournamentWinner(int tree[]) {
    return tree[1]; // The root of the tree contains the winner
}

int main() {
    // Example usage
    int arr[] = {3, 1, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Calculate the size of the tournament tree
    int treeSize = 2 * n;

    // Create an array to store the tournament tree
    int tournamentTree[treeSize];

    // Build the tournament tree
    buildTournamentTree(arr, tournamentTree, n);

    // Get the winner of the tournament
    int winner = getTournamentWinner(tournamentTree);

    // Print the winner
    printf("The winner of the tournament is: %d\n", winner);

    return 0;
}
