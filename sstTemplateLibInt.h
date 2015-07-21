/**********************************************************************
 *
 * sstTemplateLib - cpp template library for sst
 * Hosted on github
 *
 * Copyright (C) 2015 Uli Rehr
 *
 * This is free software; you can redistribute and/or modify it under
 * the terms of the GNU Lesser General Public Licence as published
 * by the Free Software Foundation. 
 * See the COPYING file for more information.
 *
 **********************************************************************/
// sstTemplateLibInt.h   08.07.15  Re.   08.07.15  Re.
//
// Intern Datastructures and Prototypes for system "sstTemplateLib"
//

#ifndef   _SST_TEMPLATE_LIB_INT_HEADER
#define   _SST_TEMPLATE_LIB_INT_HEADER

/**
 * @defgroup sstTemplateIntLib
 * cpp template library for intern sst
 */


// Defines ---------------------------------------------------------------------

#define dFINFO_NAM_LEN   12    /**< Extended Explanation for this Define @ingroup sstTemplateIntLib */

/**
 * @brief Extended explanation for define
 * @ingroup sstTemplateIntLib
 */
#define dKODE_MIN

// Structures and Classes ------------------------------------------------------

//==============================================================================
/**
* @brief Definition Class sstTestBaseInternCls
*
* template for sst base class <BR>
*
* Changed: 08.07.15  Re.
*
* @ingroup sstTemplateIntLib
*
* @author Re.
*
* @date 08.07.15
*/
// ----------------------------------------------------------------------------
class sstTestBaseInternCls
{
  public:   // Public functions
     sstTestBaseInternCls();  // Constructor
    //~sstTestBaseCls();  // Destructor
//==============================================================================
/**
* @brief Shortstory
*
* @param iKey [in] For the moment 0
*
* @return Errorstate
*
* @retval   = 0: OK
* @retval   < 0: Unspecified Error
*/
// ----------------------------------------------------------------------------
    // Func_1(int iKey);
// ----------------------------------------------------------------------------
  private:  // Private functions
  int Dum;        /**< Dummy */
};
//-----------------------------------------------------------------------------


//------------------------------------------------------------------------------

// Prototypen datei.c ----------------------------------------------------------

//==============================================================================
/**
* @brief Shortstory
*
* iStat = Blanko ( iKey);
*
* More Comment
*
* Changed: 09.07.15  Re.
*
* @ingroup sstTemplateIntLib
*
* @param iKey [in] For the moment 0
*
* @return Errorstate
*
* @retval   = 0: OK
* @retval   < 0: Unspecified Error
*
* @author Re.
*
* @date 09.07.15
*/
//------------------------------------------------------------------------------
int Blanko ( int iKey);
//------------------------------------------------------------------------------

#endif

// --------------------------------------------------------------- File End ----
