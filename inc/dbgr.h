/**
 * @file	dbgr.h
 * @brief	dbgr.h
 * @version	v.1
 * @date	02/11/2017 16:05:34
 * @author	Anonrate
 * @copyright	
 * 	\parblock
 * 		GNU General Public License
 *
 * 		Copyright (C) 2017 Anonrate
 *
 * 		This program is free software: you can redistribute it and/or modify 
 * 		it under the terms of the GNU General Public License as published by 
 * 		the Free Software Foundation, either version 3 of the License, or 
 * 		(at your option) any later version.
 *
 * 		This program is distributed in the hope that it will be useful, 
 * 		but WITHOUT ANY WARRANTY; without even the implied warranty of 
 * 		MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
 * 		GNU General Public License for more details.
 *
 * 		You should have received a copy of the GNU General Public License
 * 		along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * 	\endparblock
 */

#ifndef DBGR_H
/**
 * @brief   Include guard for 'dbgr.h'
 * @details 
 *  If this macro function is to be used, please implement the following in
 *      your code.
 *  \code{.c}
 *    #define DEBUG 1
 *  \endcode
 */
#define DBGR_H

/**
 * @brief     debug out
 * @details   Output information specified to by \p fmt to \c stdout.
 * @param[in] fmt A string containing the debug message.
 */
#define DEBUG_OUT(fmt) { if (DEBUG) { fprintf(stdout, fmt); } }

/**
 * @brief     debug out format
 * @details   Output information specified to by \p fmt to \c stdout.
 * @param[in] fmt A string format containing the debug message.
 * @note      There is also an argument paramater that is to be used in
 *              conjunction with \p fmt.
 */
#define DEBUG_OUTF(fmt, ...)                              \
    { if (DEBUG) { fprintf(stdout, fmt, __VA_ARGS__); } }
#endif  /* DBGR_H */
