#include "MessageBox.hpp"

void MessageBox::setText(const String& text)
{
	m_text = text;
}

void MessageBox::draw() const
{
	Rect(20, 400, 400, 140).draw(ColorF{ 0.5, 0.5, 0.5 });
	RoundRect(30, 380, 380, 120, 10).draw();

	m_font(m_text).draw(40, 400, ColorF{ 0.1, 0.1, 0.1 });
}
