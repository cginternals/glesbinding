
#include <glesbinding/getProcAddress.h>

#include <cassert>

#ifdef SYSTEM_WINDOWS
    #include <string>
    #include <tchar.h>
    #include <windows.h>
#else
    #include <dlfcn.h>
#endif


namespace glesbinding {

#ifdef SYSTEM_WINDOWS

ProcAddress getProcAddress(const char * name)
{
    static auto module = LoadLibrary(_T("libGLESv2.DLL"));

	// Prevent static linking of opengl32
	static auto wglGetProcAddress_ = reinterpret_cast<void * (__stdcall *)(const char *)>((uintptr_t) ::GetProcAddress(module, "wglGetProcAddress"));
	assert(wglGetProcAddress_ != nullptr);

	auto procAddress = wglGetProcAddress_(name);
	if (procAddress != nullptr)
	{
		return reinterpret_cast<ProcAddress>(procAddress);
	}

	procAddress = (void *) ::GetProcAddress(module, name);
    return reinterpret_cast<ProcAddress>(procAddress);
}

#else

ProcAddress getProcAddress(const char * name)
{
#ifdef SYSTEM_DARWIN
    static auto library = nullptr; // TODO: implement
#else
    static auto library = dlopen("libGLESv2.so", RTLD_LAZY);
#endif

    assert(library != nullptr);

    auto symbol = dlsym(library, name);

    return reinterpret_cast<ProcAddress>(symbol);
}

#endif


} // namespace glesbinding
