#ifndef PLOT_H_INCLUDED
#define PLOT_H_INCLUDED
#include <iostream>
#include <vector>
#include "chars.h"
#include "story.h"


class Plot
{
public:
	static void start();
private:
	static void level_up (int lev);
	static void fighttest();
	static void begin();
	static void first_part();
	static void part2a();
	static void part2b();
	static void part3a();
	static void part3c();
	static void part3d();
	static void part4a();
	static void part4b();
	static void part5();
	static void finale();
	static std::vector<Character*> allies;
	static int l;
protected:
	static Character* Hero;
};

class Checks : public Plot
{
public:
	static bool int_check();
	static bool char_check();
};
#endif