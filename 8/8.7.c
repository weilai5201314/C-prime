// checking
#include <stdbool.h>
#include <stdio.h>
long get_long(void);
// verify input a integer
bool bad_limits(long begin, long end, long low, long high);
// verify upper limit and lower limit
double sum_squares(long a, long b);
// caculate a and b square sum
int main() {
  const long MIN = -10000000L;
  const long MAX = +10000000L;
  long start, stop;
  double answer;
  printf(
      "\nThis program computer the sum of square"
      "balabla"
      "\nEnter 0 for both limits to quit.\n"
      "lower limit: ");
  start = get_long();
  printf("upper limit: ");
  stop = get_long();
  while (start != 0 || stop != 0) {
    if (bad_limits(start, stop, MIN, MAX))
      printf("\nPlease try again.\n");
    else {
      answer = sum_squares(start, stop);
      printf("\nThe answer from %ld to %ld is %g.\n", start, stop, answer);
    }
    printf("\nEnter the limits(0 for both to quit):\n");
    printf("lower limit: ");
    start = get_long();
    printf("upper limit: ");
    stop = get_long();
  }
  printf("\nDone.\n");
}
double sum_squares(long a, long b) {
  double total = 0;
  long i;
  for (i = a; i <= b; i++)
    total += (double)(i * i);  // original// (double)i*(double)i;
  return total;
}

bool bad_limits(long begin, long end, long low, long high) {
  bool not_good = false;
  if (begin > end) {
    printf("%ld isn't smaller than %ld.\n", begin, end);
    not_good = true;
  }
  if (begin < low || end < low) {
    printf("\nValues must be %ld or greater.\n", low);
    not_good = true;
  }
  if (begin > high || end > high) {
    printf("\nValues must be %ld or less.\n", high);
    not_good = true;
  }
  return not_good;
}
long get_long(void) {
  long input;
  char ch;
  while (scanf("%ld", &input) != 1) {
    while ((ch = getchar()) != '\n') putchar(ch);
    printf(
        " is not an integer.\nPlease enter an"
        "integer value:");
  }
  return input;
}
