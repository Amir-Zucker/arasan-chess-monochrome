// Copyright 1994 by Jon Dart.  All Rights Reserved.

#ifndef _CONSTANT_H
#define _CONSTANT_H

class Constants
{

public:	

enum {MaxPly = 62};
enum {MATE = 100000 };
enum {MATE_RANGE = 100000-256 };
enum {MaxMoves = 200};		
enum {MaxCPUs = 64};		
enum {HISTORY_MAX =32768};

};

const int INFINITE_TIME = 9999999;

#define DEPTH_INCREMENT 4
#define Arasan_Version "18.1"
#define Arasan_Copyright "Copyright 1994-2015 by Jon Dart. All Rights Reserved."

#endif
