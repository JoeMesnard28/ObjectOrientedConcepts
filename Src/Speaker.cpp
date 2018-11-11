#include "Speaker.h"


Speaker::Speaker():
	m_SpeakingStrategy(NULL)
{
}

bool Speaker::SetSpeakingStrategy(ISpeakingStrategyPtr_t speakingStrategy)
{
	m_SpeakingStrategy = speakingStrategy;
	return true;
}

bool Speaker::Speak(std::string& speech)
{

	if (!m_SpeakingStrategy)
	{
		return false;
	}

	m_SpeakingStrategy->SpeakWithStrategy(speech);
	return true;
}
