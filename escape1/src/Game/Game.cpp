#include "Game.hpp"


Game::Game(const InitData& init)
	: IScene{ init }
{
	Scene::SetBackground(ColorF{ 0.2, 0.8, 0.4 });
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
	Rect{ 0, 0, WINDOW_WIDTH, WINDOW_HEIGHT }(test).draw();
	FontAsset(U"Test")(U"ゲーム画面").drawAt(Vec2{ 100, 50 }, Palette::Red);
	FontAsset(U"Test")(U"Xボタンでタイトル").drawAt(Vec2{ 100, 80 }, Palette::Red);

	ticket.draw();
}

void Game::item_update()
{
	ticket.update();
}
