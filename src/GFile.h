#if !defined(AFX_GFILE_H__AFB08380_7F27_4D4C_81DA_883AC50368BF__INCLUDED_)
#define AFX_GFILE_H__AFB08380_7F27_4D4C_81DA_883AC50368BF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <string>
#include "data.h"



class GFile  
{
public:
	static void LoadMap(st_map *map, const std::string file);
	static void SaveMap(st_map *map, const std::string name);
	static void SaveData();
	static bool LoadData();
	GFile();
	virtual ~GFile();

};

#endif // !defined(AFX_GFILE_H__AFB08380_7F27_4D4C_81DA_883AC50368BF__INCLUDED_)
