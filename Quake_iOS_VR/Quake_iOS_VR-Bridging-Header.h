//
//  Quake_iOS_VR-Bridging-Header.h
//  Quake_iOS_VR
//
//  Created by Heriberto Delgado on 5/01/16.
//
//

#import <GVRCardboardView.h>
#import <SSZipArchive.h>

#include "quakedef.h"

extern float frame_lapse;

extern int gl_screenwidth;

extern int gl_screenheight;

extern float in_forwardmove;

extern float in_sidestepmove;

extern float in_rollangle;

extern float in_pitchangle;

extern int lanConfig_port;

extern char* lanConfig_joinname;

extern int sys_logmaxlines;

extern qboolean sys_ended;

extern qboolean sys_inerror;

void Sys_Cbuf_AddText(const char* text);

void Sys_Con_Printf(const char* text);

void Sys_Key_Event(int key, qboolean down);

void Sys_Init(const char* resourcesDir, const char* documentsDir, const char* commandLine);

void Sys_FrameBeforeRender();

void Sys_FrameRender();

void Sys_FrameAfterRender();

int Sys_MessagesCount();

char* Sys_GetMessage(int i);
