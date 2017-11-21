#ifndef __LHSSchedulerActionManager_H__
#define __LHSSchedulerActionManager_H__

#include "cocos2d.h"
/*************
Author: ���
*************/
/****************************
������ʱ�䲽�Լ���������
�������ģ��ļ��ټ�����ͣ
�˶�������ͷ�
****************************/

class LHSSchedulerActionManager
{
public:
	LHSSchedulerActionManager();
	~LHSSchedulerActionManager();

	static LHSSchedulerActionManager * newSchedulerActionManage();

	void deleteSchedulerActionManage();

	cocos2d::Scheduler * getScheduler();

	void resetNodeSchedulerAndActionManage(cocos2d::Node * node);

	void setScaleTime(float s);

	float getScaleTime();

	void pause();

	void resume();

private:
	cocos2d::Scheduler * m_Scheduler;
	cocos2d::ActionManager * m_ActionManager;
};

#endif //__LHSSchedulerActionManager_H__