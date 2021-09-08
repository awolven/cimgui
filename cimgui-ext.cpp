#include "./imgui/imgui.h"
#include "cimgui.h"

#include "./imgui/imgui_internal.h"

CIMGUI_API int igSizeOfImGuiIO() {
	return sizeof(ImGuiIO);
}
CIMGUI_API int igSizeOfImGuiPlatformIO() {
	return sizeof(ImGuiPlatformIO);
}
CIMGUI_API int igSizeOfImGuiViewport() {
	return sizeof(ImGuiViewport);
}

void(*PlatformGetWindowPosLispCallback)(ImGuiViewport*, int*, int*) = 0;

void(*PlatformSetWindowPosLispCallback)(ImGuiViewport*, float, float) = 0;

void(*PlatformGetWindowSizeLispCallback)(ImGuiViewport*, int*, int*) = 0;

void(*PlatformSetWindowSizeLispCallback)(ImGuiViewport*, float, float) = 0;

void(*PlatformSetImeInputPosLispCallback)(ImGuiViewport*, float, float) = 0;

void(*RendererSetWindowSizeLispCallback)(ImGuiViewport*, float, float) = 0;

ImVec2 GetWindowPosCCallback(ImGuiViewport* vp) {
	int x, y;
	(*PlatformGetWindowPosLispCallback)(vp, &x, &y);
	ImVec2 coord;
	coord.x = (float)x;
	coord.y = (float)y;
	return coord;
}
CIMGUI_API void install_Platform_GetWindowPos_callback(ImGuiPlatformIO *platform_io, void(*lisp_callback)(ImGuiViewport*, int*, int*)) {
	::PlatformGetWindowPosLispCallback = lisp_callback;
	platform_io->Platform_GetWindowPos = GetWindowPosCCallback;
}

void SetWindowPosCCallback(ImGuiViewport* vp, ImVec2 coord) {
	(*PlatformSetWindowPosLispCallback)(vp, coord.x, coord.y);
}

CIMGUI_API void install_Platform_SetWindowPos_callback(ImGuiPlatformIO *platform_io, void(*lisp_callback)(ImGuiViewport*, float, float)) {
	::PlatformSetWindowPosLispCallback = lisp_callback;
	platform_io->Platform_SetWindowPos = SetWindowPosCCallback;
}

ImVec2 GetWindowSizeCCallback(ImGuiViewport* vp) {
	int w, h;
	(*PlatformGetWindowSizeLispCallback)(vp, &w, &h);
	ImVec2 coord;
	coord.x = (float)w;
	coord.y = (float)h;
	return coord;
}
CIMGUI_API void install_Platform_GetWindowSize_callback(ImGuiPlatformIO *platform_io, void(*lisp_callback)(ImGuiViewport*, int*, int*)) {
	::PlatformGetWindowSizeLispCallback = lisp_callback;
	platform_io->Platform_GetWindowSize = GetWindowSizeCCallback;
}

void SetWindowSizeCCallback(ImGuiViewport* vp, ImVec2 coord) {
	(*PlatformSetWindowSizeLispCallback)(vp, coord.x, coord.y);
}

CIMGUI_API void install_Platform_SetWindowSize_callback(ImGuiPlatformIO *platform_io, void(*lisp_callback)(ImGuiViewport*, float, float)) {
	::PlatformSetWindowSizeLispCallback = lisp_callback;
	platform_io->Platform_SetWindowSize = SetWindowSizeCCallback;
}

void SetImeInputPosCCallback(ImGuiViewport* vp, ImVec2 coord) {
	(*PlatformSetImeInputPosLispCallback)(vp, coord.x, coord.y);
}

CIMGUI_API void install_Platform_SetImeInputPos_callback(ImGuiPlatformIO *platform_io, void(*lisp_callback)(ImGuiViewport*, float, float)) {
	::PlatformSetImeInputPosLispCallback = lisp_callback;
	platform_io->Platform_SetImeInputPos = SetImeInputPosCCallback;
}

void RendererSetWindowSizeCCallback(ImGuiViewport* vp, ImVec2 coord) {
	(*RendererSetWindowSizeLispCallback)(vp, coord.x, coord.y);
}

CIMGUI_API void install_Renderer_SetWindowSize_callback(ImGuiPlatformIO *platform_io, void(*lisp_callback)(ImGuiViewport*, float, float)) {
	::RendererSetWindowSizeLispCallback = lisp_callback;
	platform_io->Renderer_SetWindowSize = RendererSetWindowSizeCCallback;
}
CIMGUI_API void ImVector_ImGuiPlatformMonitor_push_back(ImVector<ImGuiPlatformMonitor>* self, ImGuiPlatformMonitor *v)
{
	return self->push_back(*v);
}
CIMGUI_API ImFont* igGetDefaultFont () {
  return ImGui::GetDefaultFont();
}

CIMGUI_API void igSetCurrentFont (ImFont* font) {
  return ImGui::SetCurrentFont(font);
}

CIMGUI_API ImGuiPlatformIO* igGetPlatformIO () {
  return &ImGui::GetPlatformIO();
}

CIMGUI_API ImGuiViewport* igGetMainViewport () {
  return ImGui::GetMainViewport();
}
CIMGUI_API void igDestroyPlatformWindows() {
	ImGui::DestroyPlatformWindows();
}
CIMGUI_API void igUpdatePlatformWindows() {
	ImGui::UpdatePlatformWindows();
}
CIMGUI_API void igRenderPlatformWindowsDefault() {
	ImGui::RenderPlatformWindowsDefault();
}
CIMGUI_API ImGuiViewport* igFindViewportByPlatformHandle(void * platform_handle) {
	return ImGui::FindViewportByPlatformHandle(platform_handle);
}
typedef struct ImVector_ImGuiPlatformMonitor
{
  int Size;
  int Capacity;
  ImGuiPlatformMonitor* Data;
} ImVector_ImGuiPlatformMonitor;

CIMGUI_API void ImVector_ImGuiPlatformMonitor_resize
(ImVector<ImGuiPlatformMonitor>* self,int new_size)
{
    return self->resize(new_size);
}

CIMGUI_API int ImVector_ImGuiViewport_size(const ImVector<ImGuiViewport>* self)
{
    return self->Size;
}
CIMGUI_API ImGuiWindow* igGetCurrentWindow() {
  ImGuiWindow* window = ImGui::GetCurrentWindow();
  return window;
}
CIMGUI_API ImGuiID igGetWindowID(ImGuiWindow* window, const char* name) {
  ImGuiID id = window->GetID(name);
  return id;
}

CIMGUI_API bool igBeginPopupModal2(const char* name, float x, float y, float pivot_x, float pivot_y, bool* p_open, ImGuiWindowFlags flags) {
  ImGuiContext& g = *GImGui;
  ImGuiWindow* window = g.CurrentWindow;
  const ImGuiID id = window->GetID(name);
  if (!ImGui::IsPopupOpen(id, ImGuiPopupFlags_None))
    {
      g.NextWindowData.ClearFlags();
      return false;
    }
  ImVec2 pos = ImVec2(x, y);
  ImGui::SetNextWindowPos(pos, ImGuiCond_Appearing, ImVec2(pivot_x, pivot_y));

  flags |= ImGuiWindowFlags_Popup | ImGuiWindowFlags_Modal | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoDocking;
  const bool is_open = ImGui::Begin(name, p_open, flags);
  if (!is_open || (p_open && !*p_open)) // NB: is_open can be 'false' when the popup is completely clipped (e.g. zero size display)
    {
      ImGui::EndPopup();
      if (is_open)
		  ImGui::ClosePopupToLevel(g.BeginPopupStack.Size, true);
      return false;
    }
  return is_open;
}

CIMGUI_API bool igBeginChild (char *larg1, ImVec2 const *larg2, bool larg3, ImGuiWindowFlags *larg4) {
  bool lresult = (bool)0 ;
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
    result = (bool)ImGui::BeginChild((char const *)arg1,arg2,arg3,arg4);
    lresult = (bool)result;
    return lresult;
  } catch (...) {
    return (bool)0;
  }
}

CIMGUI_API void igSetNextWindowPos (ImVec2 const *larg1, ImGuiCond arg2, ImVec2 const *larg3) {
  ImVec2 arg1 ;
  ImVec2 arg3 ;
  
  arg1 = *larg1;
  arg3 = *larg3;
  try {
    ImGui::SetNextWindowPos(arg1,arg2,arg3);
    
  } catch (...) {
    
  }
}

CIMGUI_API void igSetNextWindowSize (ImVec2 const *larg1, ImGuiCond arg2) {
  ImVec2 arg1 ;
  
  arg1 = *larg1;
  try {
    ImGui::SetNextWindowSize(arg1,arg2);
    
  } catch (...) {
    
  }
}

CIMGUI_API void igSetNextWindowSizeConstraints (ImVec2 const *larg1, ImVec2 const *larg2, ImGuiSizeCallback *larg3, void *larg4) {
  ImVec2 arg1 ;
  ImVec2 arg2 ;
  ImGuiSizeCallback arg3 ;
  void *arg4 = (void *) 0 ;
  
  arg1 = *larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = larg4;
  try {
    ImGui::SetNextWindowSizeConstraints(arg1,arg2,arg3,arg4);
    
  } catch (...) {
    
  }
}

CIMGUI_API void igSetNextWindowContentSize (ImVec2 const *larg1) {
  ImVec2 arg1 ;
  
  arg1 = *larg1;
  try {
    ImGui::SetNextWindowContentSize(arg1);
    
  } catch (...) {
    
  }
}

CIMGUI_API void igSetWindowPosVec2 (ImVec2 const *larg1, ImGuiCond *larg2) {
  ImVec2 arg1 ;
  ImGuiCond arg2 ;
  
  arg1 = *larg1;
  arg2 = *larg2;
  try {
    ImGui::SetWindowPos(arg1,arg2);
    
  } catch (...) {
    
  }
}

CIMGUI_API void igSetWindowSizeVec2 (ImVec2 const *larg1, ImGuiCond *larg2) {
  ImVec2 arg1 ;
  ImGuiCond arg2 ;
  
  arg1 = *larg1;
  arg2 = *larg2;
  try {
    ImGui::SetWindowSize(arg1,arg2);
    
  } catch (...) {
    
  }
}

CIMGUI_API void igSetWindowPosStr (char *larg1, ImVec2 const *larg2, ImGuiCond *larg3) {
  char *arg1 = (char *) 0 ;
  ImVec2 arg2 ;
  ImGuiCond arg3 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  try {
    ImGui::SetWindowPos((char const *)arg1,arg2,arg3);
    
  } catch (...) {
    
  }
}

CIMGUI_API void igSetWindowSizeStr (char *larg1, ImVec2 const *larg2, ImGuiCond *larg3) {
  char *arg1 = (char *) 0 ;
  ImVec2 arg2 ;
  ImGuiCond arg3 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  try {
    ImGui::SetWindowSize((char const *)arg1,arg2,arg3);
    
  } catch (...) {
    
  }
}

/*
CIMGUI_API void igPushStyleColor (ImGuiCol *larg1, ImVec4 const *larg2) {
  ImGuiCol arg1 ;
  ImVec4 arg2 ;
  
  arg1 = *larg1;
  arg2 = *larg2;
  try {
    ImGui::PushStyleColor(arg1,arg2);
    
  } catch (...) {
    
  }
}
*/
CIMGUI_API void igPushStyleColor (ImGuiCol index, float r, float g, float b, float a) {
  ImVec4 color = ImVec4(r, g, b, a);
  ImGui::PushStyleColor(index, color);
}

CIMGUI_API void igPushStyleVarVec2 (ImGuiStyleVar *larg1, ImVec2 const *larg2) {
  ImGuiStyleVar arg1 ;
  ImVec2 arg2 ;
  
  arg1 = *larg1;
  arg2 = *larg2;
  try {
    ImGui::PushStyleVar(arg1,arg2);
    
  } catch (...) {
    
  }
}

CIMGUI_API void igSetCursorPos (ImVec2 const *larg1) {
  ImVec2 arg1 ;
  
  arg1 = *larg1;
  try {
    ImGui::SetCursorPos(arg1);
    
  } catch (...) {
    
  }
}

CIMGUI_API void igSetCursorScreenPos (ImVec2 const *larg1) {
  ImVec2 arg1 ;
  
  arg1 = *larg1;
  try {
    ImGui::SetCursorScreenPos(arg1);
    
  } catch (...) {
    
  }
}

CIMGUI_API void igTextColored (ImVec4 const *larg1, char *larg2) {
  ImVec4 arg1 ;
  char *arg2 = (char *) 0 ;
  void *arg3 = 0 ;
  
  arg1 = *larg1;
  arg2 = larg2;
  try {
    ImGui::TextColored(arg1,(char const *)arg2,arg3);
    
  } catch (...) {
    
  }
}
/*
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
*/
CIMGUI_API bool igButton (char *larg1, ImVec2 const *larg2) {
  bool lresult = (bool)0 ;
  char *arg1 = (char *) 0 ;
  ImVec2 arg2 ;
  bool result;
  
  arg1 = larg1;
  arg2 = *larg2;
  try {
    result = (bool)ImGui::Button((char const *)arg1,arg2);
    lresult = (bool)result;
    return lresult;
  } catch (...) {
    return (bool)0;
  }
}

CIMGUI_API bool igInvisibleButton (char *larg1, ImVec2 const *larg2) {
  bool lresult = (bool)0 ;
  char *arg1 = (char *) 0 ;
  ImVec2 arg2 ;
  bool result;
  
  arg1 = larg1;
  arg2 = *larg2;
  try {
    result = (bool)ImGui::InvisibleButton((char const *)arg1,arg2);
    lresult = (bool)result;
    return lresult;
  } catch (...) {
    return (bool)0;
  }
}

CIMGUI_API void igImage (ImTextureID *larg1, ImVec2 const *larg2, ImVec2 const *larg3, ImVec2 const *larg4, ImVec4 const *larg5, ImVec4 const *larg6) {
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
    ImGui::Image(arg1,arg2,arg3,arg4,arg5,arg6);
    
  } catch (...) {
    
  }
}

CIMGUI_API bool igImageButton (ImTextureID *larg1, ImVec2 const *larg2, ImVec2 const *larg3, ImVec2 const *larg4, int larg5, ImVec4 const *larg6, ImVec4 const *larg7) {
  bool lresult = (bool)0 ;
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
    result = (bool)ImGui::ImageButton(arg1,arg2,arg3,arg4,arg5,arg6,arg7);
    lresult = (bool)result;
    return lresult;
  } catch (...) {
    return (bool)0;
  }
}

CIMGUI_API void igPlotLines (char *larg1, float *larg2, int larg3, int larg4, char *larg5, float larg6, float larg7, ImVec2 *larg8, int larg9) {
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
    ImGui::PlotLines((char const *)arg1,(float const *)arg2,arg3,arg4,(char const *)arg5,arg6,arg7,arg8,arg9);
    
  } catch (...) {
    
  }
}

CIMGUI_API void igPlotLinesFnPtr (char *larg1, float (*larg2)(void *,int), void *larg3, int larg4, int larg5, char *larg6, float larg7, float larg8, ImVec2 *larg9) {
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
    ImGui::PlotLines((char const *)arg1,arg2,arg3,arg4,arg5,(char const *)arg6,arg7,arg8,arg9);
    
  } catch (...) {
    
  }
}

CIMGUI_API void igPlotHistogramFloatPtr (char *larg1, float *larg2, int larg3, int larg4, char *larg5, float larg6, float larg7, ImVec2 *larg8, int larg9) {
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
    ImGui::PlotHistogram((char const *)arg1,(float const *)arg2,arg3,arg4,(char const *)arg5,arg6,arg7,arg8,arg9);
    
  } catch (...) {
    
  }
}

CIMGUI_API void igPlotHistogramFnPtr (char *larg1, float (*larg2)(void *,int), void *larg3, int larg4, int larg5, char *larg6, float larg7, float larg8, ImVec2 *larg9) {
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
    ImGui::PlotHistogram((char const *)arg1,arg2,arg3,arg4,arg5,(char const *)arg6,arg7,arg8,arg9);
    
  } catch (...) {
    
  }
}

CIMGUI_API bool igInputTextMultiline (char *larg1, char *larg2, size_t larg3, ImVec2 const *larg4, ImGuiInputTextFlags larg5, ImGuiInputTextCallback larg6, void *larg7) {
  bool lresult = (bool)0 ;
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
  arg3 = larg3;
  arg4 = *larg4;
  arg5 = larg5;
  arg6 = larg6;
  arg7 = larg7;
  try {
    result = (bool)ImGui::InputTextMultiline((char const *)arg1,arg2,arg3,arg4,arg5,arg6,arg7);
    lresult = (bool)result;
    return lresult;
  } catch (...) {
    return (bool)0;
  }
}

CIMGUI_API bool igVSliderFloat (char *larg1, ImVec2 const *larg2, float *larg3, float larg4, float larg5, char *larg6, float larg7) {
  bool lresult = (bool)0 ;
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
    result = (bool)ImGui::VSliderFloat((char const *)arg1,arg2,arg3,arg4,arg5,(char const *)arg6,arg7);
    lresult = (bool)result;
    return lresult;
  } catch (...) {
    return (bool)0;
  }
}

CIMGUI_API bool igVSliderInt (char *larg1, ImVec2 const *larg2, int *larg3, int larg4, int larg5, char *larg6) {
  bool lresult = (bool)0 ;
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
    result = (bool)ImGui::VSliderInt((char const *)arg1,arg2,arg3,arg4,arg5,(char const *)arg6);
    lresult = (bool)result;
    return lresult;
  } catch (...) {
    return (bool)0;
  }
}

CIMGUI_API bool igColorButton (char *larg1, ImVec4 const *larg2, ImGuiColorEditFlags *larg3, ImVec2 *larg4) {
  bool lresult = (bool)0 ;
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
    result = (bool)ImGui::ColorButton((char const *)arg1,arg2,arg3,arg4);
    lresult = (bool)result;
    return lresult;
  } catch (...) {
    return (bool)0;
  }
}

CIMGUI_API bool igSelectable (char *larg1, bool larg2, ImGuiSelectableFlags *larg3, ImVec2 const *larg4) {
  bool lresult = (bool)0 ;
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
    result = (bool)ImGui::Selectable((char const *)arg1,arg2,arg3,arg4);
    lresult = (bool)result;
    return lresult;
  } catch (...) {
    return (bool)0;
  }
}

CIMGUI_API bool igSelectableBoolPtr (char *larg1, bool *larg2, ImGuiSelectableFlags *larg3, ImVec2 const *larg4) {
  bool lresult = (bool)0 ;
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
    result = (bool)ImGui::Selectable((char const *)arg1,arg2,arg3,arg4);
    lresult = (bool)result;
    return lresult;
  } catch (...) {
    return (bool)0;
  }
}

CIMGUI_API bool igListBox0(const char* label,
				int* current_item,
				const char* const items[],
				int items_count,
				int height_in_items) {
  
  return ImGui::ListBox(label, current_item, items, items_count, height_in_items);
}

CIMGUI_API bool igListBox1(const char* label,
				int* current_item,
				bool(*items_getter)(void* data,int idx,const char** out_text),
				void* data,
				int items_count,
				int height_in_items) {
  
  return ImGui::ListBox(label, current_item, items_getter, data, items_count, height_in_items);
}

CIMGUI_API bool igBeginListBox0(const char* label, int items_count, int height_in_items) {

  return ImGui::ListBoxHeader(label, items_count, height_in_items);
}

CIMGUI_API bool igBeginListBox1 (char *label, float *size_x, float *size_y) {
  bool lresult = (bool)0 ;
  char *arg1 = (char *) 0 ;
  ImVec2 arg2 ;
  bool result;
  
  arg1 = label;
  arg2 = ImVec2(*size_x, *size_y);
  try {
    result = (bool)ImGui::ListBoxHeader((char const *)arg1,arg2);
    lresult = (bool)result;
    return lresult;
  } catch (...) {
    return (bool)0;
  }
}

CIMGUI_API void igEndListBox() {
  return ImGui::ListBoxFooter();
}

CIMGUI_API void igPushClipRect (ImVec2 const *larg1, ImVec2 const *larg2, bool larg3) {
  ImVec2 arg1 ;
  ImVec2 arg2 ;
  bool arg3 ;
  
  arg1 = *larg1;
  arg2 = *larg2;
  arg3 = (bool)larg3;
  try {
    ImGui::PushClipRect(arg1,arg2,arg3);
    
  } catch (...) {
    
  }
}

CIMGUI_API bool igIsRectVisible (ImVec2 const *larg1) {
  bool lresult = (bool)0 ;
  ImVec2 arg1 ;
  bool result;
  
  arg1 = *larg1;
  try {
    result = (bool)ImGui::IsRectVisible(arg1);
    lresult = (bool)result;
    return lresult;
  } catch (...) {
    return (bool)0;
  }
}

CIMGUI_API bool igBeginChildFrame (ImGuiID *larg1, ImVec2 const *larg2, ImGuiWindowFlags *larg3) {
  bool lresult = (bool)0 ;
  ImGuiID arg1 ;
  ImVec2 arg2 ;
  ImGuiWindowFlags arg3 ;
  bool result;
  
  arg1 = *larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  try {
    result = (bool)ImGui::BeginChildFrame(arg1,arg2,arg3);
    lresult = (bool)result;
    return lresult;
  } catch (...) {
    return (bool)0;
  }
}

CIMGUI_API ImU32 *igColorConvertFloat4ToU32 (ImVec4 const *larg1) {
  ImU32 * lresult = (ImU32 *)0 ;
  ImVec4 arg1 ;
  ImU32 result;
  
  arg1 = *larg1;
  try {
    result = ImGui::ColorConvertFloat4ToU32(arg1);
    lresult = new ImU32(result);
    return lresult;
  } catch (...) {
    return (ImU32 *)0;
  }
}

CIMGUI_API bool igIsMouseHoveringRect (ImVec2 const *larg1, ImVec2 const *larg2, bool larg3) {
  bool lresult = (bool)0 ;
  ImVec2 arg1 ;
  ImVec2 arg2 ;
  bool arg3 ;
  bool result;
  
  arg1 = *larg1;
  arg2 = *larg2;
  arg3 = (bool)larg3;
  try {
    result = (bool)ImGui::IsMouseHoveringRect(arg1,arg2,arg3);
    lresult = (bool)result;
    return lresult;
  } catch (...) {
    return (bool)0;
  }
}

CIMGUI_API void ImDrawList_PushClipRect (ImDrawList *larg1, ImVec2 *larg2, ImVec2 *larg3, bool larg4) {
  ImDrawList *arg1 = (ImDrawList *) 0 ;
  ImVec2 arg2 ;
  ImVec2 arg3 ;
  bool arg4 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = (bool)larg4;
  try {
    arg1->PushClipRect(arg2,arg3,arg4);
    
  } catch (...) {
    
  }
}

CIMGUI_API void ImDrawList_AddLine (ImDrawList *larg1, ImVec2 const *larg2, ImVec2 const *larg3, ImU32 *larg4, float larg5) {
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
    arg1->AddLine(arg2,arg3,arg4,arg5);
    
  } catch (...) {
    
  }
}


CIMGUI_API void ImDrawList_AddRect (ImDrawList *self, float p_min_x, float p_min_y, float p_max_x, float p_max_y, ImU32 col, float rounding, int rounding_corners, float thickness) {

  ImVec2 p_min = ImVec2(p_min_x, p_min_y) ;
  ImVec2 p_max = ImVec2(p_max_x, p_max_y) ;

  try {
    self->AddRect(p_min, p_max, col, rounding, rounding_corners, thickness);
    
  } catch (...) {
    
  }
}

CIMGUI_API void ImDrawList_AddRectFilled (ImDrawList *larg1, ImVec2 const *larg2, ImVec2 const *larg3, ImU32 *larg4, float larg5, int larg6) {
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
    arg1->AddRectFilled(arg2,arg3,arg4,arg5,arg6);
    
  } catch (...) {
    
  }
}


CIMGUI_API void ImDrawList_AddRectFilledMultiColor (ImDrawList *larg1, ImVec2 const *larg2, ImVec2 const *larg3, ImU32 *larg4, ImU32 *larg5, ImU32 *larg6, ImU32 *larg7) {
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
    arg1->AddRectFilledMultiColor(arg2,arg3,arg4,arg5,arg6,arg7);
    
  } catch (...) {
    
  }
}


CIMGUI_API void ImDrawList_AddQuad (ImDrawList *larg1, ImVec2 const *larg2, ImVec2 const *larg3, ImVec2 const *larg4, ImVec2 const *larg5, ImU32 *larg6, float larg7) {
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
    arg1->AddQuad(arg2,arg3,arg4,arg5,arg6,arg7);
    
  } catch (...) {
    
  }
}


CIMGUI_API void ImDrawList_AddQuadFilled (ImDrawList *larg1, ImVec2 const *larg2, ImVec2 const *larg3, ImVec2 const *larg4, ImVec2 const *larg5, ImU32 *larg6) {
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
    arg1->AddQuadFilled(arg2,arg3,arg4,arg5,arg6);
    
  } catch (...) {
    
  }
}


CIMGUI_API void ImDrawListAddTriangle (ImDrawList *larg1, ImVec2 const *larg2, ImVec2 const *larg3, ImVec2 const *larg4, ImU32 *larg5, float larg6) {
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
    arg1->AddTriangle(arg2,arg3,arg4,arg5,arg6);
    
  } catch (...) {
    
  }
}


CIMGUI_API void ImDrawList_AddTriangleFilled (ImDrawList *larg1, ImVec2 const *larg2, ImVec2 const *larg3, ImVec2 const *larg4, ImU32 *larg5) {
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
    arg1->AddTriangleFilled(arg2,arg3,arg4,arg5);
    
  } catch (...) {
    
  }
}


CIMGUI_API void ImDrawList_AddCircle (ImDrawList *larg1, ImVec2 const *larg2, float larg3, ImU32 *larg4, int larg5, float larg6) {
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
    arg1->AddCircle(arg2,arg3,arg4,arg5,arg6);
    
  } catch (...) {
    
  }
}


CIMGUI_API void ImDrawList_AddCircleFilled (ImDrawList *larg1, ImVec2 const *larg2, float larg3, ImU32 *larg4, int larg5) {
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
    arg1->AddCircleFilled(arg2,arg3,arg4,arg5);
    
  } catch (...) {
    
  }
}


CIMGUI_API void ImDrawList_AddText (ImDrawList *larg1, ImVec2 const *larg2, ImU32 *larg3, char *larg4, char *larg5) {
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
    arg1->AddText(arg2,arg3,(char const *)arg4,(char const *)arg5);
    
  } catch (...) {
    
  }
}


CIMGUI_API void ImDrawList_AddTextFontPtr (ImDrawList *larg1, ImFont *larg2, float larg3, ImVec2 const *larg4, ImU32 *larg5, char *larg6, char *larg7, float larg8, ImVec4 *larg9) {
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
    arg1->AddText((ImFont const *)arg2,arg3,arg4,arg5,(char const *)arg6,(char const *)arg7,arg8,(ImVec4 const *)arg9);
    
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
    result = ImGui::GetWindowPos();
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
    result = ImGui::GetWindowSize();
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
    result = ImGui::GetContentRegionMax();
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
    result = ImGui::GetContentRegionAvail();
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
    result = ImGui::GetWindowContentRegionMin();
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
    result = ImGui::GetWindowContentRegionMax();
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
    result = ImGui::GetFontTexUvWhitePixel();
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
    result = ImGui::GetCursorPos();
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
    result = ImGui::GetCursorStartPos();
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
    result = ImGui::GetCursorScreenPos();
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
    result = ImGui::GetItemRectMin();
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
    result = ImGui::GetItemRectMax();
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
    result = ImGui::GetItemRectSize();
    lresult = new ImVec2(result);
    return lresult;
  } catch (...) {
    return (ImVec2 *)0;
  }
}

CIMGUI_API ImVec2 *_igCalcTextSize (char *larg1, char *larg2, bool larg3, float larg4) {
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
    result = ImGui::CalcTextSize((char const *)arg1,(char const *)arg2,arg3,arg4);
    lresult = new ImVec2(result);
    return lresult;
  } catch (...) {
    return (ImVec2 *)0;
  }
}

CIMGUI_API void igCalcTextSize (char *larg1, char *larg2, bool larg3, float larg4, float &x, float &y) {
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
    result = ImGui::CalcTextSize((char const *)arg1,(char const *)arg2,arg3,arg4);
    x = result.x;
    y = result.y;
    return;
  } catch (...) {
    x = 0.0;
    y = 0.0;      
    return;
  }
}

CIMGUI_API ImVec4 *_igColorConvertU32ToFloat4 (ImU32 *larg1) {
  ImVec4 * lresult = (ImVec4 *)0 ;
  ImU32 arg1 ;
  ImVec4 result;
  
  arg1 = *larg1;
  try {
    result = ImGui::ColorConvertU32ToFloat4(arg1);
    lresult = new ImVec4(result);
    return lresult;
  } catch (...) {
    return (ImVec4 *)0;
  }
}
CIMGUI_API ImU32 igGetColorU32Vec4 (float r, float g, float b, float a)
{
	ImVec4 col = ImVec4(r, g, b, a);
	return ImGui::GetColorU32(col);
}

CIMGUI_API ImVec2 *_igGetMousePos () {
  ImVec2 * lresult = (ImVec2 *)0 ;
  ImVec2 result;
  
  try {
    result = ImGui::GetMousePos();
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
    result = ImGui::GetMousePosOnOpeningCurrentPopup();
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
    result = ImGui::GetMouseDragDelta(arg1,arg2);
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
    result = arg1->HSV(arg2,arg3,arg4,arg5);
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
    result = arg1->GetClipRectMin();
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
    result = arg1->GetClipRectMax();
    lresult = new ImVec2(result);
    return lresult;
  } catch (...) {
    return (ImVec2 *)0;
  }
}

CIMGUI_API void ImFont_RenderChar(ImFont* self, ImDrawList* draw_list, float size, float pos_x, float pos_y, ImU32 col, ImWchar c) {
  ImVec2 pos = ImVec2(pos_x, pos_y);

  ImRect bb(ImVec2(pos_x, pos_y),ImVec2(pos_x + FLT_MAX, pos_y + ImGui::GetTextLineHeight()));
  ImGui::ItemSize(ImVec2(size, size), 0.0f);
  ImGui::ItemAdd(bb, 0);
  self->RenderChar(draw_list,size,pos,col,c);
  

}

CIMGUI_API void igRenderText (ImFont* font, float font_size, 
	float pos_x, float pos_y, 
	float r, float g, float b, float a,
	const char* text, const char* text_end,
	unsigned int start_index, unsigned int end_index)
{
	if (text != NULL)
	{
		ImGuiWindow* window = ImGui::GetCurrentWindow();
		
		if (text_end == NULL)
			text_end = text + strlen(text);

		ImVec2 pos = ImVec2(window->Pos.x + pos_x, window->Pos.y + pos_y);

		int length = ImTextCountCharsFromUtf8(text, text_end);
		if (end_index == UINT_MAX) 
			end_index = (unsigned int)length;
		
		ImVec2 size = ImGui::CalcTextSize(text, text_end);

		ImGui::ItemSize(size, 0.0f);
		ImRect bb(pos, ImVec2(pos.x + size.x, pos.y + size.y));
		float offset_x = 0.0f;		
		for (unsigned int i = 0; i < end_index; i++) {
			unsigned int c = 0;
			text += ImTextCharFromUtf8(&c, text, text_end);
			if (i >= start_index) {  // don't render char if it's below start, but still pull utf8 chars out to keep string square
				if (c > 0 && c <= 0xFFFF) {
					float advance = font->GetCharAdvance((ImWchar)c);
					font->RenderChar(window->DrawList, font_size, ImVec2(pos.x + offset_x, pos.y), ImGui::GetColorU32(ImVec4(r, g, b, a)), (ImWchar)c);
					offset_x += advance;
				}
			}
		}
		ImGui::ItemAdd(bb, 0);
	}
}

CIMGUI_API void ImFont_RenderText(ImFont* self,ImDrawList* draw_list,
				  float size, float pos_x, float pos_y, ImU32 col,
				  float clip_rect_x, float clip_rect_y, float clip_rect_w, float clip_rect_h,
				  const char* text_begin, const char* text_end, float wrap_width, bool cpu_fine_clip) {
  
  ImVec2 pos = ImVec2(pos_x, pos_y);
  ImVec4 clip_rect = ImVec4(clip_rect_x, clip_rect_y, clip_rect_w, clip_rect_h);
  self->RenderText(draw_list, size, pos, col, clip_rect, text_begin, text_end, wrap_width, cpu_fine_clip);
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
    result = arg1->CalcTextSizeA(arg2,arg3,arg4,(char const *)arg5,(char const *)arg6,(char const **)arg7);
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

CIMGUI_API ImVec2_Simple *_igCalcTextSize_nonUDT2 (char *larg1, char *larg2, bool larg3, float larg4) {
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

