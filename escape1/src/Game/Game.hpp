#pragma once
#include "../Common.hpp"
#include "MessageBox.hpp"
#include "Item/Item.hpp"


class Game : public App::Scene
{

private:

	MessageBox messageBox;

	const Texture test{ U"data/image/test.png" };
	const Texture test2{ U"data/image/test2.png" };


	Item ticket{ Emoji{ U"🎫" }, Circle{ 200, 300, 80 }, true};
	Item door{ Emoji{ U"🚪" }, Circle{ 400, 300, 80 }, true };

	Font debugFont{ 50 };

public:
	Game(const InitData& init);
	void update() override;


	void draw() const override;

	void item_update();
	void screen_draw(Texture) const;


	int screen_num;
};
