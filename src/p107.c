/* Written by belongtothenight / Da-Chuan Chen
 *
 * Following <C How to Program with an introduction
 * to C++> eighth edition by Paul Deitel and Harvey
 * Deitel
 *
 * Alternative syntax for if else statement ?:
 */

#include <stdio.h>
#include "../config.h"

int main (int argc, char *argv[]) {
    int threshold = 60;
    int grade = 70;
    // puts: print until NULL is reached
    puts(grade >= threshold ? "Passed" : "Failed" );
    grade >= threshold ? puts("Passed") : puts("Failed");
}
