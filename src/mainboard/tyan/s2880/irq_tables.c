/* This file was generated by getpir.c, do not modify! 
   (but if you do, please run checkpir on it to verify)
   Contains the IRQ Routing Table dumped directly from your memory , wich BIOS sets up

   Documentation at : http://www.microsoft.com/hwdev/busbios/PCIIRQ.HTM
*/

#include <arch/pirq_routing.h>

const struct irq_routing_table intel_irq_routing_table = {
	PIRQ_SIGNATURE, /* u32 signature */
	PIRQ_VERSION,   /* u16 version   */
	32+16*13,        /* there can be total 13 devices on the bus */
	0,           /* Where the interrupt router lies (bus) */
	0x3b,           /* Where the interrupt router lies (dev) */
	0,         /* IRQs devoted exclusively to PCI usage */
	0x1022,         /* Vendor */
	0x746b,         /* Device */
	0,         /* Crap (miniport) */
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, /* u8 rfu[11] */
	0x37,         /*  u8 checksum , this hase to set to some value that would give 0 after the sum of all bytes for this structure (including checksum) */
	{
		{0,0x38, {{0x1, 0xdef8}, {0x2, 0xdef8}, {0x3, 0xdef8}, {0x4, 0xdef8}}, 0, 0},
		{0x3,0, {{0, 0}, {0, 0}, {0, 0}, {0x4, 0xdef8}}, 0, 0},
		{0x2,0x18, {{0x1, 0xdef8}, {0x2, 0xdef8}, {0x3, 0xdef8}, {0x4, 0xdef8}}, 0x1, 0},
		{0x2,0x30, {{0x2, 0xdef8}, {0x3, 0xdef8}, {0x4, 0xdef8}, {0x1, 0xdef8}}, 0x2, 0},
		{0x1,0x40, {{0x4, 0xdef8}, {0x1, 0xdef8}, {0x2, 0xdef8}, {0x3, 0xdef8}}, 0x3, 0},
		{0x1,0x38, {{0x3, 0xdef8}, {0x4, 0xdef8}, {0x1, 0xdef8}, {0x2, 0xdef8}}, 0x4, 0},
		{0x3,0x30, {{0x3, 0xdef8}, {0, 0}, {0, 0}, {0, 0}}, 0, 0},
		{0x3,0x20, {{0x1, 0xdef8}, {0x2, 0xdef8}, {0x3, 0xdef8}, {0x4, 0xdef8}}, 0x5, 0},
		{0x1,0x48, {{0x1, 0xdef8}, {0x2, 0xdef8}, {0, 0}, {0, 0}}, 0, 0},
		{0x1,0x50, {{0x1, 0xdef8}, {0x2, 0xdef8}, {0, 0}, {0, 0}}, 0, 0},
		{0x3,0x28, {{0x2, 0xdef8}, {0, 0}, {0, 0}, {0, 0}}, 0, 0},
		{0x2,0x20, {{0x2, 0xdef8}, {0x3, 0xdef8}, {0x4, 0xdef8}, {0x1, 0xdef8}}, 0x6, 0},
		{0x2,0x28, {{0x3, 0xdef8}, {0x4, 0xdef8}, {0x1, 0xdef8}, {0x2, 0xdef8}}, 0x7, 0},
	}
};
