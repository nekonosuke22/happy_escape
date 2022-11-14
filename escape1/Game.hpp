#pragma once
#include "Common.hpp"

class Game : public App::Scene
{
public:
	Game(const InitData& init);
	void update() override;
	void draw() const override;

private:
	const Texture test{ U"data/image/test.png" };
	
	
};

