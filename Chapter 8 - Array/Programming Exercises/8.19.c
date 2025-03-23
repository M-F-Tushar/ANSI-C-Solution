8.19 Convert Roman Numeral to Decimal
Problem:
Convert Roman numeral input to decimal.


#include <stdio.h>
#include <string.h>

int romanToDecimal(char c) {
    switch(c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int main() {
    char roman[20];
    int i, num = 0, len;

    printf("Enter a Roman numeral: ");
    scanf("%s", roman);

    len = strlen(roman);

    for(i = 0; i < len; i++) {
        if(romanToDecimal(roman[i]) < romanToDecimal(roman[i+1]))
            num -= romanToDecimal(roman[i]);
        else
            num += romanToDecimal(roman[i]);
    }

    printf("Decimal equivalent: %d\n", num);
    return 0;
}
