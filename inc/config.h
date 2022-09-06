#ifndef __CONFIG_H__
#define __CONFIG_H__

/* Global configuration options for PicoMemcard */
#define TUD_MOUNT_TIMEOUT	3000			// max time (in ms) before giving up on MSC mode (USB) and starting memcard simulation
#define MSC_WRITE_SYNC_TIMEOUT 1 * 1000		// time (in ms) expired since last MSC write before exporting RAM disk into LFS
#define SWITCH_MEMCARD_TIMEOUT 10 * 1000		// time (in ms) expired since last memcard activity to switch to non-exploit memcard
#define IDLE_AUTOSYNC_TIMEOUT 5 * 1000		// time (in ms) the memory card must be inactive before automatic sync from RAM to LFS
#define MEMCARD_FILE_NAME	"memcard.mcr"	// name of memory card file image
#define FREEPSXBOOT_FILE_NAME	"freepsx.mcr"

/* Board targeted by build */
#define PICO
//#define RP2040ZERO


/* PSX Interface Pinout */
#ifdef PICO
	#define PIN_DAT 5
	#define PIN_CMD PIN_DAT + 1		// must be immediately after PIN_DAT
	#define PIN_SEL PIN_CMD + 1		// must be immediately after PIN_CMD
	#define PIN_CLK PIN_SEL + 1		// must be immediately after PIN_SEL
	#define PIN_ACK 9
#endif

#ifdef RP2040ZERO
	#define PIN_DAT 9
	#define PIN_CMD PIN_DAT + 1		// must be immediately after PIN_DAT
	#define PIN_SEL PIN_CMD + 1		// must be immediately after PIN_CMD
	#define PIN_CLK PIN_SEL + 1		// must be immediately after PIN_SEL
	#define PIN_ACK 13
#endif

#endif