9.9 Convert currency format (RRRR.PP) into words.
Solution:
c
Copy
Edit
#include <stdio.h>
#include <string.h>

char *ones[] = {"", "ONE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE"};
char *tens[] = {"", "", "TWENTY", "THIRTY", "FORTY", "FIFTY", "SIXTY", "SEVENTY", "EIGHTY", "NINETY"};
char *teens[] = {"TEN", "ELEVEN", "TWELVE", "THIRTEEN", "FOURTEEN", "FIFTEEN", "SIXTEEN", "SEVENTEEN", "EIGHTEEN", "NINETEEN"};

void convertToWords(int num) {
    if (num >= 100) {
        printf("%s HUNDRED ", ones[num / 100]);
        num %= 100;
    }
    if (num >= 10 && num <= 19) {
        printf("%s ", teens[num - 10]);
    } else {
        printf("%s ", tens[num / 10]);
        printf("%s ", ones[num % 10]);
    }
}

int main() {
    float amount;
    int rupees, paise;

    printf("Enter the cost (RRRR.PP format): ");
    scanf("%f", &amount);

    rupees = (int)amount;
    paise = (int)((amount - rupees) * 100);

    printf("In words: ");
    convertToWords(rupees);
    printf("RUPEES ");

    if (paise > 0) {
        convertToWords(paise);
        printf("PAISE");
    }

    printf("\n");
    return 0;
}
Explanation:
Uses arrays for number words.

Splits input into rupees and paise.

Converts both parts to words.
