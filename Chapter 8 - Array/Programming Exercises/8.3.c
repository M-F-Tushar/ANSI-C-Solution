8.3 Voting System (Counting Votes and Spoilt Ballots)
Step-by-step solution:
Declare an array count[5] to store votes for candidates.

Initialize a counter for spoilt ballots.

Read votes from users.

If a vote is between 1 and 5, increment the respective candidate's count.

If a vote is invalid, increment the spoilt ballot count.

Print the vote counts and spoilt ballots.

C Program:

#include <stdio.h>

int main() {
    int votes, count[5] = {0}, spoilt = 0, i, n;

    printf("Enter number of voters: ");
    scanf("%d", &n);

    printf("Enter votes (1-5) for candidates:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &votes);
        if(votes >= 1 && votes <= 5)
            count[votes - 1]++;
        else
            spoilt++;
    }

    printf("Vote count for candidates:\n");
    for(i = 0; i < 5; i++)
        printf("Candidate %d: %d votes\n", i + 1, count[i]);

    printf("Spoilt ballots: %d\n", spoilt);
    return 0;
}

