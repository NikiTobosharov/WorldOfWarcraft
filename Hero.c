#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#include "Hero.h"

void heroBaseInit(Hero *hero, const char *inputName, int inputMaxMana, int inputManaRegenRate)
{
    hero = malloc(sizeof(Hero));

    if (NULL == hero)
    {
        printf("Memory allocation failed. Exiting the program.\n");
        exit(1);
    }
    
}

void heroSpellsInit(Hero *hero, const char *basicSpellName, int basicSpellManaCost, const char *ultimateSpellName, int ultimateSpellManaCost)
{
    Spell *newSpell = malloc(sizeof(Spell));

}