#include "Game.hpp"


Game::Game(const InitData& init)
	: IScene{ init }
{
	Scene::SetBackground(ColorF{ 0.2, 0.8, 0.4 });
	screen_num = 0;
}

void Game::update()
{
	if (KeyX.pressed()) {
		changeScene(State::Title);
	}
	item_update();
}




void Game::draw() const
{
	if (screen_num == 0) {
		screen_draw(test);
	}
	else {
		screen_draw(test2);
	}
	FontAsset(U"Test")(U"ゲーム画面").drawAt(Vec2{ 100, 50 }, Palette::Red);
	FontAsset(U"Test")(U"Xボタンでタイトル").drawAt(Vec2{ 100, 80 }, Palette::Red);

	ticket.draw();
	door.draw();

	font(screen_num).draw(40, 450, ColorF{ 0.1, 0.1, 0.1 });
	font(text).draw(40, 400, ColorF{ 0.1, 0.1, 0.1 });
}

void Game::item_update()
{
	ticket.update();
	if (ticket.clicked()) {
		text = U"チケットだよ～";
		ticket.setVisibility(false);
	}
	door.update();
	if (door.clicked()) {
		text = U"入ってまーす";

		if (screen_num == 0) {
			screen_num = 1;
		}
		else {
			screen_num = 0;
		}
	}

}

void Game::screen_draw(Texture screen) const
{
	Rect{ 0, 0, WINDOW_WIDTH, WINDOW_HEIGHT }(screen).draw();
}
