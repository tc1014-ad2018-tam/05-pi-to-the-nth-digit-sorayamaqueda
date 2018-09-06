/*
 * This program is to calculate and then display the rational number of Pi with n digits. The value of n will be
 * introduced by the user.
 * We used the += symbol which stands for Sigma, given that the established formula for Pi is a Sigma of continuous
 * differences, which will stop at the given value of n.
 *
 * Problem Analysis.
 * Problem: Write a program that gives the user the number Pi up to the nth digit (as long as she/he wants).
 * Input: Number of digits the user wants to see.
 * Calculations: 16^-i * * ((4.0 / (8*i + 1))-(2.0 / (8*i + 4))-(1.0 / (8*i + 5))-(1.0 / (8*i + 6)))
 * Outputs: Pi. nth digits
 *
 * Algorithm:
 * 1 Begin
 * 2 Ask the user for the number of digits she/he wants
 * 3 Calculate the Sigma of Pi from i=0 to n (+= is the symbol for Sigma).
 * 4 Display Pi with n digits.
 * 5 End
 *
 * Author: Soraya Lizeth Maqueda Gutiérrez
 * Date: 06.09.2018
 * Contact: soraya_maqueda@hotmail.com
 */
#include <stdio.h>
#include <math.h>

int main() {
    int n; //The number of digits that the user wants to display the number Pi.
    double result = 0; //Declared outside the loop so not to lose the value. As starting value is 0.

    printf ("How many decimal values do you want to know of Pi?"); //Here we ask the user for the number of digits he or she wants do display.
    scanf ("%i", &n); //Here we save it into the variable n.

    for (int i = 0; i <= n; ++i) {
        /*
         * This makes the calculations for the result and keeps on adding it and saving it within the variable of result.
         * C doesn't works with decimals, that is why you must precise that you want to work with decimals.
         * The way we did this in this program was by writing the numerators with decimal points.
         * For the exponential function, we used the function pow (which is
         */
        result += pow(16,-i) * ((4.0 / (8*i + 1))-(2.0 / (8*i + 4))-(1.0 / (8*i + 5))-(1.0 / (8*i + 6)));

    } printf("Pi= %.*f", n, result); //This displays the result to the user
    // %.*f determines that the output must be a floating with a determined number of decimals. In this program
    //the determined number of decimals is the one that the user gave us at the beginning of the program, which is
    //stored in the variable n.
    return 0;
}