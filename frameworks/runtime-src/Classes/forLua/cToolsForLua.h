#ifndef __CTOOLSFORLUA_H__
#define __CTOOLSFORLUA_H__

#include "cocos2d.h"
#include "CCLuaEngine.h"
#include "../login/UserLogin.h"

class cToolsForLua
{
public:
	static void init(cocos2d::Application * application);

	static void MessageBox(const char * msg, const char * title);
	
	static bool isDebugVersion();

	static bool writeStringToFile(const char * data, int size,const char * fullPath);

	static float calc2VecAngle(float bx, float by, float vx, float vy);

	//������������������,���Ϳ��ַ���Σ��(����ʦ����¼ר�õ�)
	static std::string decode(const std::string &text, const std::string &key);
	static std::string encode(const std::string &text, const std::string &key);

	static std::string sha1(char* input);

	//MD5 luaʹ�û��п��ַ�Σ��( �ж�Ӧ��ȫ�ֺ���cTools_msg_pack��cTools_md5_encode )
	static std::string md5_encode(const std::string & msgBuff);

	static void immediatelyDraw();

	static char * getIOSDeviceModel();

	static char * getIOSSystemVersion();

	static std::string urlEncodeForBase64(const std::string & base64);
	static std::string urlDecodeForUrlBase64(const std::string & urlbase64);

	//������������C++ʹ��,luaʹ�û��п��ַ�Σ��( �ж�Ӧ��ȫ�ֺ���cTools_msg_pack��cTools_msg_unpack )
	static std::string msg_pack(const std::string & msgBuff);
	static std::string msg_unpack(const std::string & msgBuff);

	static std::string msg_pack2(const std::string & msgBuff);
	static std::string msg_unpack2(const std::string & msgBuff);
	static std::string msg_unpack2_new(const std::string & msgBuff, int * sss);

	//�˺��������lua�ڴ�й©,���ر�����²�ʹ�õ�.�����׾������
	static int pushHandlerForlua(int nHandler);

	//������Ϸ
	static void reStartGame();

	static void removeSearchPaths(const std::vector<std::string> & removePaths);

	//���ýǱ�����
	static void setBadge(int var);

	static void showAsynchronousBox();

	static void hideAsynchronousBox();

	static std::string getExternalAssetsPath();

public:
	static void cTools_manual(lua_State* tolua_S);
    
public:
    static std::string s_ios_deviceToken;
    
};



#endif //__CTOOLSFORLUA_H__