#ifndef SPEAKER_H
#define SPEAKER_H

#include "ISpeakingStrategy.h"

class Speaker
{
public:
	
	Speaker();
	~Speaker() {}

	bool SetSpeakingStrategy(ISpeakingStrategyPtr_t speakingStrategy);
	bool Speak(std::string& speech);

private:
	ISpeakingStrategyPtr_t m_SpeakingStrategy;

};

typedef std::shared_ptr<Speaker> SpeakerPtr_t;


#endif // SPEAKER_H