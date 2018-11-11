#ifndef ISPEAKINGSTRATEGY_H
#define ISPEAKINGSTRATEGY_H

#include <string>

class ISpeakingStrategy
{
public:
	virtual bool SpeakWithStrategy(std::string& speech) = 0;
};

typedef std::shared_ptr<ISpeakingStrategy> ISpeakingStrategyPtr_t;


#endif // ISPEAKINGSTRATEGY_H