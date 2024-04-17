#include <iostream>
#include "brightener.h"

int main() {
	auto image = std::make_shared<Image>(512, 512);
	
	ImageBrightener brightener(image);
	int attenuatedCount = brightener.BrightenWholeImageWithInRange();
	std::cout << "Brightening a 512 x 512 image\n";
	std::cout << "... in an image of: " << image->m_rows << " x " << image->m_columns << "\n";
	std::cout << "Attenuated " << attenuatedCount << " pixels\n";
	if (attenuatedCount == -1)
	{
		std::cout << "Not a valid image... did nothing\n";
		return 1;
	}
	return 0;	
}
