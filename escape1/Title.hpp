#pragma once
#include "Common.hpp"

class Title : public App::Scene
{
public:
	Title(const InitData& init);
	void update() override;
	void draw() const override;

private:

	Rect m_startButton{ Arg::center = Scene::Center(), 300, 60 };
	Transition m_startTransition{ 0.4s, 0.2s };
};

