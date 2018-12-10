#ifndef __KQX_COMMON_H__
#define __KQX_COMMON_H__
#include "qmweather.h"
#include <Arduino.h>
#define LABEL_(x) { \
Serial.print(millis()); \
Serial.print(" ["); Serial.print(x); Serial.print("] "); \
Serial.print(__FUNCTION__); \
Serial.print(" ("); Serial.print(__LINE__); Serial.print(") > "); }
#define LOG1(n, v1)			{ LABEL_(n) Serial.println(v1); }
#define LOG2(n, v1, v2)		{ LABEL_(n) Serial.print(v1); Serial.print(": "); Serial.println(v2); }
#define LOG3(n, v1, v2, v3)	{ LABEL_(n) Serial.print(v1); Serial.print(": "); Serial.print(v2); Serial.println(v3); }
#define ERROR_PRINT(v1)				LOG1("ERROR", v1)
#define ERROR_PRINT2(v1, v2)		LOG2("ERROR", v1, v2)
#define ERROR_PRINT3(v1, v2, v3)	LOG3("ERROR", v1, v2, v3)
#define INFO_PRINT(v1)				LOG1("INFO ", v1)
#define INFO_PRINT2(v1, v2)			LOG2("INFO ", v1, v2)
#define INFO_PRINT3(v1, v2, v3)		LOG3("INFO ", v1, v2, v3)
#ifdef DEBUG
#define DEBUG_PRINT(v1)				LOG1("DEBUG", v1)
#define DEBUG_PRINT2(v1, v2)		LOG2("DEBUG", v1, v2)
#define DEBUG_PRINT3(v1, v2, v3)	LOG3("DEBUG", v1, v2, v3)
#else
#define DEBUG_PRINT(v1)
#define DEBUG_PRINT2(v1, v2)
#define DEBUG_PRINT3(v1, v2, v3)
#endif
#ifdef DEBUG_INTERRUPT1
#define DEBUG_INTERRUPT1_PRINT(v1)			LOG1("DEBUG", v1)
#define DEBUG_INTERRUPT1_PRINT2(v1, v2)		LOG2("DEBUG", v1, v2)
#else
#define DEBUG_INTERRUPT1_PRINT(v1)
#define DEBUG_INTERRUPT1_PRINT2(v1, v2)
#endif
#ifdef DEBUG_INTERRUPT2
#define DEBUG_INTERRUPT2_PRINT(v1)			LOG1("DEBUG", v1)
#define DEBUG_INTERRUPT2_PRINT2(v1, v2)		LOG2("DEBUG", v1, v2)
#else
#define DEBUG_INTERRUPT2_PRINT(v1)
#define DEBUG_INTERRUPT2_PRINT2(v1, v2)
#endif
#ifdef DEBUG_INTERRUPT3
#define DEBUG_INTERRUPT3_PRINT(v1)			LOG1("DEBUG", v1)
#define DEBUG_INTERRUPT3_PRINT2(v1, v2)		LOG2("DEBUG", v1, v2)
#else
#define DEBUG_INTERRUPT3_PRINT(v1)
#define DEBUG_INTERRUPT3_PRINT2(v1, v2)
#endif
#define mq45qn0P					128
#define riXwfZZL						6
#define N6jnJZ6j					(riXwfZZL * 4)
#define uc8ZuE97						16
#define gUFusaGI						8
#define P4WBS2V7						31
#define dH60OvPR				63
#define JYgKfLId				8
#define FMSDOmEp		64
#define c1nt4Dl3 16
#define wnMGddKo				32 * 1024
#define obyxjRiy			32
#define CGiKaWp6		512
#define iV0HXit6					512
#define LC33O36V				32 * 1024
#define e8PSMcMa				32
#define BcML2DCl					8
#define vppHnzyX						256
#define OePDjj2a						5
#define c6hZrAhp						10
#define LgKDpn62					64
#define sW1Zy9Bk					1024
#define zl6NjEAe				5
#define h9hWIY9q			(zl6NjEAe * 2)
#define U4P0OmIa					1
#define XGA0Z31K				(U4P0OmIa * 2)
#define MCfTrAde					(zl6NjEAe - 1)
#define jCbaa3QY				(MCfTrAde * 2)
enum FAePoVoY {
	wgr2ignj,	
	NkfajNzP,	
	L86duSkr,
	L86duSkr_OUT,
	a1I3oHPZ,
};
struct CEylI3du {
	uint32_t	nUcwl1sH;
	uint32_t	DpNfe0Pf;
};
struct Ido0dXS0 {
	char	 N48kTvuN[P4WBS2V7 + 1 + gUFusaGI];
	char	 C0F5nxE0[dH60OvPR + 1 + gUFusaGI];
	char	 NhrThuQr[vppHnzyX + gUFusaGI];
	char	 RImO3BBw[vppHnzyX + gUFusaGI];
	char	 hWHpOEFJ[vppHnzyX + gUFusaGI];
	char	 EnarnfC1[LgKDpn62 + gUFusaGI];
	 uint32_t DU9L0Uyl;
	uint32_t VqNNUFE5;
	uint16_t ITerYv84;
	uint16_t fXP44W3g;
	uint16_t qw0na3dJ;
	char	ZTWjEHsq[34];
};
class ESP8266WebServer;
bool ConfigureWebServer(ESP8266WebServer& lqfNuiDA, const char *J78GKKy0, const char *LzSKz6Yz);
void GetSettings(void);
bool HasSettings(void);
bool ClearSettings(void);
void SetSoftwareReset(void);
void ClearSoftwareReset(void);
void SetwifiAccessSucceeded(void);
bool ConnectWiFi(void);
bool DisconnectWiFi(void);
bool APIserverGetOperationInfos(CEylI3du& info, uint32_t& DU9L0Uyl, FAePoVoY& DeAUVtgk);
#endif
