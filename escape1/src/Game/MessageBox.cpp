#include "MessageBox.hpp"

void MessageBox::setText(const String& text)
{
	m_text = text;
	m_stopwatch.restart();
}

void MessageBox::draw() const
{
	Rect(20, 440, WINDOW_WIDTH - 40,WINDOW_HEIGHT - 440 - 20).draw(ColorF{ 0.5, 0.5, 0.5 });
	RoundRect(30, 450, WINDOW_WIDTH - 60, WINDOW_HEIGHT - 450 - 30, 10).draw();

	const int32 count = (m_stopwatch.ms() / 100); // 100msにつき1文字
	m_font(m_text.substr(0, count)).draw(40, 460, ColorF{ 0.1, 0.1, 0.1 });
	m_font(count).draw(40, 470, ColorF{ 0.1, 0.1, 0.1 });
}
