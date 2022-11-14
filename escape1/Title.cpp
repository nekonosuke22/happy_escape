#include "Title.hpp"

Title::Title(const InitData& init)
	: IScene{ init } {
	Scene::SetBackground(ColorF{ 0.2, 0.8, 0.4 });

	
}

void Title::update()
{
	m_startTransition.update(m_startButton.mouseOver());
	m_exitTransition.update(m_exitButton.mouseOver());

	if (m_startButton.mouseOver() || m_exitButton.mouseOver())
	{
		Cursor::RequestStyle(CursorStyle::Hand);
	}

	if (m_startButton.leftClicked())
	{
		changeScene(State::Game);
	}

	if (m_exitButton.leftClicked())
	{
		System::Exit();
	}
}


void Title::draw() const
{

	FontAsset(U"TitleFont")(U"HappyEscape")
		.drawAt(Scene::Center().movedBy(0.0, -(WINDOW_HEIGHT/3)), Palette::Beige);

	m_startButton.draw(ColorF{ 1.0, m_startTransition.value() }).drawFrame(2);
	m_exitButton.draw(ColorF{ 1.0, m_exitTransition.value() }).drawFrame(2);

	FontAsset(U"Menu")(U"はじめる").drawAt(m_startButton.center(), Palette::Black);
	FontAsset(U"Menu")(U"おわる").drawAt(m_exitButton.center(), Palette::Black);

}
