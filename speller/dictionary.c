/**
 * dictionary.c
 *
 * Computer Science 50
 * Problem Set 5
 *
 * Implements a dictionary's functionality.
 */

#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "dictionary.h"


// size of hashtable
#define SIZE 1000000

// create nodes for linked list
typedef struct node
{
    char word[LENGTH + 1];
    struct node* next;
}
node;

// create hashtable
node* hashtable[SIZE] = {NULL};

// create hash function
int hash(const char* word)
{
    int hash = 0;
    int n;
    for (int i = 0; word[i] != '\0'; i++)
    {
        // alphabet case
        if (isalpha(word[i]))
            n = word[i] - 'a' + 1;
        
        // comma case
        else
            n = 27;
            
        hash = ((hash << 3) + n) % SIZE;
    }
    return hash;    
}

// create global variable to count size
int dictionarySize = 0;

/**
 * Loads dictionary into memory.  Returns true if successful else false.
 */
bool load(const char* dictionary)
{
    
    
    // return true if successful 
    return true;
}

/**
 * Returns true if word is in dictionary else false.
 */
bool check(const char* word)
{
    

    return false;
}

unsigned int size(void)
{
    
        return 0;
}


bool unload(void)
{
  
    return true;
}