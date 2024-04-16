#include <iostream>
#include "brightener.h"

int main() {
	auto image = std::make_unique<Image>(512, 512);
	std::cout << "Brightening a 512 x 512 image\n";
	ImageBrightener brightener(std::move(image));
	int attenuatedCount = brightener.BrightenWholeImageWithInRange();
	std::cout << "Attenuated " << attenuatedCount << " pixels\n";
	// Error... cannot access image here!
	std::cout << "... in an image of: " << image->m_rows << " x " << image->m_columns << "\n";

	if (attenuatedCount == -1)
	{
		std::cout << "Not a valid image... did nothing\n";
		return 1;
	}
	return 0;	
}
