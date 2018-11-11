#ifndef ISPEAKINGSTRATEGY_H
#define ISPEAKINGSTRATEGY_H

#include <string>

class ISpeakingStrategy
{
public:
	virtual bool SpeakWithStrategy(std::string& speech) = 0;
};


#endif // ISPEAKINGSTRATEGY_H