#pragma once
#include "image.h"

class ImageBrightener {
private:
	std::shared_ptr<Image> m_inputImage;
	int BrightenWholeImage();
public:
	ImageBrightener(std::shared_ptr<Image> inputImage);
	
	int BrightenWholeImageWithInRange();
};
