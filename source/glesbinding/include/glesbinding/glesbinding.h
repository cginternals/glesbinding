
#pragma once


#include <set>
#include <vector>
#include <functional>

#include <glesbinding/glesbinding_api.h>
#include <glesbinding/glesbinding_features.h>

#include <glesbinding/ContextHandle.h>
#include <glesbinding/CallbackMask.h>
#include <glesbinding/ProcAddress.h>


namespace glesbinding
{


class AbstractFunction;
class FunctionCall;


using SimpleFunctionCallback = std::function<void(const AbstractFunction &)>;
using FunctionCallback = std::function<void(const FunctionCall &)>;
using FunctionLogCallback = std::function<void(FunctionCall *)>;
using ContextSwitchCallback = std::function<void(ContextHandle)>;   ///< The signature of the context switch callback

GLESBINDING_API void initialize(glesbinding::GetProcAddress functionPointerResolver, bool resolveFunctions = true);
GLESBINDING_API void registerAdditionalFunction(AbstractFunction * function);
GLESBINDING_API ProcAddress resolveFunction(const char * name);
GLESBINDING_API void resolveFunctions();

GLESBINDING_API void setCallbackMask(CallbackMask mask);
GLESBINDING_API void setCallbackMaskExcept(CallbackMask mask, const std::set<std::string> & blackList);
GLESBINDING_API void addCallbackMask(CallbackMask mask);
GLESBINDING_API void addCallbackMaskExcept(CallbackMask mask, const std::set<std::string> & blackList);
GLESBINDING_API void removeCallbackMask(CallbackMask mask);
GLESBINDING_API void removeCallbackMaskExcept(CallbackMask mask, const std::set<std::string> & blackList);
GLESBINDING_API SimpleFunctionCallback unresolvedCallback();
GLESBINDING_API void setUnresolvedCallback(SimpleFunctionCallback callback);
GLESBINDING_API FunctionCallback beforeCallback();
GLESBINDING_API void setBeforeCallback(FunctionCallback callback);
GLESBINDING_API FunctionCallback afterCallback();
GLESBINDING_API void setAfterCallback(FunctionCallback callback);
GLESBINDING_API FunctionLogCallback logCallback();
GLESBINDING_API void setLogCallback(FunctionLogCallback callback);

GLESBINDING_API void addContextSwitchCallback(ContextSwitchCallback callback);
GLESBINDING_API void initialize(ContextHandle context, glesbinding::GetProcAddress functionPointerResolver, bool useContext = true, bool resolveFunctions = true);
GLESBINDING_API void useCurrentContext();
GLESBINDING_API void useContext(ContextHandle context);
GLESBINDING_API void releaseCurrentContext();
GLESBINDING_API void releaseContext(ContextHandle context);


} // namespace glesbinding
