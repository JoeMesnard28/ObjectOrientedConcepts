#ifndef WHISPERSTRATEGY_H
#define WHISPERSTRATEGY_H

#include "ISpeakingStrategy.h"
#include <algorithm>

class WhisperStrategy : public ISpeakingStrategy
{
public:

	WhisperStrategy();
	virtual ~WhisperStrategy(){}

	// ISpeakingStrategy implementation
	virtual bool SpeakWithStrategy(std::string& speech) override;
};

typedef std::shared_ptr<WhisperStrategy> WhisperStrategyPtr_t;

#endif	// WHISPERSTRATEGY_H