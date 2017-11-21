#ifndef __LHSANIMATIONRETURN_H__
#define __LHSANIMATIONRETURN_H__

#include "cocos2d.h"

/********
fps��������
********/
class LHSAnimationReturn : public cocos2d::Ref
{
	friend class LHSAnimation;
public:
	LHSAnimationReturn();
	~LHSAnimationReturn();

	static LHSAnimationReturn * create();

	//��֡��
	int GetTotalFrameNum(){return m_TotalFrameNum;}

	//��ʱ��
	float GetTotalTime(){return m_TotalTime;}

	//֡��
	float GetFps(){return m_Fps;}

private:
	int m_TotalFrameNum;
	float m_TotalTime;
	float m_Fps;
};



#endif  // __LHSANIMATIONRETURN_H__