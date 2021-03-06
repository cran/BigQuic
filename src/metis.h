#ifndef _METIS_H_
#define _METIS_H_


/*
 * Copyright 1997, Regents of the University of Minnesota
 *
 * metis.h
 *
 * This file includes all necessary header files
 *
 * Started 8/27/94
 * George
 *
 * $Id: metis.h,v 1.1 1998/11/27 17:59:21 karypis Exp $
 *
 * MODIFIED
 * Khalid B. Kunji
 *
 */


#include <stdio.h>
#ifdef __STDC__
#include <stdlib.h>
#else
#include <malloc.h>
#endif
#include <strings.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdarg.h>
#include <time.h>

#ifdef DMALLOC
#include <dmalloc.h>
#endif

#include "defs.h"
#include "struct.h"
#include "macros.h"
#include "rename.h"
#include "proto.h"
#include "pcg_basic.h"


#if defined(_WIN32) && !defined(__CYGWIN__)
#define random	rand
#define drand48() ((double)rand()/RAND_MAX)
#define srand48(n) srand((n));
#endif


#endif
