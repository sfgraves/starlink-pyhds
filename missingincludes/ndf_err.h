/*
 * C error define file for facility NDF (1506)
 * Generated by the MESSGEN utility
 */

#ifndef NDF_ERROR_DEFINED
#define NDF_ERROR_DEFINED

/* access type invalid */
enum { NDF__ACCIN           	= 232950114 };	/* messid=300 */

/* access denied */
enum { NDF__ACDEN           	= 232950122 };	/* messid=301 */

/* bad pixel values not supported */
enum { NDF__BADNS           	= 232950130 };	/* messid=302 */

/* bounds matching option invalid */
enum { NDF__BMOIN           	= 232950138 };	/* messid=303 */

/* component name invalid */
enum { NDF__CNMIN           	= 232950146 };	/* messid=304 */

/* dimensions invalid */
enum { NDF__DIMIN           	= 232950154 };	/* messid=305 */

/* data component undefined */
enum { NDF__DUDEF           	= 232950162 };	/* messid=306 */

/* exceeded number of allocated slots */
enum { NDF__EXSLT           	= 232950170 };	/* messid=307 */

/* fatal internal error */
enum { NDF__FATIN           	= 232950178 };	/* messid=308 */

/* full data type invalid */
enum { NDF__FTPIN           	= 232950186 };	/* messid=309 */

/* chunk index invalid */
enum { NDF__ICHIN           	= 232950194 };	/* messid=310 */

/* NDF identifier invalid */
enum { NDF__IDINV           	= 232950202 };	/* messid=311 */

/* component is mapped */
enum { NDF__ISMAP           	= 232950210 };	/* messid=312 */

/* mapping mode invalid */
enum { NDF__MMDIN           	= 232950218 };	/* messid=313 */

/* access mode invalid */
enum { NDF__MODIN           	= 232950226 };	/* messid=314 */

/* missing call to NDF_BEGIN */
enum { NDF__MSBEG           	= 232950234 };	/* messid=315 */

/* maximum number of pixels invalid */
enum { NDF__MXPIN           	= 232950242 };	/* messid=316 */

/* number of dimensions invalid */
enum { NDF__NDMIN           	= 232950250 };	/* messid=317 */

/* negative standard deviation value(s) encountered */
enum { NDF__NGSTD           	= 232950258 };	/* messid=318 */

/* negative variance values(s) encountered */
enum { NDF__NGVAR           	= 232950266 };	/* messid=319 */

/* no component name */
enum { NDF__NOCMP           	= 232950274 };	/* messid=320 */

/* data array not present */
enum { NDF__NODAT           	= 232950282 };	/* messid=321 */

/* extension not present */
enum { NDF__NOEXT           	= 232950290 };	/* messid=322 */

/* bounds do not intersect */
enum { NDF__NOTRM           	= 232950298 };	/* messid=323 */

/* quality array not present */
enum { NDF__NOQLY           	= 232950306 };	/* messid=324 */

/* facility not yet supported */
enum { NDF__NOTSP           	= 232950314 };	/* messid=325 */

/* no data types */
enum { NDF__NOTYP           	= 232950322 };	/* messid=326 */

/* non-standard HDS component name */
enum { NDF__NSHNM           	= 232950330 };	/* messid=327 */

/* non-standard extension name */
enum { NDF__NSXNM           	= 232950338 };	/* messid=328 */

/* component not mapped */
enum { NDF__NTMAP           	= 232950346 };	/* messid=329 */

/* NDF placeholder invalid */
enum { NDF__PLINV           	= 232950354 };	/* messid=330 */

/* quality mapping invalid */
enum { NDF__QMPIN           	= 232950362 };	/* messid=331 */

/* quality component undefined */
enum { NDF__QUDEF           	= 232950370 };	/* messid=332 */

/* pixel-shift specification invalid */
enum { NDF__SFTIN           	= 232950378 };	/* messid=333 */

/* character string truncated */
enum { NDF__TRUNC           	= 232950386 };	/* messid=334 */

/* type invalid */
enum { NDF__TYPIN           	= 232950394 };	/* messid=335 */

/* processing of data type not implemented */
enum { NDF__TYPNI           	= 232950402 };	/* messid=336 */

/* variant value invalid */
enum { NDF__VARIN           	= 232950410 };	/* messid=337 */

/* variance component undefined */
enum { NDF__VUDEF           	= 232950418 };	/* messid=338 */

/* extension already exists */
enum { NDF__XISTS           	= 232950426 };	/* messid=339 */

/* extension number invalid */
enum { NDF__XNOIN           	= 232950434 };	/* messid=340 */

/* too many dimensions */
enum { NDF__XSDIM           	= 232950442 };	/* messid=341 */

/* too many extension names */
enum { NDF__XSEXT           	= 232950450 };	/* messid=342 */

/* axis number invalid */
enum { NDF__AXNIN           	= 232950458 };	/* messid=343 */

/* axis value overflow */
enum { NDF__AXOVF           	= 232950466 };	/* messid=344 */

/* bounds invalid */
enum { NDF__BNDIN           	= 232950474 };	/* messid=345 */

/* structure already in use */
enum { NDF__INUSE           	= 232950482 };	/* messid=346 */

/* no axis data present */
enum { NDF__NOAXD           	= 232950490 };	/* messid=347 */

/* extension invalid */
enum { NDF__XTNIN           	= 232950498 };	/* messid=348 */

/* axis values invalid */
enum { NDF__AXVIN           	= 232950506 };	/* messid=349 */

/* block index invalid */
enum { NDF__IBLIN           	= 232950514 };	/* messid=350 */

/* name invalid */
enum { NDF__NAMIN           	= 232950522 };	/* messid=351 */

/* tuning parameter name invalid */
enum { NDF__TPNIN           	= 232950530 };	/* messid=352 */

/* tuning parameter value invalid */
enum { NDF__TPVIN           	= 232950538 };	/* messid=353 */

/* foreign format conversion error */
enum { NDF__CVTER           	= 232950546 };	/* messid=354 */

/* foreign file deletion error */
enum { NDF__DELER           	= 232950554 };	/* messid=355 */

/* date/time specification invalid */
enum { NDF__DTMIN           	= 232950562 };	/* messid=356 */

/* error executing external command */
enum { NDF__EXCER           	= 232950570 };	/* messid=357 */

/* file name invalid */
enum { NDF__FILIN           	= 232950578 };	/* messid=358 */

/* file not found */
enum { NDF__FILNF           	= 232950586 };	/* messid=359 */

/* file protected */
enum { NDF__FILPR           	= 232950594 };	/* messid=360 */

/* foreign data format invalid */
enum { NDF__FMTIN           	= 232950602 };	/* messid=361 */

/* history extend size invalid */
enum { NDF__HEXIN           	= 232950610 };	/* messid=362 */

/* history text lines too long */
enum { NDF__HISTL           	= 232950618 };	/* messid=363 */

/* history information item name invalid */
enum { NDF__HITIN           	= 232950626 };	/* messid=364 */

/* history current record count invalid */
enum { NDF__HRCIN           	= 232950634 };	/* messid=365 */

/* history record number invalid */
enum { NDF__HRNIN           	= 232950642 };	/* messid=366 */

/* history record date/time order invalid */
enum { NDF__HRORD           	= 232950650 };	/* messid=367 */

/* history update mode component invalid */
enum { NDF__HUMIN           	= 232950658 };	/* messid=368 */

/* file enquiry error */
enum { NDF__INQER           	= 232950666 };	/* messid=369 */

/* no foreign format conversion command defined */
enum { NDF__NOCVT           	= 232950674 };	/* messid=370 */

/* no free Fortran I/O units */
enum { NDF__NOFIO           	= 232950682 };	/* messid=371 */

/* missing history creation date component */
enum { NDF__NOHCD           	= 232950690 };	/* messid=372 */

/* missing command component in history record */
enum { NDF__NOHCM           	= 232950698 };	/* messid=373 */

/* missing date component in history record */
enum { NDF__NOHDT           	= 232950706 };	/* messid=374 */

/* history component not present */
enum { NDF__NOHIS           	= 232950714 };	/* messid=375 */

/* missing history records array component */
enum { NDF__NOHRA           	= 232950722 };	/* messid=376 */

/* missing history current record component */
enum { NDF__NOHRC           	= 232950730 };	/* messid=377 */

/* missing text component in history record */
enum { NDF__NOHTX           	= 232950738 };	/* messid=378 */

/* unable to allocate memory */
enum { NDF__NOMEM           	= 232950746 };	/* messid=379 */

/* state string invalid */
enum { NDF__STAIN           	= 232950754 };	/* messid=380 */

/* too many foreign data formats */
enum { NDF__XSFMT           	= 232950762 };	/* messid=381 */

/* number of axes invalid */
enum { NDF__NAXIN           	= 232950770 };	/* messid=382 */

/* missing world coordinate system data component */
enum { NDF__NOWDT           	= 232950778 };	/* messid=383 */

/* world coordinate system data too short */
enum { NDF__WCDTS           	= 232950786 };	/* messid=384 */

/* world coordinate system information invalid */
enum { NDF__WCSIN           	= 232950794 };	/* messid=385 */

/* command line argument count invalid */
enum { NDF__ARCIN           	= 232950802 };	/* messid=386 */

/* command line argument invalid */
enum { NDF__ARGIN           	= 232950810 };	/* messid=387 */

/* date/time string invalid */
enum { NDF__BDTIM           	= 232950818 };	/* messid=388 */

/* wrong array storage form */
enum { NDF__BADSF           	= 232950826 };	/* messid=389 */

/* zero scale factor supplied */
enum { NDF__ZERSC           	= 232950834 };	/* messid=390 */

/* incompatible data types for compression */
enum { NDF__BADCP           	= 232950842 };	/* messid=391 */

/* attempt to change a read-only property of a compressed array */
enum { NDF__CMPAC           	= 232950850 };	/* messid=392 */

/* attempt to create a section containing too many pixels */
enum { NDF__BGSEC           	= 232950858 };	/* messid=393 */

/* attempt to cancel a parameter that is not associuated with an NDF */
enum { NDF__NOPAR           	= 232950866 };	/* messid=394 */

/* error writing a line of WCS information to an NDF */
enum { NDF__WRAST           	= 232950874 };	/* messid=395 */

/* error initialising thread data in the NDF library */
enum { NDF__INERR           	= 232950882 };	/* messid=396 */

/* Too many NDFs in use at once */
enum { NDF__XSNDF           	= 232950890 };	/* messid=397 */

/* Array dimensions exceed limits of the 32 bit API */
enum { NDF__TOOBIG          	= 232950898 };	/* messid=398 */

/* The supplied NDF is not locked by the current thread */
enum { NDF__THREAD          	= 232950906 };	/* messid=399 */


#endif	/* NDF_ERROR_DEFINED */
