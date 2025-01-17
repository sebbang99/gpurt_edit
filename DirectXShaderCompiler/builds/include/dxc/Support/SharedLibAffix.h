///////////////////////////////////////////////////////////////////////////////
//                                                                           //
// SharedLibAffix.inc                                                        //
// Copyright (C) Microsoft Corporation. All rights reserved.                 //
// This file is distributed under the University of Illinois Open Source     //
// License. See LICENSE.TXT for details.                                     //
//                                                                           //
// Defines shared library prefixes and suffixes for the build platform.      //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////


#pragma once

#define CMAKE_SHARED_LIBRARY_PREFIX "lib"
#define CMAKE_SHARED_LIBRARY_SUFFIX ".so"

#ifndef CMAKE_SHARED_LIBRARY_PREFIX
#define CMAKE_SHARED_LIBRARY_PREFIX
#endif

#ifndef CMAKE_SHARED_LIBRARY_SUFFIX
#define CMAKE_SHARED_LIBRARY_SUFFIX
#endif
