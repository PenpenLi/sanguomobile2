#ifndef __LHSTOOLS_H__
#define __LHSTOOLS_H__

#include "cocos2d.h"

class LHSTools
{
public:
	//���ڵ��Ƿ��ڳ�����
	static bool checkInSceneOrder(cocos2d::Node * node);

	//����������Ƚڵ��Ƿ���ʾ(�������Լ�)
	static bool checkAncestorsVisible(cocos2d::Node * node);

	//����Ƿ�㵽�Լ���Χ��(2D)
	static bool checkTouchInSelf(cocos2d::Node * node, cocos2d::Touch * touch);

	//����Ƿ�㵽�Լ���Χ��(3D)
	static bool checkTouchInSelf_3D(cocos2d::Node * node, cocos2d::Touch * touch);
};



#endif //__LHSTOOLS_H__