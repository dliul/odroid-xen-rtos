/**
 * @ brief:
 *
 * Memory API header. Declarations of memory management functions.
 *
 * @ author: Ivan Pavic (@dumpram)
 * 
 * @ year: 2017
 *
 */
#ifndef _MEMORY_H
#define _MEMORY_H

extern uint32_t phy_to_virt_offset;

#define p2v_translate(adr) ((void *)((void *)adr - phy_to_virt_offset))

void memory_api_init(uint32_t p2v_offset);

#endif /*----------  End of header file memory.h  ----------*/
