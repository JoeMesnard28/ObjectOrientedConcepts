#include "WhisperStrategy.h"

WhisperStrategy::WhisperStrategy()
{
}

bool WhisperStrategy::SpeakWithStrategy(std::string& speech)
{
	std::transform(speech.begin(), speech.end(), speech.begin(), ::tolower);
	return true;
}
