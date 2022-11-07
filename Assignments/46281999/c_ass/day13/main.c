#include "header.h"
int main(int argc, char *argv[])
{

    int i, value;

    char *serverNames[MAX_LENGTH];
    char *name = NULL;

    if (argc < 3)
    {
        printf("Less number of arguments! Pass atleast 3 arguments");
        exit(EXIT_FAILURE);
    }

    for (i = 1; i < argc; i++)
    {

        value = validateInputs(argv[i]);
        if (value == 1)
        {
            exit(EXIT_FAILURE);
        }
        name = displayServerPort(argv[i]);
        serverNames[i] = name;
    }

    // are you going to do something with serverNames?
    // don't forget to loop through and `free(serverNames[i])`
    // when you're done

    return 0;
}