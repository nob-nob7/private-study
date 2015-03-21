//
// アプリ雛形
//

#include "lib/defines.hpp"
#include "lib/appEnv.hpp"
#include "lib/random.hpp"
#include "headers\enums.hpp"
#include "headers\Square.hpp"


// 
// メインプログラム
// 
int main() {
  AppEnv env(Window::WIDTH, Window::HEIGHT, false, false);

  Vec2f mouse_pos = env.mousePosition();
  Random random;
  Square square;
  while (env.isOpen()) {
    env.setupDraw();

    if (env.isPushKey('A')) {
      // マウス位置を記録
      mouse_pos = env.mousePosition();
    }
    if (env.isPushKey('S')) {
      // 記録したマウス位置へ変更
      env.mousePosition(mouse_pos);
    }
	square.Pos_Change(env, random);
		
    env.update();
  }
}
