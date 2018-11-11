#ifndef YELLSTRATEGY_H
#define YELLSTRATEGY_H

#include "ISpeakingStrategy.h"
#include <algorithm>

class YellStrategy : public ISpeakingStrategy
{
public:

	YellStrategy();
	virtual ~YellStrategy() {}

	// ISpeakingStrategy implementation
	virtual bool SpeakWithStrategy(std::string& speech) override;
};

typedef  std::shared_ptr<YellStrategy> YellStrategyPtr_t;

#endif	// YELLSTRATEGY_H