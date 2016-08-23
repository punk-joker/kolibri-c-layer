format coff
use32                                   ; Tell compiler to use 32 bit instructions
	
section '.flat' code			; Keep this line before includes or GCC messes up call addresses

;include 'struct.inc'
include '../../../programs/proc32.inc'
include '../../../programs/macros.inc'
purge section,mov,add,sub

include '../../../programs/dll.inc'
	
public init_libcrash as '_kolibri_libcrash_init'
	
;;; Returns 0 on success. -1 on failure.

proc init_libcrash
	mcall 68,11
	stdcall dll.Load, @IMPORT
	ret
endp	
	
@IMPORT:

library lib_libcrash,               'libcrash.obj'

import  lib_libcrash, \
		crash_hash           , 'crash_hash'    , \
        crash_bin2hex        , 'crash_bin2hex'          

public crash_hash         as  'crash_hash' 
public crash_bin2hex      as  'crash_bin2hex'       
