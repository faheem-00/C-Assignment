#include <stdio.h>

int main() {
    int population = 80000;
    float men_percent = 52;
    float literacy_percent = 48;
    float literate_men_percent = 35;

    float men, women;
    float literate_people, literate_men, literate_women;
    float illiterate_men, illiterate_women;

    // Calculations
    men = (men_percent / 100) * population;
    women = population - men;

    literate_people = (literacy_percent / 100) * population;
    literate_men = (literate_men_percent / 100) * population;
    literate_women = literate_people - literate_men;

    illiterate_men = men - literate_men;
    illiterate_women = women - literate_women;

    printf("Total illiterate men: %.0f\n", illiterate_men);
    printf("Total illiterate women: %.0f\n", illiterate_women);

    return 0;
}