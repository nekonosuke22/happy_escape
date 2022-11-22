#pragma once
#include "../Common.hpp"
#include "Item/Item.hpp"

class Game : public App::Scene
{

private:
	const Texture test{ U"data/image/test.png" };


	Item ticket{ Emoji{ U"🎫" }, Circle{ 200, 300, 80 }};

public:
	Game(const InitData& init);
	void update() override;
	void draw() const override;

	void item_update();
};
