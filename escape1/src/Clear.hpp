#pragma once
#include "Common.hpp"

class Clear : public App::Scene
{
public:
	Clear(const InitData& init);
	void update() override;
	void draw() const override;

private:

};

