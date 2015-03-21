#include "Square.hpp"
#include "enums.hpp"


Square::Square()
{
	Random random;
	x = random.fromFirstToLast(-WIDTH / 2 + 100, WIDTH / 2 - 100);
	y = random.fromFirstToLast(-HEIGHT / 2 + 100, HEIGHT / 2 - 100);
	width = 100;
    height = 100;
}


void Square::Pos_Change(AppEnv& env, Random& random)
{
	Vec2f pos = env.mousePosition();
	if (x <= pos.x() && pos.x() <= x + width && y <= pos.y() && pos.y() <= y + height){

		if (env.isPushButton(Mouse::LEFT)){
			x = random.fromFirstToLast(-WIDTH / 2 + 100, WIDTH / 2 - 100);
			y = random.fromFirstToLast(-HEIGHT / 2 + 100, HEIGHT / 2 - 100);
		}
		drawFillBox(x, y, width, height, Color(1, 0, 0));
	}

	else { drawFillBox(x, y, width, height, Color(1, 1, 1)); }
}