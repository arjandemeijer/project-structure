#include <zephyr/kernel.h>
#include <stdio.h>
#include "device.hpp"

int main(void)
{
  // answer to the ultimate question of life the universe and everything
  int dv = Parameters::Device();

  printf("The answer: %d\n", dv);

  return 0;
}
