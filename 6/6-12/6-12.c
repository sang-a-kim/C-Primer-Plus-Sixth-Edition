#include <stdio.h>

int main()
{
  /* 
    Simulation of a Moving Object

    - Speed = 1.0 m/s
    - dt = 1.0 s
    - Distance traveled during dt = Speed * dt

    - Step 1 : 1.0 m/s * 1.0 s = 1.0 m, dist = 1.0m
    - Step 2: 1.0 m/s * 1.0 s = 1.0 m, dist = 1.0m + 1.0m = 2.0m
    - Step 3: 1.0 m/s * 1.0 s = 1.0 m, dist = 2.0m + 1.0m = 3.0m
   */

  //   for (double dt = 1, speed = 1, time = 1; dt <= 10; dt += speed * 1, time++)
  //   printf("Elasped time = %fs, Distance = %fm\n", time, dt);

  // const double speed = 1.0;
  // const unsigned repeat_max = 10;

  // double dt = 1.0; // Distance time
  // double time = 0.0; // Elapsed time
  // double dist = 0.0; // Distance

  // for(unsigned i = 0; i < repeat_max; ++i){
  //   dist += speed * dt;
  //   time += dt;

  //   printf("Elapsed time = %.10fs, Distance = %.10fm\n", time, dist);
  // }

  /* 
    Zeno's Paradox

    - Step 1 : 1.0 * 1.0 = 1.0, 1.0
    - Step 2 : 1.0 + 0.5 = 0.5, 1.0 + 0.5 = 1.5
    - Step 3 : 1.0 + 0.25 = 0.25, 1.5 + 0.25 = 1.75
   */

  // const double speed = 1.0;
  // const unsigned repeat_max = 100;

  // double dt = 1.0; // Distance time
  // double time = 0.0; // Elapsed time
  // double dist = 0.0; // Distance

  // for(unsigned i = 0; i < repeat_max; ++i, dt *= 0.5){
  //   dist += speed * dt;
  //   time += dt;

  //   printf("Elapsed time = %.10fs, Distance = %.10fm\n", time, dist);
  // }

  const double speed = 1.0;
  const unsigned repeat_max = 50;

  double time = 0.0; // Elasped time
  double dist_arch = 0.0;
  double dist_turtle = 1.0;
  double speed_arch = 10.0;
  double speed_turtle = 0.001;
  double dt = 0.01; // Distance time
  unsigned i;

  printf("Time = %fs, dt = %fs, Archilleus = %fm, turtle = %fm\n", time, dt, dist_arch, dist_turtle);

  for(int i = 0; i < repeat_max; i++){
    dist_arch += dt * speed_arch;
    dist_turtle += dt * speed_turtle;
    time += dt;

    printf("Time = %fs, dt = %fs, Archilleus = %fm, turtle = %fm\n", time, dt, dist_arch, dist_turtle);

    dt *= 0.5;
  }

}