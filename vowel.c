
#include "vowel.h"

int isVowel(char ch) {
    // Convert uppercase letters to lowercase manually
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + ('a' - 'A');
    }
    // Check if character is a vowel
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

