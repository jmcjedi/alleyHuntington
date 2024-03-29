#pragma once

#include "ofMain.h"

class ColorPool {

public:

	ColorPool();

	void clear();

	void addColor(ofColor color);

	void addColors(vector<ofColor> colors);

	ofColor getColor(int idx);

	int numColors();

private:

	vector<ofColor> pool;
};
