#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int romanToInt(char*);

int main() {
    printf("%d\n", romanToInt("III"));

    printf("%d\n", romanToInt("LVIII"));

    printf("%d\n", romanToInt("MCMXCIV"));

    return 0;
}

int romanToInt(char* s) {
    int sum = 0;

    if (strstr(s, "IV") != NULL) {
        sum -= 2;
    }
    if (strstr(s, "IX") != NULL) {
        sum -= 2;
    }
    if (strstr(s, "XL") != NULL) {
        sum -= 20;
    }
    if (strstr(s, "XC") != NULL) {
        sum -= 20;
    }
    if (strstr(s, "CD") != NULL) {
        sum -= 200;
    }
    if (strstr(s, "CM") != NULL) {
        sum -= 200;
    }

    for (int i = 0; i < strlen(s); i++) {
        char c = s[i];

        switch (c) {
            case 'I':
                sum += 1;
                break;
            case 'V':
                sum += 5;
                break;
            case 'X':
                sum += 10;
                break;
            case 'L':
                sum += 50;
                break;
            case 'C':
                sum += 100;
                break;
            case 'D':
                sum += 500;
                break;
            case 'M':
                sum += 1000;
                break;
            default:
                perror("Error: Entering wrong Roman number!");
                exit(1);
        }
    }

    return sum;
}
