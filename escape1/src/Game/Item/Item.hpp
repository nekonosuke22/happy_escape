#pragma once
#include "../../Common.hpp"

class Item
{

private:
	Texture m_texture;
	Circle m_circle;
	bool m_visible;

public:
	Item(const Emoji& emoji, const Circle& circle, bool visible);

	void update();
	void updateCursorStyle() const;
	bool clicked() const;
	bool getItem() const;



	void draw() const;

	// Visibility の変更
	void setVisibility(bool visible);


};
