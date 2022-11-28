#pragma once
#include <Siv3D.hpp>

class Item
{

private:
	Texture m_texture;
	Circle m_circle;

public:
	Item(const Emoji& emoji, const Circle& circle)
		: m_texture{ emoji }
		, m_circle{ circle }
	{

	}

	void update();
	bool clicked() const;
	void draw() const;

};
