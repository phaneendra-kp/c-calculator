#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int userScore = 0, computerScore = 0;
    int userChoice, computerChoice;
    
    printf("=== Rock, Paper, Scissors Game ===\n");
    printf("Best of 3 rounds!\n\n");
    
    for (int round = 1; round <= 3; round++) {
        printf("--- Round %d ---\n", round);
        printf("Choose:\n");
        printf("1. Rock\n");
        printf("2. Paper\n");
        printf("3. Scissors\n");
        printf("Enter your choice (1-3): ");
        scanf("%d", &userChoice);
        
        if (userChoice < 1 || userChoice > 3) {
            printf("Invalid choice! Round skipped.\n\n");
            round--;
            continue;
        }
        
        computerChoice = rand() % 3 + 1;
        
        printf("You chose: ");
        if (userChoice == 1) printf("Rock\n");
        else if (userChoice == 2) printf("Paper\n");
        else printf("Scissors\n");
        
        printf("Computer chose: ");
        if (computerChoice == 1) printf("Rock\n");
        else if (computerChoice == 2) printf("Paper\n");
        else printf("Scissors\n");
        
        if (userChoice == computerChoice) {
            printf("Result: TIE!\n");
        } else if ((userChoice == 1 && computerChoice == 3) ||
                   (userChoice == 2 && computerChoice == 1) ||
                   (userChoice == 3 && computerChoice == 2)) {
            printf("Result: YOU WIN THIS ROUND!\n");
            userScore++;
        } else {
            printf("Result: COMPUTER WINS THIS ROUND!\n");
            computerScore++;
        }
        
        printf("Score - You: %d | Computer: %d\n\n", userScore, computerScore);
    }
    
    printf("=== FINAL RESULTS ===\n");
    printf("Your Score: %d\n", userScore);
    printf("Computer Score: %d\n", computerScore);
    
    if (userScore > computerScore) {
        printf("YOU WIN THE GAME! 🎉\n");
    } else if (computerScore > userScore) {
        printf("COMPUTER WINS THE GAME!\n");
    } else {
        printf("IT'S A TIE!\n");
    }
    
    return 0;
}
