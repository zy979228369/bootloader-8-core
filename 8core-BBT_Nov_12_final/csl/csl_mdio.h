/**  
 * @file csl_mdio.h
 *
 * @brief 
 *  Header file for functional layer of CSL MDIO. 
 *
 *  It contains the various enumerations, structure definitions and function 
 *  declarations
 *
 *  \par
 *  ============================================================================
 *  @n   (C) Copyright 2009, Texas Instruments, Inc.
 * 
 *  Redistribution and use in source and binary forms, with or without 
 *  modification, are permitted provided that the following conditions 
 *  are met:
 *
 *    Redistributions of source code must retain the above copyright 
 *    notice, this list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the 
 *    documentation and/or other materials provided with the   
 *    distribution.
 *
 *    Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT 
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
*/

/** ============================================================================ 
 *
 * @defgroup CSL_MDIO_API MDIO
 *
 * @section Introduction
 *
 * @subsection xxx Overview
 *
 * @subsection References
 *    -# Ethernet Media Access Controller User Guide
 * ============================================================================
 */ 

#ifndef _CSL_MDIO_H_
#define _CSL_MDIO_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <ti/csl/soc.h>
#include <ti/csl/csl.h>
#include <ti/csl/cslr_mdio.h>

/**
@defgroup CSL_MDIO_SYMBOL  MDIO Symbols Defined
@ingroup CSL_MDIO_API
*/
/**
@defgroup CSL_MDIO_DATASTRUCT  MDIO Data Structures
@ingroup CSL_MDIO_API
*/
/**
@defgroup CSL_MDIO_FUNCTION  MDIO Functions
@ingroup CSL_MDIO_API
*/
/**
@defgroup CSL_MDIO_ENUM MDIO Enumerated Data Types
@ingroup CSL_MDIO_API
*/
    
/**
@addtogroup CSL_MDIO_SYMBOL
@{
*/

/**
@}
*/

/** @addtogroup CSL_MDIO_DATASTRUCT
 @{ */

/** Constants for passing parameters to the functions.
 */
/** @brief Pointer to the MDIO overlay registers */
#define     hMdioRegs           ((CSL_Mdio_Regs *) (CSL_PA_SS_CFG_REGS + 0x00090300))

/** @brief      
 *
 *  Holds the MDIO peripheral's version info. 
 */        
typedef struct {
	/**  Minor revision value */	
	Uint32      revMin;

	/**  Major revision value */	
	Uint32      revMaj;

	/**  Identifies the type of peripheral */	
	Uint32      modId;
}CSL_MDIO_VERSION;

/** @brief      
 *
 *  Holds the MDIO User Access Register
 *  contents.
 */        
typedef struct {
	/**  Data bits */	
	Uint16      data;

	/**  Phy Device Address */	
	Uint32      phyAddr;

	/**  Register Address */	
	Uint32      regAddr;

	/**  Acknowledgment bit */	
	Uint32      ack;

	/**  GO bit */	
	Uint32      go;
}CSL_MDIO_USERACCESS;

/** @brief      
 *
 *  Holds the MDIO User Phy Select Register
 *  contents.
 */        
typedef struct {
	/**  Link Status determination select bit. Always reads '0' */	
	Uint16      linkSel;

	/**  Link Status Change Interrupt Enable bit */	
	Uint32      bLinkIntEnable;

	/**  Phy Device Address */	
	Uint32      phyAddr;

}CSL_MDIO_USERPHYSEL;
        

/**
@}
*/


/** @addtogroup CSL_MDIO_FUNCTION
 @{ */

/**
@}
*/

#ifdef __cplusplus
}
#endif

#endif /* _CSL_MDIO_H */                        