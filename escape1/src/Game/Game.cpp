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

		System::Exit();
	}
	if (KeySpace.pressed()) {

		changeScene(State::Title);
	}
	item_update();
}




void Game::draw() const
{
	if (screen_num == 0) {
		screen_draw(room[0]);
	}
	else {
		screen_draw(test2);
	}
	FontAsset(U"Test")(U"ゲーム画面").drawAt(Vec2{ 100, 50 }, Palette::Red);
	FontAsset(U"Test")(U"Spaceでタイトル\nXで終了").drawAt(Vec2{ 100, 80 }, Palette::Red);

	messageBox.draw();
	
	ticket.draw();
	door.draw();

	debugFont(screen_num).draw(40, 150, ColorF{ 0.1, 0.1, 0.1 });
}

void Game::item_update()
{
	ticket.update();
	if (ticket.clicked()) {
		messageBox.setText(U"ticket");

		ticket.setVisibility(false);
	}
	door.update();
	if (door.clicked()) {
		messageBox.setText(U"door");
		if (ticket.getItem())
		{
			changeScene(State::Clear);
		}
		else if (screen_num == 0)
		{
			screen_num = 1;
		}
		else
		{
			screen_num = 0;
		}
	}

}

void Game::screen_draw(Texture screen) const
{
	Rect{ 0, 0, WINDOW_WIDTH, WINDOW_HEIGHT }(screen).draw();
}
