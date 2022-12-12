#include "MessageBox.hpp"

void MessageBox::setText(const String& text)
{
	m_text = text;
}

void MessageBox::draw() const
{
	Rect(20, 440, WINDOW_WIDTH - 40,WINDOW_HEIGHT - 440 - 20).draw(ColorF{ 0.5, 0.5, 0.5 });
	RoundRect(30, 450, WINDOW_WIDTH - 60, WINDOW_HEIGHT - 450 - 30, 10).draw();

	m_font(m_text).draw(40, 460, ColorF{ 0.1, 0.1, 0.1 });
}
