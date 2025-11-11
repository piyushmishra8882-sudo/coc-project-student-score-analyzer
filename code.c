#include <stdio.h>


float calculateMean(const int scores[], int size);
int findHighest(const int scores[], int size);
int findLowest(const int scores[], int size);


int main() {
    int n;
    printf("Welcome to the Student Score Analyzer!\n");
    printf("How many student scores will you enter? (n): ");
    
  
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer for the number of students.\n");
        return 1; 
    }

   
    int scores[n]; 

    printf("\n--- Enter Scores ---\n");
    
   
    for (int i = 0; i < n; i++) {
        printf("Enter score for student #%d (0-100): ", i + 1);
        if (scanf("%d", &scores[i]) != 1) {
             printf("Invalid score input. Exiting.\n");
             return 1;
        }
    }

   
    printf("\n--- Analysis Report ---\n");
    
    
    float mean = calculateMean(scores, n);
    int highest = findHighest(scores, n);
    int lowest = findLowest(scores, n);

  
    printf("Class Average: %.1f\n", mean); 
    printf("Highest Score: %d\n", highest);
    printf("Lowest Score: %d\n", lowest);
    
    printf("\nAnalysis complete. Thank you.\n");

    return 0;
}




/**
 * Calculates the Mean (Average) of the scores.
 * @param scores The array of integer scores.
 * @param size The number of elements in the array.
 * @return The calculated mean score as a float.
 */
float calculateMean(const int scores[], int size) {
    long long sum = 0; 
    for (int i = 0; i < size; i++) {
        sum += scores[i];
    }
    
    
    return (float)sum / size;
}

/**
 * Finds the highest score in the array.
 * @param scores The array of integer scores.
 * @param size The number of elements in the array.
 * @return The highest score found.
 */
int findHighest(const int scores[], int size) {
   
    int max_score_so_far = scores[0]; 
    
   
    for (int i = 1; i < size; i++) {
       
        if (scores[i] > max_score_so_far) {
            max_score_so_far = scores[i]; 
        }
    }
    
    return max_score_so_far;
}

/**
 * Finds the lowest score in the array.
 * @param scores The array of integer scores.
 * @param size The number of elements in the array.
 * @return The lowest score found.
 */
int findLowest(const int scores[], int size) {
    
    int min_score_so_far = scores[0];
    
   
    for (int i = 1; i < size; i++) {
     
        if (scores[i] < min_score_so_far) {
            min_score_so_far = scores[i]; 
        }
    }
    
    return min_score_so_far;
}