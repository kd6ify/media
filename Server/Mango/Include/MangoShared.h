#ifndef __MANGOSHARED_H__
#define __MANGOSHARED_H__

#define SWAP32(x) (SWAP16((unsigned short)((x) >> 16)) | (SWAP16((unsigned shor\
t)((x) & 0xffff)) << 16))
#define SWAP16(x) ((unsigned char)((x) >> 8) | ((unsigned char)((x) & 0xff) << \
8))

#define MANGOBIOS_FOREVER (-1)
#define MANGOBIOS_POLL (0)

#define MANGOBIOS_INPUT (1)
#define MANGOBIOS_OUTPUT (2)

typedef enum
{
	MANGOCARD_SEAGULL_PMC = 0x3C4D0000,
	MANGOCARD_SEAGULL_PCI,
	MANGOCARD_ASB,
	MANGOCARD_LARK,
	MANGOCARD_SEAGULL_PC104_PLUS,
	MANGOCARD_RAVENX,
	MANGOCARD_RAVEND,
	MANGOCARD_RAVENV,
	MANGOCARD_HAWK,
	MANGOCARD_RAVENC,
	MANGOCARD_RAVENHX,
	MANGOCARD_BLUEJAY,
	MANGOCARD_RTM,
	MANGOCARD_RAVENPH,
	MANGOCARD_BLUEJAY_RTM,
	MANGOCARD_RAVENN,
	MANGOCARD_RAVENHX104,
	MANGOCARD_PHOENIXHX,
	MANGOCARD_RAVENX2,
	MANGOCARD_RAVENM
} MANGOCARD_card_t;

/* Information on capabilities of each board. */
/* Note: Each board needs a distinct .._BOARD_ID value. */

/* Raven-HX */
#define RAVEN_HX_BOARD_ID					0
#define RAVEN_HX_NUM_CAMS_BOARD				1
#define RAVEN_HX_NUM_CONNECTORS_CAM			2
#define RAVEN_HX_NUM_CAMS_DSP				1
#define RAVEN_HX_NUM_AUDIO_INPUTS			1
#define RAVEN_HX_NUM_AUDIO_CHANS_PER_INPUT	2
#define RAVEN_HX_NUM_TTL_IN					0
#define RAVEN_HX_NUM_TTL_OUT				0
/* Raven-X (each DSP is treated as a separate board) */
#define RAVEN_X_BOARD_ID					1
#define RAVEN_X_NUM_CAMS_BOARD				1
#define RAVEN_X_NUM_CONNECTORS_CAM			2
#define RAVEN_X_NUM_CAMS_DSP				1
#define RAVEN_X_NUM_AUDIO_INPUTS			2
#define RAVEN_X_NUM_AUDIO_CHANS_PER_INPUT	2
#define RAVEN_X_NUM_TTL_IN					0
#define RAVEN_X_NUM_TTL_OUT					0
/* Raven-PH */
#define RAVEN_PH_BOARD_ID					2
#define RAVEN_PH_NUM_CAMS_BOARD				1
#define RAVEN_PH_NUM_CONNECTORS_CAM			2
#define RAVEN_PH_NUM_CAMS_DSP				1
#define RAVEN_PH_NUM_AUDIO_INPUTS			1
#define RAVEN_PH_NUM_AUDIO_CHANS_PER_INPUT	2
#define RAVEN_PH_NUM_TTL_IN					0
#define RAVEN_PH_NUM_TTL_OUT				5
/* Raven-HX104 */
#define RAVEN_HX104_BOARD_ID				3
#define RAVEN_HX104_NUM_CAMS_BOARD			2
#define RAVEN_HX104_NUM_CONNECTORS_CAM		2
#define RAVEN_HX104_NUM_CAMS_DSP			2
#define RAVEN_HX104_NUM_AUDIO_INPUTS		1
#define RAVEN_HX104_NUM_AUDIO_CHANS_PER_INPUT	2
#define RAVEN_HX104_NUM_TTL_IN				0
#define RAVEN_HX104_NUM_TTL_OUT				0
/* Raven-D */
#define RAVEN_D_BOARD_ID					4
#define RAVEN_D_NUM_CAMS_BOARD				4
#define RAVEN_D_NUM_CONNECTORS_CAM			1
#define RAVEN_D_NUM_CAMS_DSP				2
#define RAVEN_D_NUM_AUDIO_INPUTS			2
#define RAVEN_D_NUM_AUDIO_CHANS_PER_INPUT	1
#define RAVEN_D_NUM_TTL_IN					8
#define RAVEN_D_NUM_TTL_OUT					4
/* Phoenix-HX */
#define PHOENIX_HX_BOARD_ID					5
#define PHOENIX_HX_NUM_CAMS_BOARD			2
#define PHOENIX_HX_NUM_CONNECTORS_CAM		2
#define PHOENIX_HX_NUM_CAMS_DSP				2
#define PHOENIX_HX_NUM_AUDIO_INPUTS			1
#define PHOENIX_HX_NUM_AUDIO_CHANS_PER_INPUT	2
#define PHOENIX_HX_NUM_TTL_IN				0
#define PHOENIX_HX_NUM_TTL_OUT				0
/* Raven-X2 */
#define RAVEN_X2_BOARD_ID					6
#define RAVEN_X2_NUM_CAMS_BOARD				4
#define RAVEN_X2_NUM_CONNECTORS_CAM			1
#define RAVEN_X2_NUM_CAMS_DSP				2
#define RAVEN_X2_NUM_AUDIO_INPUTS			1
#define RAVEN_X2_NUM_AUDIO_CHANS_PER_INPUT	2
#define RAVEN_X2_NUM_TTL_IN					8
#define RAVEN_X2_NUM_TTL_OUT				8
/* Raven-M */
#define RAVEN_M_BOARD_ID					7
#define RAVEN_M_NUM_CAMS_BOARD				2
#define RAVEN_M_NUM_CONNECTORS_CAM			1
#define RAVEN_M_NUM_CAMS_DSP				2
#define RAVEN_M_NUM_AUDIO_INPUTS			1
#define RAVEN_M_NUM_AUDIO_CHANS_PER_INPUT	2
#define RAVEN_M_NUM_TTL_IN					8
#define RAVEN_M_NUM_TTL_OUT				8


#if defined(BOARD_TYPE)

#define BOARD_ID_M(b)					b##_BOARD_ID
#define BOARD_ID_M_(b)					BOARD_ID_M(b)
#define BOARD_ID						BOARD_ID_M_(BOARD_TYPE)

#define NUM_CAMS_BOARD_M_(b)			b##_NUM_CAMS_BOARD
#define NUM_CAMS_BOARD_M(b)				NUM_CAMS_BOARD_M_(b)
#define NUM_CAMS_BOARD					NUM_CAMS_BOARD_M(BOARD_TYPE)

#define NUM_CAMS_DSP_M_(b)				b##_NUM_CAMS_DSP
#define NUM_CAMS_DSP_M(b)				NUM_CAMS_DSP_M_(b)
#define NUM_CAMS_DSP					NUM_CAMS_DSP_M(BOARD_TYPE)

#define NUM_AUDIO_INPUTS_M_(b)			b##_NUM_AUDIO_INPUTS
#define NUM_AUDIO_INPUTS_M(b)			NUM_AUDIO_INPUTS_M_(b)
#define NUM_AUDIO_INPUTS				NUM_AUDIO_INPUTS_M(BOARD_TYPE)

#define NUM_AUDIO_CHANS_PER_INPUT_M_(b)	b##_NUM_AUDIO_CHANS_PER_INPUT
#define NUM_AUDIO_CHANS_PER_INPUT_M(b)	NUM_AUDIO_CHANS_PER_INPUT_M_(b)
#define NUM_AUDIO_CHANS_PER_INPUT		NUM_AUDIO_CHANS_PER_INPUT_M(BOARD_TYPE)

#define NUM_CONNECTORS_CAM_M_(b)		b##_NUM_CONNECTORS_CAM
#define NUM_CONNECTORS_CAM_M(b)			NUM_CONNECTORS_CAM_M_(b)
#define NUM_CONNECTORS_CAM				NUM_CONNECTORS_CAM_M(BOARD_TYPE)

#define NUM_TTL_IN_M_(b)				b##_NUM_TTL_IN
#define NUM_TTL_IN_M(b)					NUM_TTL_IN_M_(b)
#define NUM_TTL_IN						NUM_TTL_IN_M(BOARD_TYPE)

#define NUM_TTL_OUT_M_(b)				b##_NUM_TTL_OUT
#define NUM_TTL_OUT_M(b)				NUM_TTL_OUT_M_(b)
#define NUM_TTL_OUT						NUM_TTL_OUT_M(BOARD_TYPE)

#endif /* BOARD_TYPE */

#endif /* __MANGOSHARED_H__ */
