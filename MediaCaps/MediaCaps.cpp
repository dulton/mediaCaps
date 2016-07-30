// MediaCaps.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#include <string>
#include <vector>
#include <list>

using namespace std;

/*
������Ҫ���:
��α��,�ڴ������ܹ������ı��,�ÿ����߿�����ˬ,һ���ַ������ܹ���һ������
�����������������ļ���,����֡��Э�������ڽϴ��ֵ���߽�С��ֵ

*/

class MediaCapValue
{
public:
	MediaCapValue()
	{

	}
    MediaCapValue(int)
    {

    }
    MediaCapValue(string s)
    {

    }
	virtual int Load(string s);
protected:
private:
};

class IntRange
{
public:
int Min;
int Max;
};

class Property
{
public:
    Property(string n, string t, MediaCapValue v)
    {

    }
protected:
private:
	string Name;
	string Type;
	MediaCapValue Value;
};

class MediaCap
{
public:
	int type;					//0-video 1-audio 3-text
	int Codec;					//0-any
	virtual int Load(string s);


protected:
private:
	string CapName;
	vector<Property> VecProperty;
};

class MediaCapValueCodec : public MediaCapValue
{
public:
	MediaCapValueCodec(string V)
	{
		
	}
protected:
private:
};

class MeiaCpas
{
public:
protected:
private:
};


class MediaCapCodec : public MediaCap
{
public:
protected:
private:
	vector<MediaCapValueCodec> VecCodec;
};

class MediaCapValueFramerate : public MediaCapValue
{
public:
	MediaCapValueFramerate(string V)
	{
	}
protected:
private:
};

#define USE_MY_CAP_FIRST    1

class MeiaCaps
{
public:
	MeiaCaps(string s);
    int Negotiate(MeiaCaps Dst, , int opt);
protected:
private:
};


int _tmain(int argc, _TCHAR* argv[])
{
	MeiaCaps caps1(
		"["
					"["
						"type:video"
						"codec:h264"
						"["
							"framerate:1~50"
							"bitrate:200k~4M"
						"]"
					"]"

					"["
						"type:audio"
						"codec:pcm"
						"["
							"sample_format:s16"
							"["
								"bitrate:200k~4M"
								"channel:1~2"
							"]"
						"]"

						"["
							"sample_format:s32"
							"["
								"bitrate:8M"
								"channel:2"
							"]"
						"]"

						"bitrate:20M"

					"]"
		"]"
		);

	MeiaCaps caps2(
		"["
			"["
				"type:audio"
				"codec:pcm"
				"["
					"sample:s16"
					"bitrate:200k~4M"
					"["
						"channel:2"
						"channel:1"
					"]"
				"]"
			"]"
		"]"
		);


	return 0;
}

