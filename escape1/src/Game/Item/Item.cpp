#include "Item.hpp"

Item::Item(const Emoji& emoji, const Circle& circle, bool visible)
	: m_texture{ emoji }
	, m_circle{ circle }
	, m_visible{ visible }
{
}

void Item::update()
{
	updateCursorStyle();
}

void Item::updateCursorStyle() const
{
	if (!m_visible)
	{
		return;
	}
	if (m_circle.mouseOver())
	{
		Cursor::RequestStyle(CursorStyle::Hand);
	}
}

bool Item::clicked() const
{
	if (!m_visible)
	{
		return false;
	}
 	return m_circle.leftClicked();
}

bool Item::getItem() const
{
	if (!m_visible) {
		return true;
	}
	else
	{
		return false;
	}
}

void Item::draw() const
{
	if (!m_visible)
	{
		return;
	}
	m_circle.draw(ColorF{ 1.0, 0.5, 0.0, 0.2 });
	m_texture.drawAt(m_circle.center);
}

void Item::setVisibility(bool visible)
{
	m_visible = visible;
}
