#pragma once
#include <iostream>

class Item
{
public:
	Item(const Emoji& emoji, const Circle& circle)
		: m_texture{ emoji }
		, m_circle{ circle }
	{

	}

	void update();
	bool clicked() const;
	void draw() const;

private:
	Texture m_texture;
	Circle m_circle;
};
