#include "Title.hpp"

Title::Title(const InitData& init)
	: IScene{ init } {
	Scene::SetBackground(ColorF{ 0.2, 0.8, 0.4 });

	
}

void Title::update()
{
	m_startTransition.update(m_startButton.mouseOver());

	if (m_startButton.mouseOver())
	{
		Cursor::RequestStyle(CursorStyle::Hand);
	}
}

void Title::draw() const
{
	static const Font font{ 50 };
	m_startButton.draw(ColorF{ 1.0, m_startTransition.value() }).drawFrame(2);

	font(U"This is title").draw(20, 20);
}
