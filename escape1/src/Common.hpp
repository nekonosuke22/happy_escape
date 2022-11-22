#pragma once
#include <Siv3D.hpp>


#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600


enum class State
{
	Title,
	Game,
};

using App = SceneManager<State>;

