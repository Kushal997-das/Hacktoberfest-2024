#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Sample music genres and songs
const char* genres[] = {"Pop", "Rock", "Hip-Hop", "Jazz", "Classical"};
const char* popSongs[] = {"Song1", "Song2", "Song3"};
const char* rockSongs[] = {"Song4", "Song5", "Song6"};
const char* hipHopSongs[] = {"Song7", "Song8", "Song9"};
const char* jazzSongs[] = {"Song10", "Song11", "Song12"};
const char* classicalSongs[] = {"Song13", "Song14", "Song15"};

// Function to suggest a random song from a given genre
const char* suggestSong(const char* genre) {
    const char** songs = NULL;
    int numSongs = 0;

    if (strcmp(genre, "Pop") == 0) {
        songs = popSongs;
        numSongs = sizeof(popSongs) / sizeof(popSongs[0]);
    } else if (strcmp(genre, "Rock") == 0) {
        songs = rockSongs;
        numSongs = sizeof(rockSongs) / sizeof(rockSongs[0]);
    } else if (strcmp(genre, "Hip-Hop") == 0) {
        songs = hipHopSongs;
        numSongs = sizeof(hipHopSongs) / sizeof(hipHopSongs[0]);
    } else if (strcmp(genre, "Jazz") == 0) {
        songs = jazzSongs;
        numSongs = sizeof(jazzSongs) / sizeof(jazzSongs[0]);
    } else if (strcmp(genre, "Classical") == 0) {
        songs = classicalSongs;
        numSongs = sizeof(classicalSongs) / sizeof(classicalSongs[0]);
    }

    if (songs != NULL && numSongs > 0) {
        int randomIndex = rand() % numSongs;
        return songs[randomIndex];
    } else {
        return "Genre not found";
    }
}

int main() {
    srand(time(NULL)); // Seed the random number generator

    printf("Welcome to the Music Suggestion Program!\n");

    while (1) {
        printf("Enter a music genre (Pop, Rock, Hip-Hop, Jazz, Classical) or 'quit' to exit: ");
        char input[100];
        scanf("%s", input);

        if (strcmp(input, "quit") == 0) {
            break;
        }

        const char* suggestedSong = suggestSong(input);
        printf("Suggested Song: %s\n", suggestedSong);
    }

    printf("Goodbye!\n");
    return 0;
}
