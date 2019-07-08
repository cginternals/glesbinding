
#pragma once


#include <glesbinding/AbstractState.h>


namespace glesbinding
{


/**
*  @brief
*    The State class represents the configuration of an OpenGL function for one thread.
*    This includes the driver function pointer (is allowed to differ between contexts) and the callback mask
*/
class GLESBINDING_API State : public AbstractState
{
public:
    /**
    *  @brief
    *    Constructor
    */
    State() = default;

    /**
    *  @brief
    *    Resolve a function and save its address
    *
    *  @param[in] name
    *    Name of the function to be resolved
    */
    virtual void resolve(const char * name) override;
};


} // namespace glesbinding
