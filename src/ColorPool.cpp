#include "ColorPool.h"

//--------------------------------------------------------------
ColorPool::ColorPool() {}

//--------------------------------------------------------------
void ColorPool::clear() {
	pool.clear();
}

//--------------------------------------------------------------
void ColorPool::addColor(ofColor color) {
	pool.push_back(color);
}

//--------------------------------------------------------------
void ColorPool::addColors(vector<ofColor> colors) {
	pool.clear();
	pool = colors;
}

//--------------------------------------------------------------
ofColor ColorPool::getColor(int idx) {
	if (pool.size() < 1) return ofColor(0);
	else return pool.at(idx % pool.size());
}

//--------------------------------------------------------------
int ColorPool::numColors() {
	return (int) pool.size();
}