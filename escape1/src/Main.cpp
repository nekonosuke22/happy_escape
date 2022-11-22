#include "Common.hpp"
#include "Title/Title.hpp"
#include "Game/Game.hpp"

void Main()
{
	Window::Resize(WINDOW_WIDTH, WINDOW_HEIGHT);

	// アセットの登録
	FontAsset::Register(U"Test", 20, Typeface::Regular);
	FontAsset::Register(U"TitleFont", 60, Typeface::Regular, FontStyle::BoldItalic);
	FontAsset::Register(U"Menu", 40, Typeface::Medium);

	App manager;
	manager.add<Title>(State::Title);
	manager.add<Game>(State::Game);

	// ゲームシーンから開始したい場合はこのコメントを外す
	//manager.init(State::Game);

	while (System::Update())
	{
		if (!manager.update())
		{
			break;
		}
	}
}
