#include "decaf_assert.h"
#include "platform.h"
#include "platform_stacktrace.h"

#if defined(PLATFORM_POSIX)  || defined(__FreeBSD__)
#include <stdexcept>

namespace platform
{

StackTrace * captureStackTrace()
{
   return nullptr;
}

void freeStackTrace(StackTrace *)
{
}

std::string
formatStackTrace(StackTrace *trace)
{
   return { };
}

void printStackTrace(StackTrace *)
{
   decaf_abort("POSIX support for stack tracing is not implemented");
}

} // namespace platform

#endif
