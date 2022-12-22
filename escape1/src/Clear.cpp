#include "Common.hpp"
#include "Clear.hpp"

Clear::Clear(const InitData& init)
	: IScene{ init } {
	Scene::SetBackground(ColorF{ 0.2, 0.8, 0.4 });
}

void Clear::update()
{
	if (KeyEnter.pressed()) {

		changeScene(State::Title);
	}
}

void Clear::draw() const
{
	FontAsset(U"Menu")(U"クリアだってさ").drawAt(Scene::Center(), Palette::Black);
}
