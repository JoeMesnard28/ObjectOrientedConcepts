#include "YellStrategy.h"

YellStrategy::YellStrategy()
{
}

bool YellStrategy::SpeakWithStrategy(std::string& speech)
{
	std::transform(speech.begin(), speech.end(), speech.begin(), ::toupper);
	return true;
}
