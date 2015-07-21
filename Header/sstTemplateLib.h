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
// sstTemplateLib.h   08.07.15  Re.   08.07.15  Re.
//
// Datastructures and Prototypes for system "sstTemplateLib"
//

#ifndef   _SST_TEMPLATE_LIB_HEADER
#define   _SST_TEMPLATE_LIB_HEADER

/**
 * @defgroup sstTemplateLib
 * cpp template library for sst
 */

// Defines ---------------------------------------------------------------------

#define dFINFO_NAM_LEN   12    /**< Extended Explanation for this Define @ingroup sstTemplateLib */

/**
 * @brief Extended explanation for define
 * @ingroup sstTemplateLib
 */
#define dKODE_MIN

// forward declaration ---------------------------------------------------------

class sstTestBaseInternCls;

// Structures and Classes ------------------------------------------------------

//==============================================================================
/**
* @brief Definition Structure Dum_stru
*
* More Comment <BR>
* More Comment <BR>
* More Comment <BR>
* More Comment <BR>
*
* Changed: 09.07.15  Re.
*
* @ingroup sstTemplateLib
*
* @author Re.
*
* @date 09.07.15
*/
// ----------------------------------------------------------------------------
struct _Dum_stru
{
  int Dum;        /**< Dummy */
};
typedef struct _Dum_stru Dum_stru;

//==============================================================================
/**
* @brief Definition Class sstTestBaseCls
*
* template for sst base class <BR>
*
* Changed: 09.07.15  Re.
*
* @ingroup sstTemplateLib
*
* @author Re.
*
* @date 09.07.15
*/
// ----------------------------------------------------------------------------
class sstTestBaseCls
{
  public:   // Public functions
     sstTestBaseCls();  // Constructor
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
//==============================================================================
/**
* @brief Definition Class sstTestBaseCls
*
* template for sst base class <BR>
*
* Changed: 09.07.15  Re.
*
* @ingroup sstTemplateLib
*
* @author Re.
*
* @date 09.07.15
*/
// ----------------------------------------------------------------------------
class sstTestInterfaceCls
{
  public:   // Public functions
     sstTestInterfaceCls();  // Constructor
    ~sstTestInterfaceCls();  // Destructor
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
  sstTestBaseInternCls *poTestIntern;   /**< Pointer to intern object */
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
* @ingroup sstTemplateLib
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
