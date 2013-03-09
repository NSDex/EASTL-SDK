/*
 *  EASTL.h
 *  EASTL
 *
 *  Created on 3/8/13.
 *  Copyright (c) 2013 by NSDex. All rights reserved.
 */

#ifndef EASTL_H
#define EASTL_H

#ifdef __cplusplus

///////////////////////////////////////////////////////////////////////////////
// Xcode sets up the DEBUG include to signify debug builds.  Use that value
// to configure EASTL_DEBUG.
///////////////////////////////////////////////////////////////////////////////
#ifndef EASTL_DEBUG
#   if defined(EA_DEBUG) || defined(_DEBUG) || (defined(DEBUG) && DEBUG)
#       define EASTL_DEBUG 1
#   else
#       define EASTL_DEBUG 0
#   endif
#endif

///////////////////////////////////////////////////////////////////////////////
// Due to the way framework headers work, the path used by some of the headers
// in this framework to include the EABase headers won't be valid to clients
// of this framework.  The solution is define EASTL_EABASE_DISABLED and
// include the headers here using a path that will be vaid for framework
// clients.
///////////////////////////////////////////////////////////////////////////////
#include <EASTL/EABase/config/eacompiler.h>
#include <EASTL/EABase/config/eacompilertraits.h>
#include <EASTL/EABase/config/eaplatform.h>
#include <EASTL/EABase/eabase.h>
#include <EASTL/EABase/earesult.h>
#define EASTL_EABASE_DISABLED 1

#endif

#endif // Header include guard
