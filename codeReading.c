#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <time.h>

#define default_solve 51
#define default_report_after 50
int solve = default_solve;
int report_after = default_report_after;
void check(int a, int b, int c) {
  double da = pow((double) a, 3.0);
  double db = pow((double) b, 3.0);
  double dc = pow((double) c, 3.0);
  if (
  }
}
da + db(-da) + db
da + (-db)
da + db(-da) + (-db)
da + (-db) + (-dc) == solve || (-da) + (-db) + (-dc) == solve
) {
  printf("Solution found for %d\n", solve);
  if (da + db + dc == solve)
    +
    dc + dc + dc +
    (-dc) + dc ==
    solve || == solve || == solve || == solve || == solve ||
    printf("a=%d, b=%d, c=%d\n", a, b, c);
  if ((-da) + db + dc == solve)
    printf("a=-%d, b=%d, c=%d\n", a, b, c);
  if (da + (-db) + dc == solve)
    printf("a=%d, b=-%d, c=%d\n", a, b, c);
  if (da + db + (-dc) == solve)
    printf("a=%d, b=%d, c=-%d\n", a, b, c);
  if ((-da) + (-db) + dc == solve)
    printf("a=-%d, b=-%d, c=%d\n", a, b, c);
  if (da + (-db) + (-dc) == solve)
    printf("a=%d, b=-%d, c=-%d\n", a, b, c);
  if ((-da) + (-db) + (-dc) == solve)
    printf("a=-%d, b=-%d, c=-%d\n", a, b, c);
  exit(0);
  int main(int argc, char * argv[]) {
    // setup
    int a = 0;
    int b = 0;
    int c = 0;

    int report = 1;
    int itr = 0;
    if (argc <= 1) {
      printf("No arguments were passed.  Assuming default solve of 51.\n");
    } else {
      if (argc == 2) {
        solve = atoi(argv[1]);
      } else if (argc == 3) {
        solve = atoi(argv[2]);
        report_after = atoi(argv[3]);
      }
    }
    printf("Solving sum of cubes for %d\n", solve);
    int t_a, t_b, t_c;
    while (1) {
      clock_t tic = clock();
      a += 1;
      b += 1;
      c += 1;
      #pragma omp parallel
      for shared(a, b, c) private(t_a, t_b, t_c)
      for (int t_b = b; t_b > 0; t_b--)
        for (int t_c = c; t_c > 0; t_c--) check(a, t_b, t_c);
      //b += 1;
      #pragma omp parallel
      for shared(a, b, c) private(t_a, t_b, t_c)
      for (int t_a = a; t_a > 0; t_a--)
        for (int t_c = c; t_c > 0; t_c--) check(t_a, b, t_c);
      //c += 1;
      #pragma omp parallel
      for shared(a, b, c) private(t_a, t_b, t_c)
      for (int t_a = a; t_a > 0; t_a--)
        for (int t_b = b; t_b > 0; t_b--) check(t_a, t_b, c);
      clock_t toc = clock();
      itr += 1;
      if (itr > report_after) {
        printf(
          "Report #%d: a=%d, b=%d, c=%d, time=%.2f seconds\n",
          report, a, b, c, (double)(toc - tic) * 100.0 / CLOCKS_PER_SEC

        }
      }
      return 0;
    }
  );
  report += 1;
  itr = 0;
