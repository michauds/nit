/* This C header file is generated by NIT to compile modules and programs that requires ./analysis/inline_methods. */
#ifndef analysis___inline_methods_sep
#define analysis___inline_methods_sep
#include "icode._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_analysis___inline_methods___InlineMethodVisitor[];
extern const char LOCATE_analysis___inline_methods[];
extern const int SFT_analysis___inline_methods[];
#define ID_analysis___inline_methods___InlineMethodVisitor (SFT_analysis___inline_methods[0])
#define COLOR_analysis___inline_methods___InlineMethodVisitor (SFT_analysis___inline_methods[1])
#define ATTR_analysis___inline_methods___InlineMethodVisitor____pass(recv) ATTR(recv, (SFT_analysis___inline_methods[2] + 0))
#define ATTR_analysis___inline_methods___InlineMethodVisitor____icb(recv) ATTR(recv, (SFT_analysis___inline_methods[2] + 1))
#define INIT_TABLE_POS_analysis___inline_methods___InlineMethodVisitor (SFT_analysis___inline_methods[3] + 0)
#define CALL_SUPER_analysis___inline_methods___InlineMethodVisitor___visit_icode(recv) ((analysis___inline_methods___InlineMethodVisitor___visit_icode_t)CALL((recv), (SFT_analysis___inline_methods[3] + 1)))
#define CALL_analysis___inline_methods___InlineMethodVisitor___init(recv) ((analysis___inline_methods___InlineMethodVisitor___init_t)CALL((recv), (SFT_analysis___inline_methods[3] + 2)))
#define CALL_analysis___inline_methods___ICall___is_inlinable(recv) ((analysis___inline_methods___ICall___is_inlinable_t)CALL((recv), (SFT_analysis___inline_methods[4] + 0)))
#define CALL_analysis___inline_methods___IRoutine___inline_methods(recv) ((analysis___inline_methods___IRoutine___inline_methods_t)CALL((recv), (SFT_analysis___inline_methods[5] + 0)))
void analysis___inline_methods___InlineMethodVisitor___visit_icode(val_t p0, val_t p1);
typedef void (*analysis___inline_methods___InlineMethodVisitor___visit_icode_t)(val_t p0, val_t p1);
void analysis___inline_methods___InlineMethodVisitor___init(val_t p0, val_t p1, val_t p2, int* init_table);
typedef void (*analysis___inline_methods___InlineMethodVisitor___init_t)(val_t p0, val_t p1, val_t p2, int* init_table);
val_t NEW_InlineMethodVisitor_analysis___inline_methods___InlineMethodVisitor___init(val_t p0, val_t p1);
val_t analysis___inline_methods___ICall___is_inlinable(val_t p0);
typedef val_t (*analysis___inline_methods___ICall___is_inlinable_t)(val_t p0);
val_t NEW_ICall_icode___icode_base___ICall___init(val_t p0, val_t p1);
void analysis___inline_methods___IRoutine___inline_methods(val_t p0, val_t p1);
typedef void (*analysis___inline_methods___IRoutine___inline_methods_t)(val_t p0, val_t p1);
val_t NEW_IRoutine_icode___icode_base___IRoutine___init(val_t p0, val_t p1);
#endif
