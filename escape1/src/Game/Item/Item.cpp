#include "Item.hpp"

void Item::update()
{
	if (m_circle.mouseOver())
	{
		Cursor::RequestStyle(CursorStyle::Hand);
	}
}

bool Item::clicked() const
{
	return m_circle.leftClicked();
}

void Item::draw() const
{
	m_circle.draw(ColorF{ 1.0, 0.5, 0.0, 0.2 });
	m_texture.drawAt(m_circle.center);

}
