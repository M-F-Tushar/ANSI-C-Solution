#include <stdio.h>
#include <string.h>

int main() {
    char answer[50];
    int attempts = 0;
    const char correctAnswer[] = "Dennis Ritchie";

    while (attempts < 3) {
        printf("Who is the inventor of C ?\n");
        fgets(answer, sizeof(answer), stdin);

        // Remove newline character from the input (if present)
        answer[strcspn(answer, "\n")] = 0;

        if (strcmp(answer, correctAnswer) == 0) {
            printf("Good\n");
            return 0; // Exit if the answer is correct
        } else {
            attempts++;
            if (attempts < 3) {
                printf("Try again\n");
            } else {
                printf("The correct answer is: %s\n", correctAnswer);
            }
        }
    }

    return 0;
}
Explanation:
The program asks the question "Who is the inventor of C?"

It accepts an answer from the user.

If the answer is "Dennis Ritchie", it prints "Good" and stops.

If the answer is incorrect, it prints "Try again" and allows up to 3 attempts.

If the user fails to answer correctly within three attempts, it displays the correct answer and stops.

Example Runs:
✅ Correct Answer on First Try
csharp
Copy
Edit
Who is the inventor of C ?
Dennis Ritchie
Good
❌ Wrong Answers (Three Attempts)
vbnet
Copy
Edit
Who is the inventor of C ?
James Gosling
Try again
Who is the inventor of C ?
Bjarne Stroustrup
Try again
Who is the inventor of C ?
Ken Thompson
The correct answer is: Dennis Ritchie
