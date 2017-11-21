#ifndef __LHSANIMATION_H__
#define __LHSANIMATION_H__

#include "cocos2d.h"
#include "LHSAnimationReturn.h"

/**
FPS����
**/

class LHSAnimation
{
public:
	LHSAnimation();
	~LHSAnimation();
	
	//����: Frameǰ׺   ֡��   �Ƿ��ԭʼ֡  ��������ָ��
	static cocos2d::Animate* createFrameAnimationWithIdOrder(const char * prefixionName, float fps = 0.0666666666666667f, bool isOriginalFrame = true, LHSAnimationReturn * out_data = nullptr, int startID = 1);
};



#endif  // __LHSANIMATION_H__