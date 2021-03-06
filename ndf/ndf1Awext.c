#include "sae_par.h"
#include "dat_par.h"
#include "ndf1.h"
#include "ndf_err.h"
#include <string.h>
#include "star/util.h"
#include "mers.h"

void ndf1Awext( const char *type, int upper, hdsdim pix0, double width,
                hdsdim lbnd, hdsdim ubnd, void *pntr, int *status ){
/*
*+
*  Name:
*     ndf1Awext

*  Purpose:
*     Assign extrapolated values to an axis width array.

*  Synopsis:
*     void ndf1Awext( const char *type, int upper, hdsdim pix0, double width,
*                     hdsdim lbnd, hdsdim ubnd, void *pntr, int *status )

*  Description:
*     This function assigns extrapolated values to an axis width array of
*     any numeric type. It is intended for assigning values to those axis
*     width array elements which are not present in an actual NDF data
*     structure, but which are encountered when accessing the axis
*     component of a section which is a super-set of the NDF.  The
*     extrapolated value assigned is a constant, which is supplied as an
*     parameter.

*  Parameters:
*     type
*        Pointer to a null terminated string holding the numeric type of
*        the axis width array; a primitive numeric type string (case
*        insensitive).
*     upper
*        If a non-zero value is given for this parameter, then
*        extrapolation will be performed towards higher array index values.
*        Otherwise extrapolation will be towards lower array index values.
*     pix0
*        The index of the first "unknown" pixel to be assigned a value. If
*        "upper" is non-zero, this will be the index of the pixel following
*        the last one whose value is known. If "upper" is zero, it will be
*        the index of the pixel before the first one whose value is known.
*     width
*        The extrapolated width value to be assigned.
*     lbnd
*        The lower bound of the axis width array.
*     ubnd
*        The upper bound of the axis width array.
*     pntr
*        Pointer to the axis width array to be extrapolated, whose size
*        should be equal to "ubnd" - "lbnd" + 1.
*     *status
*        The global status.

*  Notes:
*     -  If overflow occurs because the extrapolated value cannot be
*     represented using the array's numeric type, then an error will be
*     reported and "status" set.

*  Copyright:
*     Copyright (C) 2018 East Asian Observatory
*     All rights reserved.

*  Licence:
*     This program is free software; you can redistribute it and/or modify
*     it under the terms of the GNU General Public License as published by
*     the Free Software Foundation; either version 2 of the License, or (at
*     your option) any later version.
*
*     This program is distributed in the hope that it will be useful,but
*     WITHOUT ANY WARRANTY; without even the implied warranty of
*     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
*     General Public License for more details.
*
*     You should have received a copy of the GNU General Public License
*     along with this program; if not, write to the Free Software
*     Foundation, Inc., 51 Franklin Street,Fifth Floor, Boston, MA
*     02110-1301, USA

*  Authors:
*     RFWS: R.F. Warren-Smith (STARLINK)
*     DSB: David S. Berry (EAO)

*  History:
*     3-APR-2019 (DSB):
*        Original version, based on equivalent Fortran function by RFWS.

*-
*/

/* Local Variables: */
   char utype[ NDF__SZTYP + 1 ];   /* Upper case type string */
   int typok;            /* Whether type string is valid */

/* Check inherited global status. */
   if( *status != SAI__OK ) return;

/* If the supplied string is not too long, convert it to upper case. */
   typok =  ( strlen(type) < sizeof( utype ) );
   if( typok ) {
      astChrCase( type, utype, 1, sizeof( utype ) );

/* Test the type string against each valid value in turn, calling the
   appropriate function to extrapolate the array. */

/* ...byte. */
      if( !strcmp( utype, "_BYTE" ) ) {
         ndf1AweB( upper, pix0, width, lbnd, ubnd, pntr, status );

/* ...unsigned byte. */
      } else if( !strcmp( utype, "_UBYTE" ) ) {
         ndf1AweUB( upper, pix0, width, lbnd, ubnd, pntr, status );

/* ...double precision. */
      } else if( !strcmp( utype, "_DOUBLE" ) ) {
         ndf1AweD( upper, pix0, width, lbnd, ubnd, pntr, status );

/* ...integer. */
      } else if( !strcmp( utype, "_INTEGER" ) ) {
         ndf1AweI( upper, pix0, width, lbnd, ubnd, pntr, status );

/* ...real. */
      } else if( !strcmp( utype, "_REAL" ) ) {
         ndf1AweF( upper, pix0, width, lbnd, ubnd, pntr, status );

/* ...word. */
      } else if( !strcmp( utype, "_WORD" ) ) {
         ndf1AweW( upper, pix0, width, lbnd, ubnd, pntr, status );

/* ...unsigned word. */
      } else if( !strcmp( utype, "_UWORD" ) ) {
         ndf1AweUW( upper, pix0, width, lbnd, ubnd, pntr, status );

/* ...64-bit integer. */
      } else if( !strcmp( utype, "_INT64" ) ) {
         ndf1AweK( upper, pix0, width, lbnd, ubnd, pntr, status );

/* Note if the type string was not recognised. */
      } else {
         typok = 0;
      }
   }

/* If the type string was invalid, then report an error. */
   if( *status == SAI__OK ) {
      if( !typok ) {
         *status = NDF__FATIN;
         msgSetc( "ROUTINE", "ndf1Awext" );
         msgSetc( "BADTYPE", type );
         errRep( " ", "Function ^ROUTINE called with an invalid TYPE "
                 "parameter of '^BADTYPE' (internal programming error).",
                 status );
      }
   }

/* Call error tracing function and exit. */
   if( *status != SAI__OK ) ndf1Trace( "ndf1Awext", status );

}

