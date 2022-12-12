#include "MessageBox.hpp"

void MessageBox::setText(const String& text)
{
	m_text = text;
	m_stopwatch.restart();
}

void MessageBox::draw() const
{
	RoundRect(30, 450, WINDOW_WIDTH - 60, WINDOW_HEIGHT - 480, 10)
		.draw(ColorF{0.5, 0.5, 0.5, 0.5})
		.drawFrame(0, 2, ColorF{0.2, 0.2, 0.2});

	const int32 count = (m_stopwatch.ms() / 100); // 100msにつき1文字
	m_font(m_text.substr(0, count)).draw(40, 460, ColorF{ 0, 0, 0 });
	m_font(count).draw(40, 400, ColorF{ 0.1, 0.1, 0.1 });
}
