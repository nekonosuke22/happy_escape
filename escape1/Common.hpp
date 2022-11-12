#pragma once
#include <Siv3D.hpp>

enum class State
{
	Title,
};

using App = SceneManager<State>;
