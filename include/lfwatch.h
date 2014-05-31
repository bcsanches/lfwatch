#include <ostream>
#include "lfwatch_linux.h"
#include "lfwatch_win32.h"

namespace lfw {
#ifdef __linux
typedef WatchLinux Watcher;
#elif defined(__WIN32)
typedef WatchWin32 Watcher;
#endif
}
