#pragma once 
#include "../lib/random.hpp"
#include "../lib/appEnv.hpp"

class Square
{
private:
		float x;
		float y;
		float width;
		float height;

public:
	Square();
	void Pos_Change(AppEnv& env, Random& random);

};