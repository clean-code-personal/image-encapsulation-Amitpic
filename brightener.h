#pragma once
#include "image.h"

class ImageBrightener {
private:
	std::unique_ptr<Image> m_inputImage;
	int BrightenWholeImage();
public:
	ImageBrightener(std::unique_ptr<Image> inputImage);
	
	int BrightenWholeImageWithInRange();
};
