#include "./imgui/imgui.h"
#include "cimgui.h"

#include "./imgui/imgui_internal.h"

CIMGUI_API int _igBeginChild (char *larg1, ImVec2 const *larg2, int larg3, ImGuiWindowFlags *larg4) {
  int lresult = (int)0 ;
  char *arg1 = (char *) 0 ;
  ImVec2 arg2 ;
  bool arg3 ;
  ImGuiWindowFlags arg4 ;
  bool result;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = (bool)larg3;
  arg4 = *larg4;
  try {
    result = (bool)igBeginChild((char const *)arg1,arg2,arg3,arg4);
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}

CIMGUI_API void _igSetNextWindowPos (ImVec2 const *larg1, ImGuiCond *larg2, ImVec2 const *larg3) {
  ImVec2 arg1 ;
  ImGuiCond arg2 ;
  ImVec2 arg3 ;
  
  arg1 = *larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  try {
    igSetNextWindowPos(arg1,arg2,arg3);
    
  } catch (...) {
    
  }
}

CIMGUI_API void _igSetNextWindowSize (ImVec2 const *larg1, ImGuiCond *larg2) {
  ImVec2 arg1 ;
  ImGuiCond arg2 ;
  
  arg1 = *larg1;
  arg2 = *larg2;
  try {
    igSetNextWindowSize(arg1,arg2);
    
  } catch (...) {
    
  }
}

CIMGUI_API void _igSetNextWindowSizeConstraints (ImVec2 const *larg1, ImVec2 const *larg2, ImGuiSizeCallback *larg3, void *larg4) {
  ImVec2 arg1 ;
  ImVec2 arg2 ;
  ImGuiSizeCallback arg3 ;
  void *arg4 = (void *) 0 ;
  
  arg1 = *larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = larg4;
  try {
    igSetNextWindowSizeConstraints(arg1,arg2,arg3,arg4);
    
  } catch (...) {
    
  }
}

CIMGUI_API void _igSetNextWindowContentSize (ImVec2 const *larg1) {
  ImVec2 arg1 ;
  
  arg1 = *larg1;
  try {
    igSetNextWindowContentSize(arg1);
    
  } catch (...) {
    
  }
}

CIMGUI_API void _igSetWindowPosVec2 (ImVec2 const *larg1, ImGuiCond *larg2) {
  ImVec2 arg1 ;
  ImGuiCond arg2 ;
  
  arg1 = *larg1;
  arg2 = *larg2;
  try {
    igSetWindowPosVec2(arg1,arg2);
    
  } catch (...) {
    
  }
}

CIMGUI_API void _igSetWindowSizeVec2 (ImVec2 const *larg1, ImGuiCond *larg2) {
  ImVec2 arg1 ;
  ImGuiCond arg2 ;
  
  arg1 = *larg1;
  arg2 = *larg2;
  try {
    igSetWindowSizeVec2(arg1,arg2);
    
  } catch (...) {
    
  }
}

CIMGUI_API void _igSetWindowPosStr (char *larg1, ImVec2 const *larg2, ImGuiCond *larg3) {
  char *arg1 = (char *) 0 ;
  ImVec2 arg2 ;
  ImGuiCond arg3 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  try {
    igSetWindowPosStr((char const *)arg1,arg2,arg3);
    
  } catch (...) {
    
  }
}

CIMGUI_API void _igSetWindowSizeStr (char *larg1, ImVec2 const *larg2, ImGuiCond *larg3) {
  char *arg1 = (char *) 0 ;
  ImVec2 arg2 ;
  ImGuiCond arg3 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  try {
    igSetWindowSizeStr((char const *)arg1,arg2,arg3);
    
  } catch (...) {
    
  }
}

CIMGUI_API void _igPushStyleColor (ImGuiCol *larg1, ImVec4 const *larg2) {
  ImGuiCol arg1 ;
  ImVec4 arg2 ;
  
  arg1 = *larg1;
  arg2 = *larg2;
  try {
    igPushStyleColor(arg1,arg2);
    
  } catch (...) {
    
  }
}

CIMGUI_API void _igPushStyleVarVec2 (ImGuiStyleVar *larg1, ImVec2 const *larg2) {
  ImGuiStyleVar arg1 ;
  ImVec2 arg2 ;
  
  arg1 = *larg1;
  arg2 = *larg2;
  try {
    igPushStyleVarVec2(arg1,arg2);
    
  } catch (...) {
    
  }
}

CIMGUI_API void _igSetCursorPos (ImVec2 const *larg1) {
  ImVec2 arg1 ;
  
  arg1 = *larg1;
  try {
    igSetCursorPos(arg1);
    
  } catch (...) {
    
  }
}

CIMGUI_API void _igSetCursorScreenPos (ImVec2 const *larg1) {
  ImVec2 arg1 ;
  
  arg1 = *larg1;
  try {
    igSetCursorScreenPos(arg1);
    
  } catch (...) {
    
  }
}

CIMGUI_API void _igTextColored (ImVec4 const *larg1, char *larg2) {
  ImVec4 arg1 ;
  char *arg2 = (char *) 0 ;
  void *arg3 = 0 ;
  
  arg1 = *larg1;
  arg2 = larg2;
  try {
    igTextColored(arg1,(char const *)arg2,arg3);
    
  } catch (...) {
    
  }
}

CIMGUI_API void _igTextColoredV (ImVec4 const *larg1, char *larg2, va_list *larg3) {
  ImVec4 arg1 ;
  char *arg2 = (char *) 0 ;
  va_list arg3 ;
  
  arg1 = *larg1;
  arg2 = larg2;
  arg3 = *larg3;
  try {
    igTextColoredV(arg1,(char const *)arg2,arg3);
    
  } catch (...) {
    
  }
}

CIMGUI_API int _igButton (char *larg1, ImVec2 const *larg2) {
  int lresult = (int)0 ;
  char *arg1 = (char *) 0 ;
  ImVec2 arg2 ;
  bool result;
  
  arg1 = larg1;
  arg2 = *larg2;
  try {
    result = (bool)igButton((char const *)arg1,arg2);
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}

CIMGUI_API int _igInvisibleButton (char *larg1, ImVec2 const *larg2) {
  int lresult = (int)0 ;
  char *arg1 = (char *) 0 ;
  ImVec2 arg2 ;
  bool result;
  
  arg1 = larg1;
  arg2 = *larg2;
  try {
    result = (bool)igInvisibleButton((char const *)arg1,arg2);
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}

CIMGUI_API void _igImage (ImTextureID *larg1, ImVec2 const *larg2, ImVec2 const *larg3, ImVec2 const *larg4, ImVec4 const *larg5, ImVec4 const *larg6) {
  ImTextureID arg1 ;
  ImVec2 arg2 ;
  ImVec2 arg3 ;
  ImVec2 arg4 ;
  ImVec4 arg5 ;
  ImVec4 arg6 ;
  
  arg1 = *larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  arg5 = *larg5;
  arg6 = *larg6;
  try {
    igImage(arg1,arg2,arg3,arg4,arg5,arg6);
    
  } catch (...) {
    
  }
}

CIMGUI_API int _igImageButton (ImTextureID *larg1, ImVec2 const *larg2, ImVec2 const *larg3, ImVec2 const *larg4, int larg5, ImVec4 const *larg6, ImVec4 const *larg7) {
  int lresult = (int)0 ;
  ImTextureID arg1 ;
  ImVec2 arg2 ;
  ImVec2 arg3 ;
  ImVec2 arg4 ;
  int arg5 ;
  ImVec4 arg6 ;
  ImVec4 arg7 ;
  bool result;
  
  arg1 = *larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  arg5 = larg5;
  arg6 = *larg6;
  arg7 = *larg7;
  try {
    result = (bool)igImageButton(arg1,arg2,arg3,arg4,arg5,arg6,arg7);
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}

CIMGUI_API void _igPlotLines (char *larg1, float *larg2, int larg3, int larg4, char *larg5, float larg6, float larg7, ImVec2 *larg8, int larg9) {
  char *arg1 = (char *) 0 ;
  float *arg2 = (float *) 0 ;
  int arg3 ;
  int arg4 ;
  char *arg5 = (char *) 0 ;
  float arg6 ;
  float arg7 ;
  ImVec2 arg8 ;
  int arg9 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = larg6;
  arg7 = larg7;
  arg8 = *larg8;
  arg9 = larg9;
  try {
    igPlotLines((char const *)arg1,(float const *)arg2,arg3,arg4,(char const *)arg5,arg6,arg7,arg8,arg9);
    
  } catch (...) {
    
  }
}

CIMGUI_API void _igPlotLinesFnPtr (char *larg1, float (*larg2)(void *,int), void *larg3, int larg4, int larg5, char *larg6, float larg7, float larg8, ImVec2 *larg9) {
  char *arg1 = (char *) 0 ;
  float (*arg2)(void *,int) = (float (*)(void *,int)) 0 ;
  void *arg3 = (void *) 0 ;
  int arg4 ;
  int arg5 ;
  char *arg6 = (char *) 0 ;
  float arg7 ;
  float arg8 ;
  ImVec2 arg9 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = larg6;
  arg7 = larg7;
  arg8 = larg8;
  arg9 = *larg9;
  try {
    igPlotLinesFnPtr((char const *)arg1,arg2,arg3,arg4,arg5,(char const *)arg6,arg7,arg8,arg9);
    
  } catch (...) {
    
  }
}

CIMGUI_API void _igPlotHistogramFloatPtr (char *larg1, float *larg2, int larg3, int larg4, char *larg5, float larg6, float larg7, ImVec2 *larg8, int larg9) {
  char *arg1 = (char *) 0 ;
  float *arg2 = (float *) 0 ;
  int arg3 ;
  int arg4 ;
  char *arg5 = (char *) 0 ;
  float arg6 ;
  float arg7 ;
  ImVec2 arg8 ;
  int arg9 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = larg6;
  arg7 = larg7;
  arg8 = *larg8;
  arg9 = larg9;
  try {
    igPlotHistogramFloatPtr((char const *)arg1,(float const *)arg2,arg3,arg4,(char const *)arg5,arg6,arg7,arg8,arg9);
    
  } catch (...) {
    
  }
}

CIMGUI_API void _igPlotHistogramFnPtr (char *larg1, float (*larg2)(void *,int), void *larg3, int larg4, int larg5, char *larg6, float larg7, float larg8, ImVec2 *larg9) {
  char *arg1 = (char *) 0 ;
  float (*arg2)(void *,int) = (float (*)(void *,int)) 0 ;
  void *arg3 = (void *) 0 ;
  int arg4 ;
  int arg5 ;
  char *arg6 = (char *) 0 ;
  float arg7 ;
  float arg8 ;
  ImVec2 arg9 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = larg6;
  arg7 = larg7;
  arg8 = larg8;
  arg9 = *larg9;
  try {
    igPlotHistogramFnPtr((char const *)arg1,arg2,arg3,arg4,arg5,(char const *)arg6,arg7,arg8,arg9);
    
  } catch (...) {
    
  }
}

CIMGUI_API int _igInputTextMultiline (char *larg1, char *larg2, size_t *larg3, ImVec2 const *larg4, ImGuiInputTextFlags *larg5, ImGuiInputTextCallback *larg6, void *larg7) {
  int lresult = (int)0 ;
  char *arg1 = (char *) 0 ;
  char *arg2 = (char *) 0 ;
  size_t arg3 ;
  ImVec2 arg4 ;
  ImGuiInputTextFlags arg5 ;
  ImGuiInputTextCallback arg6 ;
  void *arg7 = (void *) 0 ;
  bool result;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  arg5 = *larg5;
  arg6 = *larg6;
  arg7 = larg7;
  try {
    result = (bool)igInputTextMultiline((char const *)arg1,arg2,arg3,arg4,arg5,arg6,arg7);
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}

CIMGUI_API int _igVSliderFloat (char *larg1, ImVec2 const *larg2, float *larg3, float larg4, float larg5, char *larg6, float larg7) {
  int lresult = (int)0 ;
  char *arg1 = (char *) 0 ;
  ImVec2 arg2 ;
  float *arg3 = (float *) 0 ;
  float arg4 ;
  float arg5 ;
  char *arg6 = (char *) 0 ;
  float arg7 ;
  bool result;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = larg6;
  arg7 = larg7;
  try {
    result = (bool)igVSliderFloat((char const *)arg1,arg2,arg3,arg4,arg5,(char const *)arg6,arg7);
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}

CIMGUI_API int _igVSliderInt (char *larg1, ImVec2 const *larg2, int *larg3, int larg4, int larg5, char *larg6) {
  int lresult = (int)0 ;
  char *arg1 = (char *) 0 ;
  ImVec2 arg2 ;
  int *arg3 = (int *) 0 ;
  int arg4 ;
  int arg5 ;
  char *arg6 = (char *) 0 ;
  bool result;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = larg6;
  try {
    result = (bool)igVSliderInt((char const *)arg1,arg2,arg3,arg4,arg5,(char const *)arg6);
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}

CIMGUI_API int _igColorButton (char *larg1, ImVec4 const *larg2, ImGuiColorEditFlags *larg3, ImVec2 *larg4) {
  int lresult = (int)0 ;
  char *arg1 = (char *) 0 ;
  ImVec4 arg2 ;
  ImGuiColorEditFlags arg3 ;
  ImVec2 arg4 ;
  bool result;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  try {
    result = (bool)igColorButton((char const *)arg1,arg2,arg3,arg4);
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}

CIMGUI_API int _igSelectable (char *larg1, int larg2, ImGuiSelectableFlags *larg3, ImVec2 const *larg4) {
  int lresult = (int)0 ;
  char *arg1 = (char *) 0 ;
  bool arg2 ;
  ImGuiSelectableFlags arg3 ;
  ImVec2 arg4 ;
  bool result;
  
  arg1 = larg1;
  arg2 = (bool)larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  try {
    result = (bool)igSelectable((char const *)arg1,arg2,arg3,arg4);
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}

CIMGUI_API int _igSelectableBoolPtr (char *larg1, bool *larg2, ImGuiSelectableFlags *larg3, ImVec2 const *larg4) {
  int lresult = (int)0 ;
  char *arg1 = (char *) 0 ;
  bool *arg2 = (bool *) 0 ;
  ImGuiSelectableFlags arg3 ;
  ImVec2 arg4 ;
  bool result;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  try {
    result = (bool)igSelectableBoolPtr((char const *)arg1,arg2,arg3,arg4);
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}

CIMGUI_API int _igListBoxHeaderVec2 (char *larg1, ImVec2 const *larg2) {
  int lresult = (int)0 ;
  char *arg1 = (char *) 0 ;
  ImVec2 arg2 ;
  bool result;
  
  arg1 = larg1;
  arg2 = *larg2;
  try {
    result = (bool)igListBoxHeaderVec2((char const *)arg1,arg2);
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}

CIMGUI_API void _igPushClipRect (ImVec2 const *larg1, ImVec2 const *larg2, int larg3) {
  ImVec2 arg1 ;
  ImVec2 arg2 ;
  bool arg3 ;
  
  arg1 = *larg1;
  arg2 = *larg2;
  arg3 = (bool)larg3;
  try {
    igPushClipRect(arg1,arg2,arg3);
    
  } catch (...) {
    
  }
}

CIMGUI_API int _igIsRectVisible (ImVec2 const *larg1) {
  int lresult = (int)0 ;
  ImVec2 arg1 ;
  bool result;
  
  arg1 = *larg1;
  try {
    result = (bool)igIsRectVisible(arg1);
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}

CIMGUI_API int _igBeginChildFrame (ImGuiID *larg1, ImVec2 const *larg2, ImGuiWindowFlags *larg3) {
  int lresult = (int)0 ;
  ImGuiID arg1 ;
  ImVec2 arg2 ;
  ImGuiWindowFlags arg3 ;
  bool result;
  
  arg1 = *larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  try {
    result = (bool)igBeginChildFrame(arg1,arg2,arg3);
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}

CIMGUI_API ImU32 *_igColorConvertFloat4ToU32 (ImVec4 const *larg1) {
  ImU32 * lresult = (ImU32 *)0 ;
  ImVec4 arg1 ;
  ImU32 result;
  
  arg1 = *larg1;
  try {
    result = igColorConvertFloat4ToU32(arg1);
    lresult = new ImU32(result);
    return lresult;
  } catch (...) {
    return (ImU32 *)0;
  }
}

CIMGUI_API int _igIsMouseHoveringRect (ImVec2 const *larg1, ImVec2 const *larg2, int larg3) {
  int lresult = (int)0 ;
  ImVec2 arg1 ;
  ImVec2 arg2 ;
  bool arg3 ;
  bool result;
  
  arg1 = *larg1;
  arg2 = *larg2;
  arg3 = (bool)larg3;
  try {
    result = (bool)igIsMouseHoveringRect(arg1,arg2,arg3);
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}

CIMGUI_API void _ImDrawList_PushClipRect (ImDrawList *larg1, ImVec2 *larg2, ImVec2 *larg3, int larg4) {
  ImDrawList *arg1 = (ImDrawList *) 0 ;
  ImVec2 arg2 ;
  ImVec2 arg3 ;
  bool arg4 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = (bool)larg4;
  try {
    ImDrawList_PushClipRect(arg1,arg2,arg3,arg4);
    
  } catch (...) {
    
  }
}

CIMGUI_API void _ImDrawList_AddLine (ImDrawList *larg1, ImVec2 const *larg2, ImVec2 const *larg3, ImU32 *larg4, float larg5) {
  ImDrawList *arg1 = (ImDrawList *) 0 ;
  ImVec2 arg2 ;
  ImVec2 arg3 ;
  ImU32 arg4 ;
  float arg5 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  arg5 = larg5;
  try {
    ImDrawList_AddLine(arg1,arg2,arg3,arg4,arg5);
    
  } catch (...) {
    
  }
}


CIMGUI_API void _ImDrawList_AddRect (ImDrawList *larg1, ImVec2 const *larg2, ImVec2 const *larg3, ImU32 *larg4, float larg5, int larg6, float larg7) {
  ImDrawList *arg1 = (ImDrawList *) 0 ;
  ImVec2 arg2 ;
  ImVec2 arg3 ;
  ImU32 arg4 ;
  float arg5 ;
  int arg6 ;
  float arg7 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  arg5 = larg5;
  arg6 = larg6;
  arg7 = larg7;
  try {
    ImDrawList_AddRect(arg1,arg2,arg3,arg4,arg5,arg6,arg7);
    
  } catch (...) {
    
  }
}


CIMGUI_API void _ImDrawList_AddRectFilled (ImDrawList *larg1, ImVec2 const *larg2, ImVec2 const *larg3, ImU32 *larg4, float larg5, int larg6) {
  ImDrawList *arg1 = (ImDrawList *) 0 ;
  ImVec2 arg2 ;
  ImVec2 arg3 ;
  ImU32 arg4 ;
  float arg5 ;
  int arg6 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  arg5 = larg5;
  arg6 = larg6;
  try {
    ImDrawList_AddRectFilled(arg1,arg2,arg3,arg4,arg5,arg6);
    
  } catch (...) {
    
  }
}


CIMGUI_API void _ImDrawList_AddRectFilledMultiColor (ImDrawList *larg1, ImVec2 const *larg2, ImVec2 const *larg3, ImU32 *larg4, ImU32 *larg5, ImU32 *larg6, ImU32 *larg7) {
  ImDrawList *arg1 = (ImDrawList *) 0 ;
  ImVec2 arg2 ;
  ImVec2 arg3 ;
  ImU32 arg4 ;
  ImU32 arg5 ;
  ImU32 arg6 ;
  ImU32 arg7 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  arg5 = *larg5;
  arg6 = *larg6;
  arg7 = *larg7;
  try {
    ImDrawList_AddRectFilledMultiColor(arg1,arg2,arg3,arg4,arg5,arg6,arg7);
    
  } catch (...) {
    
  }
}


CIMGUI_API void _ImDrawList_AddQuad (ImDrawList *larg1, ImVec2 const *larg2, ImVec2 const *larg3, ImVec2 const *larg4, ImVec2 const *larg5, ImU32 *larg6, float larg7) {
  ImDrawList *arg1 = (ImDrawList *) 0 ;
  ImVec2 arg2 ;
  ImVec2 arg3 ;
  ImVec2 arg4 ;
  ImVec2 arg5 ;
  ImU32 arg6 ;
  float arg7 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  arg5 = *larg5;
  arg6 = *larg6;
  arg7 = larg7;
  try {
    ImDrawList_AddQuad(arg1,arg2,arg3,arg4,arg5,arg6,arg7);
    
  } catch (...) {
    
  }
}


CIMGUI_API void _ImDrawList_AddQuadFilled (ImDrawList *larg1, ImVec2 const *larg2, ImVec2 const *larg3, ImVec2 const *larg4, ImVec2 const *larg5, ImU32 *larg6) {
  ImDrawList *arg1 = (ImDrawList *) 0 ;
  ImVec2 arg2 ;
  ImVec2 arg3 ;
  ImVec2 arg4 ;
  ImVec2 arg5 ;
  ImU32 arg6 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  arg5 = *larg5;
  arg6 = *larg6;
  try {
    ImDrawList_AddQuadFilled(arg1,arg2,arg3,arg4,arg5,arg6);
    
  } catch (...) {
    
  }
}


CIMGUI_API void _ImDrawList_AddTriangle (ImDrawList *larg1, ImVec2 const *larg2, ImVec2 const *larg3, ImVec2 const *larg4, ImU32 *larg5, float larg6) {
  ImDrawList *arg1 = (ImDrawList *) 0 ;
  ImVec2 arg2 ;
  ImVec2 arg3 ;
  ImVec2 arg4 ;
  ImU32 arg5 ;
  float arg6 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  arg5 = *larg5;
  arg6 = larg6;
  try {
    ImDrawList_AddTriangle(arg1,arg2,arg3,arg4,arg5,arg6);
    
  } catch (...) {
    
  }
}


CIMGUI_API void _ImDrawList_AddTriangleFilled (ImDrawList *larg1, ImVec2 const *larg2, ImVec2 const *larg3, ImVec2 const *larg4, ImU32 *larg5) {
  ImDrawList *arg1 = (ImDrawList *) 0 ;
  ImVec2 arg2 ;
  ImVec2 arg3 ;
  ImVec2 arg4 ;
  ImU32 arg5 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  arg5 = *larg5;
  try {
    ImDrawList_AddTriangleFilled(arg1,arg2,arg3,arg4,arg5);
    
  } catch (...) {
    
  }
}


CIMGUI_API void _ImDrawList_AddCircle (ImDrawList *larg1, ImVec2 const *larg2, float larg3, ImU32 *larg4, int larg5, float larg6) {
  ImDrawList *arg1 = (ImDrawList *) 0 ;
  ImVec2 arg2 ;
  float arg3 ;
  ImU32 arg4 ;
  int arg5 ;
  float arg6 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = *larg4;
  arg5 = larg5;
  arg6 = larg6;
  try {
    ImDrawList_AddCircle(arg1,arg2,arg3,arg4,arg5,arg6);
    
  } catch (...) {
    
  }
}


CIMGUI_API void _ImDrawList_AddCircleFilled (ImDrawList *larg1, ImVec2 const *larg2, float larg3, ImU32 *larg4, int larg5) {
  ImDrawList *arg1 = (ImDrawList *) 0 ;
  ImVec2 arg2 ;
  float arg3 ;
  ImU32 arg4 ;
  int arg5 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = *larg4;
  arg5 = larg5;
  try {
    ImDrawList_AddCircleFilled(arg1,arg2,arg3,arg4,arg5);
    
  } catch (...) {
    
  }
}


CIMGUI_API void _ImDrawList_AddText (ImDrawList *larg1, ImVec2 const *larg2, ImU32 *larg3, char *larg4, char *larg5) {
  ImDrawList *arg1 = (ImDrawList *) 0 ;
  ImVec2 arg2 ;
  ImU32 arg3 ;
  char *arg4 = (char *) 0 ;
  char *arg5 = (char *) 0 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    ImDrawList_AddText(arg1,arg2,arg3,(char const *)arg4,(char const *)arg5);
    
  } catch (...) {
    
  }
}


CIMGUI_API void _ImDrawList_AddTextFontPtr (ImDrawList *larg1, ImFont *larg2, float larg3, ImVec2 const *larg4, ImU32 *larg5, char *larg6, char *larg7, float larg8, ImVec4 *larg9) {
  ImDrawList *arg1 = (ImDrawList *) 0 ;
  ImFont *arg2 = (ImFont *) 0 ;
  float arg3 ;
  ImVec2 arg4 ;
  ImU32 arg5 ;
  char *arg6 = (char *) 0 ;
  char *arg7 = (char *) 0 ;
  float arg8 ;
  ImVec4 *arg9 = (ImVec4 *) 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = *larg4;
  arg5 = *larg5;
  arg6 = larg6;
  arg7 = larg7;
  arg8 = larg8;
  arg9 = larg9;
  try {
    ImDrawList_AddTextFontPtr(arg1,(ImFont const *)arg2,arg3,arg4,arg5,(char const *)arg6,(char const *)arg7,arg8,(ImVec4 const *)arg9);
    
  } catch (...) {
    
  }
}


CIMGUI_API void _ImDrawList_AddImage (ImDrawList *larg1, ImTextureID *larg2, ImVec2 const *larg3, ImVec2 const *larg4, ImVec2 const *larg5, ImVec2 const *larg6, ImU32 *larg7) {
  ImDrawList *arg1 = (ImDrawList *) 0 ;
  ImTextureID arg2 ;
  ImVec2 arg3 ;
  ImVec2 arg4 ;
  ImVec2 arg5 ;
  ImVec2 arg6 ;
  ImU32 arg7 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  arg5 = *larg5;
  arg6 = *larg6;
  arg7 = *larg7;
  try {
    ImDrawList_AddImage(arg1,arg2,arg3,arg4,arg5,arg6,arg7);
    
  } catch (...) {
    
  }
}

CIMGUI_API void _ImDrawList_AddImageQuad (ImDrawList *larg1, ImTextureID *larg2, ImVec2 const *larg3, ImVec2 const *larg4, ImVec2 const *larg5, ImVec2 const *larg6, ImVec2 const *larg7, ImVec2 const *larg8, ImVec2 const *larg9, ImVec2 const *larg10, ImU32 *larg11) {
  ImDrawList *arg1 = (ImDrawList *) 0 ;
  ImTextureID arg2 ;
  ImVec2 arg3 ;
  ImVec2 arg4 ;
  ImVec2 arg5 ;
  ImVec2 arg6 ;
  ImVec2 arg7 ;
  ImVec2 arg8 ;
  ImVec2 arg9 ;
  ImVec2 arg10 ;
  ImU32 arg11 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  arg5 = *larg5;
  arg6 = *larg6;
  arg7 = *larg7;
  arg8 = *larg8;
  arg9 = *larg9;
  arg10 = *larg10;
  arg11 = *larg11;
  try {
    ImDrawList_AddImageQuad(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11);
    
  } catch (...) {
    
  }
}


CIMGUI_API void _ImDrawList_AddImageRounded (ImDrawList *larg1, ImTextureID *larg2, ImVec2 const *larg3, ImVec2 const *larg4, ImVec2 const *larg5, ImVec2 const *larg6, ImU32 *larg7, float larg8, int larg9) {
  ImDrawList *arg1 = (ImDrawList *) 0 ;
  ImTextureID arg2 ;
  ImVec2 arg3 ;
  ImVec2 arg4 ;
  ImVec2 arg5 ;
  ImVec2 arg6 ;
  ImU32 arg7 ;
  float arg8 ;
  int arg9 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  arg5 = *larg5;
  arg6 = *larg6;
  arg7 = *larg7;
  arg8 = larg8;
  arg9 = larg9;
  try {
    ImDrawList_AddImageRounded(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
    
  } catch (...) {
    
  }
}

CIMGUI_API void _ImDrawList_PathLineTo (ImDrawList *larg1, ImVec2 const *larg2) {
  ImDrawList *arg1 = (ImDrawList *) 0 ;
  ImVec2 arg2 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  try {
    ImDrawList_PathLineTo(arg1,arg2);
    
  } catch (...) {
    
  }
}


CIMGUI_API void _ImDrawList_PathLineToMergeDuplicate (ImDrawList *larg1, ImVec2 const *larg2) {
  ImDrawList *arg1 = (ImDrawList *) 0 ;
  ImVec2 arg2 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  try {
    ImDrawList_PathLineToMergeDuplicate(arg1,arg2);
    
  } catch (...) {
    
  }
}


CIMGUI_API void _ImDrawList_PathArcTo (ImDrawList *larg1, ImVec2 const *larg2, float larg3, float larg4, float larg5, int larg6) {
  ImDrawList *arg1 = (ImDrawList *) 0 ;
  ImVec2 arg2 ;
  float arg3 ;
  float arg4 ;
  float arg5 ;
  int arg6 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = larg6;
  try {
    ImDrawList_PathArcTo(arg1,arg2,arg3,arg4,arg5,arg6);
    
  } catch (...) {
    
  }
}


CIMGUI_API void _ImDrawList_PathArcToFast (ImDrawList *larg1, ImVec2 const *larg2, float larg3, int larg4, int larg5) {
  ImDrawList *arg1 = (ImDrawList *) 0 ;
  ImVec2 arg2 ;
  float arg3 ;
  int arg4 ;
  int arg5 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    ImDrawList_PathArcToFast(arg1,arg2,arg3,arg4,arg5);
    
  } catch (...) {
    
  }
}


CIMGUI_API void _ImDrawList_PathBezierCurveTo (ImDrawList *larg1, ImVec2 const *larg2, ImVec2 const *larg3, ImVec2 const *larg4, int larg5) {
  ImDrawList *arg1 = (ImDrawList *) 0 ;
  ImVec2 arg2 ;
  ImVec2 arg3 ;
  ImVec2 arg4 ;
  int arg5 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  arg5 = larg5;
  try {
    ImDrawList_PathBezierCurveTo(arg1,arg2,arg3,arg4,arg5);
    
  } catch (...) {
    
  }
}


CIMGUI_API void _ImDrawList_PathRect (ImDrawList *larg1, ImVec2 const *larg2, ImVec2 const *larg3, float larg4, int larg5) {
  ImDrawList *arg1 = (ImDrawList *) 0 ;
  ImVec2 arg2 ;
  ImVec2 arg3 ;
  float arg4 ;
  int arg5 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    ImDrawList_PathRect(arg1,arg2,arg3,arg4,arg5);
    
  } catch (...) {
    
  }
}

CIMGUI_API void _ImDrawList_PrimRect (ImDrawList *larg1, ImVec2 const *larg2, ImVec2 const *larg3, ImU32 *larg4) {
  ImDrawList *arg1 = (ImDrawList *) 0 ;
  ImVec2 arg2 ;
  ImVec2 arg3 ;
  ImU32 arg4 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  try {
    ImDrawList_PrimRect(arg1,arg2,arg3,arg4);
    
  } catch (...) {
    
  }
}


CIMGUI_API void _ImDrawList_PrimRectUV (ImDrawList *larg1, ImVec2 const *larg2, ImVec2 const *larg3, ImVec2 const *larg4, ImVec2 const *larg5, ImU32 *larg6) {
  ImDrawList *arg1 = (ImDrawList *) 0 ;
  ImVec2 arg2 ;
  ImVec2 arg3 ;
  ImVec2 arg4 ;
  ImVec2 arg5 ;
  ImU32 arg6 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  arg5 = *larg5;
  arg6 = *larg6;
  try {
    ImDrawList_PrimRectUV(arg1,arg2,arg3,arg4,arg5,arg6);
    
  } catch (...) {
    
  }
}


CIMGUI_API void _ImDrawList_PrimQuadUV (ImDrawList *larg1, ImVec2 const *larg2, ImVec2 const *larg3, ImVec2 const *larg4, ImVec2 const *larg5, ImVec2 const *larg6, ImVec2 const *larg7, ImVec2 const *larg8, ImVec2 const *larg9, ImU32 *larg10) {
  ImDrawList *arg1 = (ImDrawList *) 0 ;
  ImVec2 arg2 ;
  ImVec2 arg3 ;
  ImVec2 arg4 ;
  ImVec2 arg5 ;
  ImVec2 arg6 ;
  ImVec2 arg7 ;
  ImVec2 arg8 ;
  ImVec2 arg9 ;
  ImU32 arg10 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  arg5 = *larg5;
  arg6 = *larg6;
  arg7 = *larg7;
  arg8 = *larg8;
  arg9 = *larg9;
  arg10 = *larg10;
  try {
    ImDrawList_PrimQuadUV(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10);
    
  } catch (...) {
    
  }
}


CIMGUI_API void _ImDrawList_PrimWriteVtx (ImDrawList *larg1, ImVec2 const *larg2, ImVec2 const *larg3, ImU32 *larg4) {
  ImDrawList *arg1 = (ImDrawList *) 0 ;
  ImVec2 arg2 ;
  ImVec2 arg3 ;
  ImU32 arg4 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  try {
    ImDrawList_PrimWriteVtx(arg1,arg2,arg3,arg4);
    
  } catch (...) {
    
  }
}

CIMGUI_API void _ImDrawList_PrimVtx (ImDrawList *larg1, ImVec2 const *larg2, ImVec2 const *larg3, ImU32 *larg4) {
  ImDrawList *arg1 = (ImDrawList *) 0 ;
  ImVec2 arg2 ;
  ImVec2 arg3 ;
  ImU32 arg4 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  try {
    ImDrawList_PrimVtx(arg1,arg2,arg3,arg4);
    
  } catch (...) {
    
  }
}

CIMGUI_API void _ImDrawData_ScaleClipRects (ImDrawData *larg1, ImVec2 const *larg2) {
  ImDrawData *arg1 = (ImDrawData *) 0 ;
  ImVec2 arg2 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  try {
    ImDrawData_ScaleClipRects(arg1,arg2);
    
  } catch (...) {
    
  }
}


CIMGUI_API ImVec2 *_igGetWindowPos () {
  ImVec2 * lresult = (ImVec2 *)0 ;
  ImVec2 result;
  
  try {
    result = igGetWindowPos();
    lresult = new ImVec2(result);
    return lresult;
  } catch (...) {
    return (ImVec2 *)0;
  }
}

CIMGUI_API ImVec2 *_igGetWindowSize () {
  ImVec2 * lresult = (ImVec2 *)0 ;
  ImVec2 result;
  
  try {
    result = igGetWindowSize();
    lresult = new ImVec2(result);
    return lresult;
  } catch (...) {
    return (ImVec2 *)0;
  }
}

CIMGUI_API ImVec2 *_igGetContentRegionMax () {
  ImVec2 * lresult = (ImVec2 *)0 ;
  ImVec2 result;
  
  try {
    result = igGetContentRegionMax();
    lresult = new ImVec2(result);
    return lresult;
  } catch (...) {
    return (ImVec2 *)0;
  }
}


CIMGUI_API ImVec2 *_igGetContentRegionAvail () {
  ImVec2 * lresult = (ImVec2 *)0 ;
  ImVec2 result;
  
  try {
    result = igGetContentRegionAvail();
    lresult = new ImVec2(result);
    return lresult;
  } catch (...) {
    return (ImVec2 *)0;
  }
}

CIMGUI_API ImVec2 *_igGetWindowContentRegionMin () {
  ImVec2 * lresult = (ImVec2 *)0 ;
  ImVec2 result;
  
  try {
    result = igGetWindowContentRegionMin();
    lresult = new ImVec2(result);
    return lresult;
  } catch (...) {
    return (ImVec2 *)0;
  }
}


CIMGUI_API ImVec2 *_igGetWindowContentRegionMax () {
  ImVec2 * lresult = (ImVec2 *)0 ;
  ImVec2 result;
  
  try {
    result = igGetWindowContentRegionMax();
    lresult = new ImVec2(result);
    return lresult;
  } catch (...) {
    return (ImVec2 *)0;
  }
}

CIMGUI_API ImVec2 *_igGetFontTexUvWhitePixel () {
  ImVec2 * lresult = (ImVec2 *)0 ;
  ImVec2 result;
  
  try {
    result = igGetFontTexUvWhitePixel();
    lresult = new ImVec2(result);
    return lresult;
  } catch (...) {
    return (ImVec2 *)0;
  }
}

CIMGUI_API ImVec2 *_igGetCursorPos () {
  ImVec2 * lresult = (ImVec2 *)0 ;
  ImVec2 result;
  
  try {
    result = igGetCursorPos();
    lresult = new ImVec2(result);
    return lresult;
  } catch (...) {
    return (ImVec2 *)0;
  }
}

CIMGUI_API ImVec2 *_igGetCursorStartPos () {
  ImVec2 * lresult = (ImVec2 *)0 ;
  ImVec2 result;
  
  try {
    result = igGetCursorStartPos();
    lresult = new ImVec2(result);
    return lresult;
  } catch (...) {
    return (ImVec2 *)0;
  }
}


CIMGUI_API ImVec2 *_igGetCursorScreenPos () {
  ImVec2 * lresult = (ImVec2 *)0 ;
  ImVec2 result;
  
  try {
    result = igGetCursorScreenPos();
    lresult = new ImVec2(result);
    return lresult;
  } catch (...) {
    return (ImVec2 *)0;
  }
}

CIMGUI_API ImVec2 *_igGetItemRectMin () {
  ImVec2 * lresult = (ImVec2 *)0 ;
  ImVec2 result;
  
  try {
    result = igGetItemRectMin();
    lresult = new ImVec2(result);
    return lresult;
  } catch (...) {
    return (ImVec2 *)0;
  }
}


CIMGUI_API ImVec2 *_igGetItemRectMax () {
  ImVec2 * lresult = (ImVec2 *)0 ;
  ImVec2 result;
  
  try {
    result = igGetItemRectMax();
    lresult = new ImVec2(result);
    return lresult;
  } catch (...) {
    return (ImVec2 *)0;
  }
}


CIMGUI_API ImVec2 *_igGetItemRectSize () {
  ImVec2 * lresult = (ImVec2 *)0 ;
  ImVec2 result;
  
  try {
    result = igGetItemRectSize();
    lresult = new ImVec2(result);
    return lresult;
  } catch (...) {
    return (ImVec2 *)0;
  }
}

CIMGUI_API ImVec2 *_igCalcTextSize (char *larg1, char *larg2, int larg3, float larg4) {
  ImVec2 * lresult = (ImVec2 *)0 ;
  char *arg1 = (char *) 0 ;
  char *arg2 = (char *) 0 ;
  bool arg3 ;
  float arg4 ;
  ImVec2 result;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = (bool)larg3;
  arg4 = larg4;
  try {
    result = igCalcTextSize((char const *)arg1,(char const *)arg2,arg3,arg4);
    lresult = new ImVec2(result);
    return lresult;
  } catch (...) {
    return (ImVec2 *)0;
  }
}

CIMGUI_API ImVec4 *_igColorConvertU32ToFloat4 (ImU32 *larg1) {
  ImVec4 * lresult = (ImVec4 *)0 ;
  ImU32 arg1 ;
  ImVec4 result;
  
  arg1 = *larg1;
  try {
    result = igColorConvertU32ToFloat4(arg1);
    lresult = new ImVec4(result);
    return lresult;
  } catch (...) {
    return (ImVec4 *)0;
  }
}

CIMGUI_API ImVec2 *_igGetMousePos () {
  ImVec2 * lresult = (ImVec2 *)0 ;
  ImVec2 result;
  
  try {
    result = igGetMousePos();
    lresult = new ImVec2(result);
    return lresult;
  } catch (...) {
    return (ImVec2 *)0;
  }
}

CIMGUI_API ImVec2 *_igGetMousePosOnOpeningCurrentPopup () {
  ImVec2 * lresult = (ImVec2 *)0 ;
  ImVec2 result;
  
  try {
    result = igGetMousePosOnOpeningCurrentPopup();
    lresult = new ImVec2(result);
    return lresult;
  } catch (...) {
    return (ImVec2 *)0;
  }
}


CIMGUI_API ImVec2 *_igGetMouseDragDelta (int larg1, float larg2) {
  ImVec2 * lresult = (ImVec2 *)0 ;
  int arg1 ;
  float arg2 ;
  ImVec2 result;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    result = igGetMouseDragDelta(arg1,arg2);
    lresult = new ImVec2(result);
    return lresult;
  } catch (...) {
    return (ImVec2 *)0;
  }
}

CIMGUI_API ImColor *_ImColor_HSV (ImColor *larg1, float larg2, float larg3, float larg4, float larg5) {
  ImColor * lresult = (ImColor *)0 ;
  ImColor *arg1 = (ImColor *) 0 ;
  float arg2 ;
  float arg3 ;
  float arg4 ;
  float arg5 ;
  ImColor result;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    result = ImColor_HSV(arg1,arg2,arg3,arg4,arg5);
    lresult = new ImColor(result);
    return lresult;
  } catch (...) {
    return (ImColor *)0;
  }
}

CIMGUI_API ImVec2 *_ImDrawList_GetClipRectMin (ImDrawList *larg1) {
  ImVec2 * lresult = (ImVec2 *)0 ;
  ImDrawList *arg1 = (ImDrawList *) 0 ;
  ImVec2 result;
  
  arg1 = larg1;
  try {
    result = ImDrawList_GetClipRectMin(arg1);
    lresult = new ImVec2(result);
    return lresult;
  } catch (...) {
    return (ImVec2 *)0;
  }
}


CIMGUI_API ImVec2 *_ImDrawList_GetClipRectMax (ImDrawList *larg1) {
  ImVec2 * lresult = (ImVec2 *)0 ;
  ImDrawList *arg1 = (ImDrawList *) 0 ;
  ImVec2 result;
  
  arg1 = larg1;
  try {
    result = ImDrawList_GetClipRectMax(arg1);
    lresult = new ImVec2(result);
    return lresult;
  } catch (...) {
    return (ImVec2 *)0;
  }
}

CIMGUI_API ImVec2 *_ImFont_CalcTextSizeA (ImFont *larg1, float larg2, float larg3, float larg4, char *larg5, char *larg6, char **larg7) {
  ImVec2 * lresult = (ImVec2 *)0 ;
  ImFont *arg1 = (ImFont *) 0 ;
  float arg2 ;
  float arg3 ;
  float arg4 ;
  char *arg5 = (char *) 0 ;
  char *arg6 = (char *) 0 ;
  char **arg7 = (char **) 0 ;
  ImVec2 result;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = larg6;
  arg7 = larg7;
  try {
    result = ImFont_CalcTextSizeA(arg1,arg2,arg3,arg4,(char const *)arg5,(char const *)arg6,(char const **)arg7);
    lresult = new ImVec2(result);
    return lresult;
  } catch (...) {
    return (ImVec2 *)0;
  }
}

CIMGUI_API ImVec2_Simple *_igGetWindowPos_nonUDT2 () {
  ImVec2_Simple * lresult = (ImVec2_Simple *)0 ;
  ImVec2_Simple result;
  
  try {
    result = igGetWindowPos_nonUDT2();
    lresult = new ImVec2_Simple(result);
    return lresult;
  } catch (...) {
    return (ImVec2_Simple *)0;
  }
}


CIMGUI_API ImVec2_Simple *_igGetWindowSize_nonUDT2 () {
  ImVec2_Simple * lresult = (ImVec2_Simple *)0 ;
  ImVec2_Simple result;
  
  try {
    result = igGetWindowSize_nonUDT2();
    lresult = new ImVec2_Simple(result);
    return lresult;
  } catch (...) {
    return (ImVec2_Simple *)0;
  }
}

CIMGUI_API ImVec2_Simple *_igGetContentRegionMax_nonUDT2 () {
  ImVec2_Simple * lresult = (ImVec2_Simple *)0 ;
  ImVec2_Simple result;
  
  try {
    result = igGetContentRegionMax_nonUDT2();
    lresult = new ImVec2_Simple(result);
    return lresult;
  } catch (...) {
    return (ImVec2_Simple *)0;
  }
}

CIMGUI_API ImVec2_Simple *_igGetContentRegionAvail_nonUDT2 () {
  ImVec2_Simple * lresult = (ImVec2_Simple *)0 ;
  ImVec2_Simple result;
  
  try {
    result = igGetContentRegionAvail_nonUDT2();
    lresult = new ImVec2_Simple(result);
    return lresult;
  } catch (...) {
    return (ImVec2_Simple *)0;
  }
}

CIMGUI_API ImVec2_Simple *_igGetWindowContentRegionMin_nonUDT2 () {
  ImVec2_Simple * lresult = (ImVec2_Simple *)0 ;
  ImVec2_Simple result;
  
  try {
    result = igGetWindowContentRegionMin_nonUDT2();
    lresult = new ImVec2_Simple(result);
    return lresult;
  } catch (...) {
    return (ImVec2_Simple *)0;
  }
}

CIMGUI_API ImVec2_Simple *_igGetWindowContentRegionMax_nonUDT2 () {
  ImVec2_Simple * lresult = (ImVec2_Simple *)0 ;
  ImVec2_Simple result;
  
  try {
    result = igGetWindowContentRegionMax_nonUDT2();
    lresult = new ImVec2_Simple(result);
    return lresult;
  } catch (...) {
    return (ImVec2_Simple *)0;
  }
}

CIMGUI_API ImVec2_Simple *_igGetFontTexUvWhitePixel_nonUDT2 () {
  ImVec2_Simple * lresult = (ImVec2_Simple *)0 ;
  ImVec2_Simple result;
  
  try {
    result = igGetFontTexUvWhitePixel_nonUDT2();
    lresult = new ImVec2_Simple(result);
    return lresult;
  } catch (...) {
    return (ImVec2_Simple *)0;
  }
}

CIMGUI_API ImVec2_Simple *_igGetCursorPos_nonUDT2 () {
  ImVec2_Simple * lresult = (ImVec2_Simple *)0 ;
  ImVec2_Simple result;
  
  try {
    result = igGetCursorPos_nonUDT2();
    lresult = new ImVec2_Simple(result);
    return lresult;
  } catch (...) {
    return (ImVec2_Simple *)0;
  }
}

CIMGUI_API ImVec2_Simple *_igGetCursorStartPos_nonUDT2 () {
  ImVec2_Simple * lresult = (ImVec2_Simple *)0 ;
  ImVec2_Simple result;
  
  try {
    result = igGetCursorStartPos_nonUDT2();
    lresult = new ImVec2_Simple(result);
    return lresult;
  } catch (...) {
    return (ImVec2_Simple *)0;
  }
}

CIMGUI_API ImVec2_Simple *_igGetCursorScreenPos_nonUDT2 () {
  ImVec2_Simple * lresult = (ImVec2_Simple *)0 ;
  ImVec2_Simple result;
  
  try {
    result = igGetCursorScreenPos_nonUDT2();
    lresult = new ImVec2_Simple(result);
    return lresult;
  } catch (...) {
    return (ImVec2_Simple *)0;
  }
}

CIMGUI_API ImVec2_Simple *_igGetItemRectMin_nonUDT2 () {
  ImVec2_Simple * lresult = (ImVec2_Simple *)0 ;
  ImVec2_Simple result;
  
  try {
    result = igGetItemRectMin_nonUDT2();
    lresult = new ImVec2_Simple(result);
    return lresult;
  } catch (...) {
    return (ImVec2_Simple *)0;
  }
}

CIMGUI_API ImVec2_Simple *_igGetItemRectMax_nonUDT2 () {
  ImVec2_Simple * lresult = (ImVec2_Simple *)0 ;
  ImVec2_Simple result;
  
  try {
    result = igGetItemRectMax_nonUDT2();
    lresult = new ImVec2_Simple(result);
    return lresult;
  } catch (...) {
    return (ImVec2_Simple *)0;
  }
}

CIMGUI_API ImVec2_Simple *_igCalcTextSize_nonUDT2 (char *larg1, char *larg2, int larg3, float larg4) {
  ImVec2_Simple * lresult = (ImVec2_Simple *)0 ;
  char *arg1 = (char *) 0 ;
  char *arg2 = (char *) 0 ;
  bool arg3 ;
  float arg4 ;
  ImVec2_Simple result;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = (bool)larg3;
  arg4 = larg4;
  try {
    result = igCalcTextSize_nonUDT2((char const *)arg1,(char const *)arg2,arg3,arg4);
    lresult = new ImVec2_Simple(result);
    return lresult;
  } catch (...) {
    return (ImVec2_Simple *)0;
  }
}

CIMGUI_API ImVec4_Simple *_igColorConvertU32ToFloat4_nonUDT2 (ImU32 *larg1) {
  ImVec4_Simple * lresult = (ImVec4_Simple *)0 ;
  ImU32 arg1 ;
  ImVec4_Simple result;
  
  arg1 = *larg1;
  try {
    result = igColorConvertU32ToFloat4_nonUDT2(arg1);
    lresult = new ImVec4_Simple(result);
    return lresult;
  } catch (...) {
    return (ImVec4_Simple *)0;
  }
}

CIMGUI_API ImVec2_Simple *_igGetMousePos_nonUDT2 () {
  ImVec2_Simple * lresult = (ImVec2_Simple *)0 ;
  ImVec2_Simple result;
  
  try {
    result = igGetMousePos_nonUDT2();
    lresult = new ImVec2_Simple(result);
    return lresult;
  } catch (...) {
    return (ImVec2_Simple *)0;
  }
}

CIMGUI_API ImVec2_Simple *_igGetMousePosOnOpeningCurrentPopup_nonUDT2 () {
  ImVec2_Simple * lresult = (ImVec2_Simple *)0 ;
  ImVec2_Simple result;
  
  try {
    result = igGetMousePosOnOpeningCurrentPopup_nonUDT2();
    lresult = new ImVec2_Simple(result);
    return lresult;
  } catch (...) {
    return (ImVec2_Simple *)0;
  }
}

CIMGUI_API ImVec2_Simple *_igGetMouseDragDelta_nonUDT2 (int larg1, float larg2) {
  ImVec2_Simple * lresult = (ImVec2_Simple *)0 ;
  int arg1 ;
  float arg2 ;
  ImVec2_Simple result;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    result = igGetMouseDragDelta_nonUDT2(arg1,arg2);
    lresult = new ImVec2_Simple(result);
    return lresult;
  } catch (...) {
    return (ImVec2_Simple *)0;
  }
}

CIMGUI_API ImColor_Simple *_ImColor_HSV_nonUDT2 (ImColor *larg1, float larg2, float larg3, float larg4, float larg5) {
  ImColor_Simple * lresult = (ImColor_Simple *)0 ;
  ImColor *arg1 = (ImColor *) 0 ;
  float arg2 ;
  float arg3 ;
  float arg4 ;
  float arg5 ;
  ImColor_Simple result;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    result = ImColor_HSV_nonUDT2(arg1,arg2,arg3,arg4,arg5);
    lresult = new ImColor_Simple(result);
    return lresult;
  } catch (...) {
    return (ImColor_Simple *)0;
  }
}

CIMGUI_API ImVec2_Simple *_ImDrawList_GetClipRectMin_nonUDT2 (ImDrawList *larg1) {
  ImVec2_Simple * lresult = (ImVec2_Simple *)0 ;
  ImDrawList *arg1 = (ImDrawList *) 0 ;
  ImVec2_Simple result;
  
  arg1 = larg1;
  try {
    result = ImDrawList_GetClipRectMin_nonUDT2(arg1);
    lresult = new ImVec2_Simple(result);
    return lresult;
  } catch (...) {
    return (ImVec2_Simple *)0;
  }
}

CIMGUI_API ImVec2_Simple *_ImDrawList_GetClipRectMax_nonUDT2 (ImDrawList *larg1) {
  ImVec2_Simple * lresult = (ImVec2_Simple *)0 ;
  ImDrawList *arg1 = (ImDrawList *) 0 ;
  ImVec2_Simple result;
  
  arg1 = larg1;
  try {
    result = ImDrawList_GetClipRectMax_nonUDT2(arg1);
    lresult = new ImVec2_Simple(result);
    return lresult;
  } catch (...) {
    return (ImVec2_Simple *)0;
  }
}

CIMGUI_API ImVec2_Simple *_ImFont_CalcTextSizeA_nonUDT2 (ImFont *larg1, float larg2, float larg3, float larg4, char *larg5, char *larg6, char **larg7) {
  ImVec2_Simple * lresult = (ImVec2_Simple *)0 ;
  ImFont *arg1 = (ImFont *) 0 ;
  float arg2 ;
  float arg3 ;
  float arg4 ;
  char *arg5 = (char *) 0 ;
  char *arg6 = (char *) 0 ;
  char **arg7 = (char **) 0 ;
  ImVec2_Simple result;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = larg6;
  arg7 = larg7;
  try {
    result = ImFont_CalcTextSizeA_nonUDT2(arg1,arg2,arg3,arg4,(char const *)arg5,(char const *)arg6,(char const **)arg7);
    lresult = new ImVec2_Simple(result);
    return lresult;
  } catch (...) {
    return (ImVec2_Simple *)0;
  }
}


