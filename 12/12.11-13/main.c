#include "diceroll.h"
int roll_count = 0;

static int rollem(int sides) {
    int roll;

    roll = rand() % sides + 1;
    ++roll_count;

    return roll;
}
int roll_n_dice(int dice, int sides) {
    int d;
    int total = 0;
    if (sides < 2) {
        printf("Need at least 2sides.\n");
        return -2;
    }
    if (sides < 1) {
        printf("need at least 1 sides.\n");
        return -1;
    }
    for (int d = 0; d < dice; d++)
        total += rollem(sides);
    return total;
}