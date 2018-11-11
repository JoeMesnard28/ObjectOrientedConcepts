#ifndef SPEAKER_H
#define SPEAKER_H

#include "ISpeakingStrategy.h"

class Speaker
{
public:
	
	Speaker();
	~Speaker() {}

	bool SetSpeakingStrategy(ISpeakingStrategy* speakingStrategy);
	bool Speak(std::string& speech);

private:
	ISpeakingStrategy* m_SpeakingStrategy;

};


#endif // SPEAKER_H