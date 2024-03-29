#pragma once

#include "ofMain.h"
#include "PingPong.h"
#include "ColorPool.h"

class POP
{
public:

	POP();

	void setup(unsigned particleCount);

	void update();

	void draw();

	void loadTextureData(unsigned idx, float* data, unsigned x = 0, unsigned y = 0, unsigned width = 0, unsigned height = 0);

	void zeroTextureData(unsigned idx, unsigned x = 0, unsigned y = 0, unsigned width = 0, unsigned height = 0);

	void updateKinectData(ofTexture& tex);

	void updateColorPool(ColorPool& pool);
	
	void loadShaders();

	ofFbo::Settings getFboSettings(unsigned numBuffers = 1) const;

	enum DataTextureIndex
	{
		POSITION,
		VELOCITY,
		COLOR,
		STATE,
		NUM_TEXTURES
	};

private:

	//	Geometry

	ofVboMesh popMesh;
	
	ofVboMesh quadMesh;

	//	Colors

	ColorPool colorPool;

	//	Simulation & shading

	unsigned textureLocation;

	unsigned width, height;

	ofShader updateShader;
	
	ofShader drawShader;

	PingPong pp;

	//	Interaction data

	ofTexture kTex;
};