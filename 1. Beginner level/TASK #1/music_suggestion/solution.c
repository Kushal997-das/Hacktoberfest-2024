#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure to represent a music track
typedef struct {
    char title[50];
    char artist[50];
    char genre[20];
    int rating;
} MusicTrack;

// Function to suggest music based on user's preferred genre
void suggestMusic(MusicTrack music[], int numTracks, char userGenre[]) {
    printf("Suggested music based on your interest in %s:\n", userGenre);
    
    for (int i = 0; i < numTracks; i++) {
        if (strcmp(music[i].genre, userGenre) == 0) {
            printf("Title: %s\n", music[i].title);
            printf("Artist: %s\n", music[i].artist);
            printf("Genre: %s\n", music[i].genre);
            printf("Rating: %d\n", music[i].rating);
            printf("\n");
        }
    }
}

int main() {
    // Create an array of music tracks
    MusicTrack music[] = {
        {"Song 1", "Artist 1", "Rock", 4},
        {"Song 2", "Artist 2", "Pop", 3},
        {"Song 3", "Artist 3", "Rock", 5},
        {"Song 4", "Artist 4", "Hip-Hop", 4},
        {"Song 5", "Artist 5", "Pop", 5},
    };
    
    int numTracks = sizeof(music) / sizeof(music[0]);
    
    char userGenre[20];
    printf("Enter your preferred music genre: ");
    scanf("%s", userGenre);
    
    suggestMusic(music, numTracks, userGenre);
    
    return 0;
}
