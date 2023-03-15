#ifndef GAME_H
#define GAME_H

void town();

void show_statistic(std::string Hero_class, int hero_lvl, int hero_EXP,int hero_EXP_MAX, int hero_HP, int hero_HP_MAX, int hero_BUI,int hero_STR, int hero_GOLD, int& hero_MIND, int& hero_MAXD);

void lvl_system(int& hero_lvl, int& hero_EXP, int& hero_EXP_MAX, int& hero_STR, int& hero_BUI, int& hero_HP_MAX, int& hero_MIN_DMG_p, int& hero_MAX_DMG_p, int& hero_MIN_DMG, int& hero_MAX_DMG);

bool check_gold_tavern(int& hero_GOLD);
#endif
