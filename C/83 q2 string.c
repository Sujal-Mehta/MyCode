
    #include <stdio.h>
    char* strcpy(char* destination ,   char* source)
    {
            if (destination == NULL)
        {
            return NULL;
        }
        char *ptr = destination  ;
        while (*source != '\0') 
        {
            *destination = *source ;
            destination++;
            source++;
        }
        *destination = '\0';

        return ptr;
    }

    int main ()
    {
        char source[] = "Sujal Mehta";
        char destination[100] ;
        
        printf("%s\n", strcpy(destination , source));
        return 0;
    }

// Preference ko lagi


// #include <stdio.h>
 
// // Function to implement `strcpy()` function
// char* strcpy(char* destination, const char* source)
// {
//     // return if no memory is allocated to the destination
//     if (destination == NULL) {
//         return NULL;
//     }
 
//     // take a pointer pointing to the beginning of the destination string
//     char *ptr = destination;
 
//     // copy the C-string pointed by source into the array
//     // pointed by destination
//     while (*source != '\0')
//     {
//         *destination = *source;
//         destination++;
//         source++;
//     }
 
//     // include the terminating null character
//     *destination = '\0';
 
//     // the destination is returned by standard `strcpy()`
//     return ptr;
// }
 
// // Implement `strcpy()` function in C
// int main(void)
// {
//     char source[] = "Sujal Mehta";
//     char destination[25];
 
//     printf("%s\n", strcpy(destination, source));
 
//     return 0;
// }





















