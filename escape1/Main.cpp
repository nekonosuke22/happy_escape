#include "Common.hpp"
#include "Title.hpp"

void Main()
{
	App manager;
	manager.add<Title>(State::Title);
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
