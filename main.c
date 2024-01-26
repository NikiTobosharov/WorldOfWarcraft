#include <stdio.h>
#include <stdlib.h>

#include "Hero.h"

int main() {
  char name[MAX_HERO_NAME_SIZE + 1];
  int maxMana = 0;
  int baseManaRegenRate = 0;
  int manaRegenModifier = 0;

  //Archmage
  scanf("%s %d %d %d", name, &maxMana, &baseManaRegenRate, &manaRegenModifier);

  //Death Knight
  scanf("%s %d %d", name, &maxMana, &baseManaRegenRate);

  //Draw Ranger
  scanf("%s %d %d", name, &maxMana, &baseManaRegenRate);

  int commandsCount = 0;
  int currAction = 0;
  scanf("%d", &commandsCount);

  for (int i = 0; i < commandsCount; ++i) {
    scanf("%d", &currAction);
  }

  return EXIT_SUCCESS;
}
