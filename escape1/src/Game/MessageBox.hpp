#pragma once
#include "../Common.hpp"

class MessageBox
{
public:
	void setText(const String& text);
	void draw() const;

private:
	Font m_font = Font{ 25 };
	String m_text;
	Stopwatch m_stopwatch;
};

