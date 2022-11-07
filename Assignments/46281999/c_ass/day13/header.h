#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_RANGE 1023
#define MAX_LENGTH 30
#define DELIMITER ":"

int validateInputs(char *input);
char *displayServerPort(char *input);