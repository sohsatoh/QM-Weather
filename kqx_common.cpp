/**
* @file kqx_common.cpp
* @brief common 
*/

#include <ESP8266WebServer.h>
#include <WiFiClientSecure.h>
#include <EEPROM.h>

#include "kqx_common.h"

//-------------------------------------------------------------------
// enum
//-------------------------------------------------------------------


enum GjrVoXAU {
	wWI5WIp9 = 200,
	Ux2NVaKN = 400,
	ug12loqA = 401,
	IcyAXeza = 404
};

//-------------------------------------------------------------------
// value 
//-------------------------------------------------------------------


extern Ido0dXS0 abOV1CXr;


char j50Dw52A[sW1Zy9Bk] = { 0 };


#define ONrPPXfv		64


const uint32_t cysVmeXe = P4WBS2V7 + 1 + dH60OvPR + 1 + vppHnzyX + vppHnzyX * 2 + LgKDpn62 + e8PSMcMa * BcML2DCl + ONrPPXfv;


//-------------------------------------------------------------------
// value 
//-------------------------------------------------------------------


const uint8_t VSAr97M1[]	= b17umQ6g;
const uint8_t ic8jXCtG[]	= MYdDu5JF;
const uint8_t AJcD64L3[]	= AdPR3de4;

extern ESP8266WebServer bORkG5GM;


//-------------------------------------------------------------------
// value 
//-------------------------------------------------------------------


char pxbRQPfv[N6jnJZ6j] = { 0 };


const uint32_t M2EyWKqa = AdcDwrkl + N6jnJZ6j + e8PSMcMa * 2 + ONrPPXfv;


//-------------------------------------------------------------------
// Func
//-------------------------------------------------------------------

/**
* APIserverPostAuthToken
*	@param WiFiClientSecure&	ZRNGJV3H 
*	@param FAePoVoY&			DeAUVtgk 
*/
bool APIserverPostAuthToken(WiFiClientSecure& ZRNGJV3H, FAePoVoY& DeAUVtgk);

/**
* APIserverGetOperationInfo
*	@param CEylI3du&		qHmEdXki 
*	@param WiFiClientSecure&	ZRNGJV3H 
*	@param FAePoVoY&			DeAUVtgk 
*/
bool APIserverGetOperationInfo(CEylI3du& qHmEdXki, WiFiClientSecure& ZRNGJV3H, FAePoVoY& DeAUVtgk);

/**
* APIserverGetAccessInfo
*	@param WiFiClientSecure&	ZRNGJV3H 
*	@param FAePoVoY&			DeAUVtgk 
*/
bool APIserverGetAccessInfo(WiFiClientSecure& ZRNGJV3H, FAePoVoY& DeAUVtgk);

/**
* ResponseInfo
*	@param WiFiClientSecure&	ZRNGJV3H 
*	@param String&				Fp9XixHE 
*	@param String&				hJstFwLT 
*/
uint32_t ResponseInfo(WiFiClientSecure& ZRNGJV3H, String& Fp9XixHE, String& hJstFwLT);

/**
* JsonParseAccessInfo
*	@param String&	hJstFwLT 
*/
bool JsonParseAccessInfo(String& hJstFwLT);

/**
* JsonParseValueString
*	@param String&	Jz36EKWP 
*	@param String&	p2aoYpjK 
*	@param String&	HTANwEtg 
*/
bool JsonParseValueString(String& Jz36EKWP, String& p2aoYpjK, String& HTANwEtg);

/**
* JsonParseValueUInt32
*	@param String&		Jz36EKWP 
*	@param String&		p2aoYpjK 
*	@param uint32_t&	HTANwEtg 
*/
bool JsonParseValueUInt32(String& Jz36EKWP, String& p2aoYpjK, uint32_t& HTANwEtg);

/**
* onWebServerAPIRoot
*/
void onWebServerAPIRoot()
{
	DEBUG_PRINT("IN");


	char PR3xGhMo[M2EyWKqa] = { 0 };


	sprintf(PR3xGhMo, 
		"FW Version: %s, Mac Address: %s",
		oXPBpw6k, pxbRQPfv);

	DEBUG_PRINT2("Response", PR3xGhMo);


	bORkG5GM.send(wWI5WIp9, "", PR3xGhMo);

	DEBUG_PRINT("OUT");
}

/**
* onWebServerAPIStatus
*/
void onWebServerAPIStatus()
{
	DEBUG_PRINT("IN");


	bORkG5GM.send(wWI5WIp9);

	DEBUG_PRINT("OUT");
}

/**
* onWebServerAPISettingInfo
*/
void onWebServerAPISettingInfo()
{
	DEBUG_PRINT("IN");


	Ido0dXS0 AdYwlkyO = { 0 };
	bool result = false;


	do {
		String argValue = bORkG5GM.arg("Host");
		if (argValue.length() == 0 || argValue.length() > vppHnzyX) {
			DEBUG_PRINT2("Host is invalid", argValue.c_str());
			break;
		}
		strcpy(AdYwlkyO.NhrThuQr, argValue.c_str());
		DEBUG_PRINT2("Host", AdYwlkyO.NhrThuQr);

		argValue = bORkG5GM.arg("Port");
		if (argValue.length() == 0 || argValue.length() > OePDjj2a) {
			DEBUG_PRINT2("Port is invalid", argValue.c_str());
			break;
		}
		AdYwlkyO.ITerYv84 = strtoul(argValue.c_str(), '\0', 0);
		DEBUG_PRINT2("Port", AdYwlkyO.ITerYv84);

		argValue = bORkG5GM.arg("AuthPath");
		if (argValue.length() == 0 || argValue.length() > vppHnzyX) {
			DEBUG_PRINT2("AuthPath is invalid", argValue.c_str());
			break;
		}
		strcpy(AdYwlkyO.RImO3BBw, argValue.c_str());
		DEBUG_PRINT2("AuthPath", AdYwlkyO.RImO3BBw);

		argValue = bORkG5GM.arg("InfoPath");
		if (argValue.length() == 0 || argValue.length() > vppHnzyX) {
			DEBUG_PRINT2("InfoPath is invalid", argValue.c_str());
			break;
		}
		strcpy(AdYwlkyO.hWHpOEFJ, argValue.c_str());
		DEBUG_PRINT2("InfoPath", AdYwlkyO.hWHpOEFJ);

		argValue = bORkG5GM.arg("Term");
		if (argValue.length() == 0 || argValue.length() > c6hZrAhp) {
			DEBUG_PRINT2("Term is invalid", argValue.c_str());
			break;
		}
		AdYwlkyO.DU9L0Uyl = strtoul(argValue.c_str(), '\0', 0);
		DEBUG_PRINT2("Term", AdYwlkyO.DU9L0Uyl);

		argValue = bORkG5GM.arg("SSID");
		if (argValue.length() == 0 || argValue.length() > P4WBS2V7) {
			DEBUG_PRINT2("SSID is invalid", argValue.c_str());
			break;
		}
		strcpy(AdYwlkyO.N48kTvuN, argValue.c_str());
		DEBUG_PRINT2("SSID", AdYwlkyO.N48kTvuN);

		argValue = bORkG5GM.arg("Password");
		if (argValue.length() > dH60OvPR) {
			DEBUG_PRINT2("Password is invalid", argValue.c_str());
			break;
		}
		strcpy(AdYwlkyO.C0F5nxE0, argValue.c_str());
		DEBUG_PRINT2("Password", AdYwlkyO.C0F5nxE0);

		argValue = bORkG5GM.arg("ProductId");
		if (argValue.length() == 0 || argValue.length() > LgKDpn62) {
			DEBUG_PRINT2("ProductId is invalid", argValue.c_str());
			break;
		}
		strcpy(AdYwlkyO.EnarnfC1, argValue.c_str());
		DEBUG_PRINT2("ProductId", AdYwlkyO.EnarnfC1);

		result = true;
		break;

	} while (false);

	if (!result) {
		DEBUG_PRINT2("param error", result);
		bORkG5GM.send(Ux2NVaKN);
		return;
	}


	Ido0dXS0 CQmILTbJ = { 0 };
	EEPROM.begin(sizeof(Ido0dXS0));
	EEPROM.get<Ido0dXS0>(0, CQmILTbJ);



	bool jxRKJRff = false;

	if (strcmp(CQmILTbJ.NhrThuQr, AdYwlkyO.NhrThuQr) != 0) {
		strcpy(CQmILTbJ.NhrThuQr, AdYwlkyO.NhrThuQr);
		jxRKJRff = true;
		DEBUG_PRINT2("Host is different", CQmILTbJ.NhrThuQr);
	}
	if (CQmILTbJ.ITerYv84 != AdYwlkyO.ITerYv84) {
		CQmILTbJ.ITerYv84 = AdYwlkyO.ITerYv84;
		jxRKJRff = true;
		DEBUG_PRINT2("Port is different", CQmILTbJ.ITerYv84);
	}
	if (strcmp(CQmILTbJ.RImO3BBw, AdYwlkyO.RImO3BBw) != 0) {
		strcpy(CQmILTbJ.RImO3BBw, AdYwlkyO.RImO3BBw);
		jxRKJRff = true;
		DEBUG_PRINT2("AuthPath is different", CQmILTbJ.RImO3BBw);
	}
	if (strcmp(CQmILTbJ.hWHpOEFJ, AdYwlkyO.hWHpOEFJ) != 0) {
		strcpy(CQmILTbJ.hWHpOEFJ, AdYwlkyO.hWHpOEFJ);
		jxRKJRff = true;
		DEBUG_PRINT2("InfoPath is different", CQmILTbJ.hWHpOEFJ);
	}
	if (CQmILTbJ.DU9L0Uyl != AdYwlkyO.DU9L0Uyl) {
		CQmILTbJ.DU9L0Uyl = AdYwlkyO.DU9L0Uyl;
		jxRKJRff = true;
		DEBUG_PRINT2("Term is different", CQmILTbJ.DU9L0Uyl);
	}
	if (strcmp(CQmILTbJ.N48kTvuN, AdYwlkyO.N48kTvuN) != 0) {
		strcpy(CQmILTbJ.N48kTvuN, AdYwlkyO.N48kTvuN);
		jxRKJRff = true;
		DEBUG_PRINT2("SSID is different", CQmILTbJ.N48kTvuN);
	}
	if (strcmp(CQmILTbJ.C0F5nxE0, AdYwlkyO.C0F5nxE0) != 0) {
		strcpy(CQmILTbJ.C0F5nxE0, AdYwlkyO.C0F5nxE0);
		jxRKJRff = true;
		DEBUG_PRINT2("Password is different", CQmILTbJ.C0F5nxE0);
	}
	if (strcmp(CQmILTbJ.EnarnfC1, AdYwlkyO.EnarnfC1) != 0) {
		strcpy(CQmILTbJ.EnarnfC1, AdYwlkyO.EnarnfC1);
		jxRKJRff = true;
		DEBUG_PRINT2("ProductId is different", CQmILTbJ.EnarnfC1);
	}

	if (jxRKJRff) {

		EEPROM.put<Ido0dXS0>(0, CQmILTbJ);
		DEBUG_PRINT2("update", jxRKJRff);
	}

	EEPROM.end();


	bORkG5GM.send(wWI5WIp9);

	DEBUG_PRINT("OUT");
}

/**
* onWebServerAPIInfo
*/
void onWebServerAPIInfo()
{
	DEBUG_PRINT("IN");


	Ido0dXS0 CQmILTbJ = { 0 };


	EEPROM.begin(sizeof(Ido0dXS0));
	EEPROM.get<Ido0dXS0>(0, CQmILTbJ);
	EEPROM.end();


	char PR3xGhMo[cysVmeXe] = { 0 };
	sprintf(PR3xGhMo, "Host=%s&Port=%u&AuthPath=%s&InfoPath=%s&Term=%u&SSID=%s&Password=%s&ProductId=%s", 
			CQmILTbJ.NhrThuQr, CQmILTbJ.ITerYv84, 
			CQmILTbJ.RImO3BBw, CQmILTbJ.hWHpOEFJ, 
			CQmILTbJ.DU9L0Uyl, 
			CQmILTbJ.N48kTvuN, CQmILTbJ.C0F5nxE0, 
			CQmILTbJ.EnarnfC1);

	DEBUG_PRINT2("Response", PR3xGhMo);


	bORkG5GM.send(wWI5WIp9, "", PR3xGhMo);

	DEBUG_PRINT("OUT");
}

/**
* onWebServerAPIInitialStatus
*/
void onWebServerAPIInitialStatus()
{
	DEBUG_PRINT("IN");


	String zmz2z2Uz = bORkG5GM.arg("InitialStatus");

	DEBUG_PRINT2("InitialStatus", zmz2z2Uz.c_str());


	Ido0dXS0 CQmILTbJ = { 0 };


	EEPROM.begin(sizeof(Ido0dXS0));
	EEPROM.get<Ido0dXS0>(0, CQmILTbJ);
	EEPROM.end();


	CQmILTbJ.VqNNUFE5 = (uint32_t)zmz2z2Uz.toInt();

	if (CQmILTbJ.N48kTvuN[0] == '\0' ||
		CQmILTbJ.NhrThuQr[0] == '\0' || CQmILTbJ.RImO3BBw[0] == '\0' ||
		CQmILTbJ.hWHpOEFJ[0] == '\0' || CQmILTbJ.EnarnfC1[0] == '\0' ||
		CQmILTbJ.DU9L0Uyl == 0 || CQmILTbJ.VqNNUFE5 == 0) {

		INFO_PRINT("wi-fi settings is not stored");


		bORkG5GM.send(Ux2NVaKN);
		return;
	}


	DEBUG_PRINT("InitialStatus success");


	EEPROM.begin(sizeof(Ido0dXS0));
	EEPROM.put<Ido0dXS0>(0, CQmILTbJ);
	EEPROM.end();


	bORkG5GM.send(wWI5WIp9);

	delay(mq45qn0P);


	ESP.restart();

	DEBUG_PRINT("OUT");
}

/**
* ConfigureWebServer
*	@param lqfNuiDA 
*	@param J78GKKy0 
*	@param LzSKz6Yz 
*/
bool ConfigureWebServer(ESP8266WebServer& lqfNuiDA, const char *J78GKKy0, const char *LzSKz6Yz)
{
	DEBUG_PRINT("IN");

	if (J78GKKy0 == NULL || LzSKz6Yz == NULL ||
		strlen(J78GKKy0) == 0 || strlen(J78GKKy0) > P4WBS2V7) {
		ERROR_PRINT("param error NULL or 0 length");
		return false;
	}

	DEBUG_PRINT2("param SSID", J78GKKy0);
	DEBUG_PRINT2("param password", LzSKz6Yz);

	WiFi.softAPConfig(IPAddress(VSAr97M1), IPAddress(AJcD64L3), IPAddress(ic8jXCtG));

	WiFi.mode(WIFI_AP);


	if (!WiFi.softAP(J78GKKy0, LzSKz6Yz)) {
		ERROR_PRINT("wi-fi softap error");
		return false;
	}


	String RIKvefGU = WiFi.softAPmacAddress();
	strcpy(pxbRQPfv, RIKvefGU.c_str());

	IPAddress gWpKYnOP = WiFi.softAPIP();
	String AE44gU2K = gWpKYnOP.toString();
	DEBUG_PRINT2("wi-fi IPAddress", AE44gU2K.c_str());


#ifdef DEBUG
	lqfNuiDA.on("/", HTTP_GET, onWebServerAPIRoot);
#endif
	lqfNuiDA.on("/WebServerStatus", HTTP_GET, onWebServerAPIStatus);
	lqfNuiDA.on("/SettingInfo", HTTP_POST, onWebServerAPISettingInfo);
	lqfNuiDA.on("/WebServerInfo", HTTP_GET, onWebServerAPIInfo);
	lqfNuiDA.on("/InitialStatus", HTTP_PUT, onWebServerAPIInitialStatus);

	DEBUG_PRINT("OUT");
	return true;
}

//-------------------------------------------------------------------
// Func
//-------------------------------------------------------------------

/**
* GetSettings
*/
void GetSettings(void)
{
	DEBUG_PRINT("IN");

	EEPROM.begin(sizeof(Ido0dXS0));
	EEPROM.get<Ido0dXS0>(0, abOV1CXr);
	EEPROM.end();

	DEBUG_PRINT("OUT");
}

/**
* HasSettings
*/
bool HasSettings(void)
{
	DEBUG_PRINT("IN");

	if (abOV1CXr.N48kTvuN[0] == '\0' || 
		abOV1CXr.NhrThuQr[0] == '\0' || abOV1CXr.RImO3BBw[0] == '\0' ||
		abOV1CXr.hWHpOEFJ[0] == '\0' || abOV1CXr.EnarnfC1[0] == '\0' ||
		abOV1CXr.DU9L0Uyl == 0 || abOV1CXr.VqNNUFE5 == 0) {
		INFO_PRINT("has no stored wi-fi settings");
		return false;
	}
	else {
		INFO_PRINT("has stored settings");
		DEBUG_PRINT2("ssid", abOV1CXr.N48kTvuN);
		DEBUG_PRINT2("password", abOV1CXr.C0F5nxE0);
		DEBUG_PRINT2("Host", abOV1CXr.NhrThuQr);
		DEBUG_PRINT2("Port", abOV1CXr.ITerYv84);
		DEBUG_PRINT2("AuthPath", abOV1CXr.RImO3BBw);
		DEBUG_PRINT2("InfoPath", abOV1CXr.hWHpOEFJ);
		DEBUG_PRINT2("Term", abOV1CXr.DU9L0Uyl);
		DEBUG_PRINT2("ProductId", abOV1CXr.EnarnfC1);
		DEBUG_PRINT2("Init", abOV1CXr.VqNNUFE5);
		DEBUG_PRINT2("softwareReset", abOV1CXr.fXP44W3g);
		DEBUG_PRINT2("wifiAccessSucceeded", abOV1CXr.qw0na3dJ);
	}

	DEBUG_PRINT("OUT");
	return true;
}

/**
* ClearSettings
*/
bool ClearSettings(void)
{
	DEBUG_PRINT("IN");


	memset(&abOV1CXr, 0, sizeof(abOV1CXr));


	EEPROM.begin(sizeof(Ido0dXS0));
	EEPROM.put<Ido0dXS0>(0, abOV1CXr);
	EEPROM.end();

	DEBUG_PRINT("OUT");
	return true;
}

/**
* SetSoftwareReset
*/
void SetSoftwareReset(void)
{
	DEBUG_PRINT2("IN SettingsInfo.wifiAccessSucceeded", abOV1CXr.qw0na3dJ);
	DEBUG_PRINT2("SettingsInfo.softwareReset", abOV1CXr.fXP44W3g);

	if (!abOV1CXr.qw0na3dJ) {

		DEBUG_PRINT("wi-fi access succeeded OFF");

		if (!abOV1CXr.fXP44W3g) {

			DEBUG_PRINT("set S/W reset ON");

			abOV1CXr.fXP44W3g = 1;


			EEPROM.begin(sizeof(Ido0dXS0));
			EEPROM.put<Ido0dXS0>(0, abOV1CXr);
			EEPROM.end();
		}
	}

	DEBUG_PRINT("OUT");
}

/**
* ClearSoftwareReset
*/
void ClearSoftwareReset(void)
{
	DEBUG_PRINT2("IN SettingsInfo.softwareReset", abOV1CXr.fXP44W3g);

	if (abOV1CXr.fXP44W3g) {

		DEBUG_PRINT("clear S/W reset OFF");

		abOV1CXr.fXP44W3g = 0;


		EEPROM.begin(sizeof(Ido0dXS0));
		EEPROM.put<Ido0dXS0>(0, abOV1CXr);
		EEPROM.end();
	}

	DEBUG_PRINT("OUT");
}

/**
* SetwifiAccessSucceeded
*/
void SetwifiAccessSucceeded(void)
{
	DEBUG_PRINT2("IN SettingsInfo.wifiAccessSucceeded", abOV1CXr.qw0na3dJ);

	if (!abOV1CXr.qw0na3dJ) {

		DEBUG_PRINT("set wi-fi access succeeded ON");

		abOV1CXr.qw0na3dJ = 1;


		EEPROM.begin(sizeof(Ido0dXS0));
		EEPROM.put<Ido0dXS0>(0, abOV1CXr);
		EEPROM.end();
	}

	DEBUG_PRINT("OUT");
}

/**
* ConnectWiFi
*/
bool ConnectWiFi(void)
{
	DEBUG_PRINT("IN");

	wl_status_t zmz2z2Uz = WiFi.status();
	bool cIbj0nuK = false;


	if (zmz2z2Uz == WL_CONNECTED) {
		DEBUG_PRINT("wi-fi already connected");
		return true;
	}

	DEBUG_PRINT2("wi-fi status", zmz2z2Uz);

#ifdef DEBUG
	if (pxbRQPfv[0] == '\0') {

		String RIKvefGU = WiFi.macAddress();
		strcpy(pxbRQPfv, RIKvefGU.c_str());
	}
#endif

	DEBUG_PRINT2("ssid", abOV1CXr.N48kTvuN);
	DEBUG_PRINT2("password", abOV1CXr.C0F5nxE0);

	if (abOV1CXr.N48kTvuN[0] == '\0') {
		ERROR_PRINT("not found wi-fi settings");
		return false;
	}

	WiFi.mode(WIFI_OFF);
	WiFi.mode(WIFI_STA);


	if (WiFi.begin(abOV1CXr.N48kTvuN, abOV1CXr.C0F5nxE0) == WL_NO_SHIELD) {

		ERROR_PRINT("wi-fi begin no shield error");
		return false;
	}


	uint32_t KIsnfKKn = 0;
	int32_t YNkz3uvQ = FMSDOmEp;
	uint32_t AsQ9ho6t = 1;
	uint32_t ZSGPGF35 = c1nt4Dl3;
	int32_t sMQkfOCK = wnMGddKo;
	while (sMQkfOCK > 0) {
		if (YNkz3uvQ > 0) {
			YNkz3uvQ--;
			//DEBUG_PRINT2("wi-fi statuscount", YNkz3uvQ);
		} else {
			YNkz3uvQ = FMSDOmEp;
			zmz2z2Uz = WiFi.status();
			DEBUG_PRINT2("wi-fi connecting status", zmz2z2Uz);
			if (zmz2z2Uz == WL_CONNECTED) {
				INFO_PRINT("wi-fi connected");
				cIbj0nuK = true;
				break;
			}
			if (KIsnfKKn & 0x01) {

				AsQ9ho6t++;
				ZSGPGF35 = AsQ9ho6t * c1nt4Dl3;
				DEBUG_PRINT2("wi-fi delay time", ZSGPGF35);
			}
			KIsnfKKn++;
		}
		delay(ZSGPGF35);
		sMQkfOCK -= ZSGPGF35;
		//DEBUG_PRINT2("wi-fi timeout", sMQkfOCK);
	}

	DEBUG_PRINT2("wi-fi timeout", sMQkfOCK);

	if (!cIbj0nuK) {
		ERROR_PRINT2("wi-fi connected timeout", zmz2z2Uz);
		return false;
	}

	IPAddress gWpKYnOP = WiFi.localIP();
	String AE44gU2K = gWpKYnOP.toString();
	DEBUG_PRINT2("wi-fi IPAddress", AE44gU2K.c_str());

	DEBUG_PRINT("OUT");

	return cIbj0nuK;
}

/**
* DisconnectWiFi
*/
bool DisconnectWiFi(void)
{
	DEBUG_PRINT("IN");
	bool vdpEBzfx = false;

	wl_status_t zmz2z2Uz = WiFi.status();
	DEBUG_PRINT2("wifi current status", zmz2z2Uz);


	if (zmz2z2Uz == WL_IDLE_STATUS) {
		DEBUG_PRINT("wi-fi already disconnected");
		return true;
	}


	WiFi.disconnect();


	uint32_t KIsnfKKn = obyxjRiy;
	while (KIsnfKKn > 0) {
		zmz2z2Uz = WiFi.status();
		DEBUG_PRINT2("wi-fi disconnecting status", zmz2z2Uz);
		if (zmz2z2Uz == WL_IDLE_STATUS) {
			INFO_PRINT("wi-fi disconnected");
			vdpEBzfx = true;
			break;
		}
		delay(CGiKaWp6);
		KIsnfKKn--;
	}
	if (!vdpEBzfx) {
		ERROR_PRINT2("wi-fi disconnected timeout", zmz2z2Uz);
		return false;
	}

	DEBUG_PRINT("OUT");
	return vdpEBzfx;
}

//-------------------------------------------------------------------
// Func
//-------------------------------------------------------------------

/**
* APIserverGetOperationInfos
*/
bool APIserverGetOperationInfos(CEylI3du& qHmEdXki, uint32_t& term, FAePoVoY& DeAUVtgk)
{
	DEBUG_PRINT("IN");

	uint32_t  unuyczdu = 0;
	uint32_t  P8fwnmrB = 0;
	uint32_t  DRhO4tOq = 0;
	uint8_t   c = '0';
	bool jLoVroBF = false;
	bool Z8rAvWzk = false;
	bool ajq0PsG8 = false;


	DeAUVtgk = wgr2ignj;

	WiFiClientSecure ZRNGJV3H;

	DEBUG_PRINT2("param info datal", qHmEdXki.nUcwl1sH);
	DEBUG_PRINT2("param info output level", qHmEdXki.DpNfe0Pf);
	DEBUG_PRINT2("param term", term);
	DEBUG_PRINT2("param API error", DeAUVtgk);

	do {
		if (!ZRNGJV3H.connected()) {

			DEBUG_PRINT("API server not connected");
			if (!ZRNGJV3H.connect(abOV1CXr.NhrThuQr, abOV1CXr.ITerYv84)) {

				DeAUVtgk = NkfajNzP;
				ERROR_PRINT2("API server connection error", DeAUVtgk);
				break;
			}
			DEBUG_PRINT("API server connected");
		}

		DEBUG_PRINT2("API server auth token", j50Dw52A);

		if (strlen(j50Dw52A) == 0) {
			DEBUG_PRINT("API server post auth token");


			if (!APIserverPostAuthToken(ZRNGJV3H, DeAUVtgk)) {
				DEBUG_PRINT2("API server auth token error", DeAUVtgk);
				break;
			}
		}

		if (!ajq0PsG8) {
			DEBUG_PRINT("get operation info");


			if (!APIserverGetOperationInfo(qHmEdXki, ZRNGJV3H, DeAUVtgk)) {
				DEBUG_PRINT2("get operation info error", DeAUVtgk);

				if (DeAUVtgk == L86duSkr_OUT) {

					j50Dw52A[0] = '\0';
					DEBUG_PRINT2("http auth token out error", DeAUVtgk);
					continue;
				}

				DEBUG_PRINT("API server get operation info error");
				break;
			}

			DEBUG_PRINT("get operation info success");
			ajq0PsG8 = true;
		}

		DEBUG_PRINT("get access info");


		if (!APIserverGetAccessInfo(ZRNGJV3H, DeAUVtgk)) {
			DEBUG_PRINT2("get access info error", DeAUVtgk);

			if (DeAUVtgk == L86duSkr_OUT) {

				j50Dw52A[0] = '\0';
				DEBUG_PRINT2("http auth token out error", DeAUVtgk);
				continue;
			}
			if (DeAUVtgk == L86duSkr) {

				j50Dw52A[0] = '\0';
				DEBUG_PRINT2("http auth token error", DeAUVtgk);
			}

			DEBUG_PRINT("API server get access info error");
			break;
		}

		DEBUG_PRINT("get operation infos all success");


		jLoVroBF = true;
		break;

	} while (true);

	ZRNGJV3H.stop();

	if (jLoVroBF) {
		term = abOV1CXr.DU9L0Uyl;
		INFO_PRINT2("term", term);
	}

	DEBUG_PRINT("OUT");

	return jLoVroBF;
}

/**
* APIserverPostAuthToken
*	@param WiFiClientSecure&	ZRNGJV3H 
*	@param FAePoVoY&			DeAUVtgk 
*/
bool APIserverPostAuthToken(WiFiClientSecure& ZRNGJV3H, FAePoVoY& DeAUVtgk)
{
	DEBUG_PRINT("IN");

	DEBUG_PRINT2("param access token error", DeAUVtgk);

	String aq49B7DL = String(abOV1CXr.RImO3BBw) + "/" + abOV1CXr.EnarnfC1;

	if (!ZRNGJV3H.connected()) {
		DEBUG_PRINT("API server not connected");
		if (!ZRNGJV3H.connect(abOV1CXr.NhrThuQr, abOV1CXr.ITerYv84)) {

			ERROR_PRINT("API server connection error");
			DeAUVtgk = NkfajNzP;
			return false;
		}
	}

	DEBUG_PRINT2("url", aq49B7DL.c_str());


	ZRNGJV3H.println(String("POST ") + aq49B7DL + " HTTP/1.1\r\n" +
		"Host: " + abOV1CXr.NhrThuQr + "\r\n" +
		"Content-Type: text/plain; charset=UTF-8\r\n" +
		"User-Agent: " + SePUbEIF "\r\n" +
		"Content-Length: 0\r\n\r\n");


	delay(iV0HXit6);

	DEBUG_PRINT("before http code");



	String hJstFwLT;
	String Fp9XixHE;

	uint32_t  DRhO4tOq = ResponseInfo(ZRNGJV3H, Fp9XixHE, hJstFwLT);

	ZRNGJV3H.flush();

	bool jLoVroBF = false;
	DeAUVtgk = a1I3oHPZ;
	if (DRhO4tOq == wWI5WIp9 && hJstFwLT.length() > 0) {

		String authtoken;
		String p2aoYpjK = "\"AccessToken\"";
		if (JsonParseValueString(hJstFwLT, p2aoYpjK, authtoken)) {
			DEBUG_PRINT2("http auth token", authtoken.c_str());
			if (authtoken.length() > 0 && authtoken.length() <= sW1Zy9Bk) {

				strncpy(j50Dw52A, authtoken.c_str(), sW1Zy9Bk);
				jLoVroBF = true;
				DeAUVtgk = wgr2ignj;
				DEBUG_PRINT("http auth token success");
			}
			else {
				ERROR_PRINT2("http auth token buffer over", authtoken.length());
			}
		}
		else {

			ERROR_PRINT("http auth json error");
		}
	}
	else {
		ERROR_PRINT2("error http code", DRhO4tOq);
		if (DRhO4tOq == IcyAXeza) {

			DeAUVtgk = L86duSkr;
			DEBUG_PRINT2("http unauthorized error", DeAUVtgk);
		}
	}

	DEBUG_PRINT("OUT");
	return jLoVroBF;
}

/**
* APIserverGetOperationInfo
*	@param CEylI3du&		qHmEdXki 
*	@param WiFiClientSecure&	ZRNGJV3H 
*	@param FAePoVoY&			DeAUVtgk
*/
bool APIserverGetOperationInfo(CEylI3du& qHmEdXki, WiFiClientSecure& ZRNGJV3H, FAePoVoY& DeAUVtgk)
{
	DEBUG_PRINT("IN");

	DEBUG_PRINT2("param info data", qHmEdXki.nUcwl1sH);
	DEBUG_PRINT2("param info output level", qHmEdXki.DpNfe0Pf);
	DEBUG_PRINT2("param access token out", DeAUVtgk);

	String aq49B7DL = String(abOV1CXr.hWHpOEFJ) + "/" + abOV1CXr.EnarnfC1 + "/Device/LightPattern";

	if (!ZRNGJV3H.connected()) {
		DEBUG_PRINT("API server not connected");
		if (!ZRNGJV3H.connect(abOV1CXr.NhrThuQr, abOV1CXr.ITerYv84)) {
			ERROR_PRINT("API server connection error");
			DeAUVtgk = NkfajNzP;
			return false;
		}
	}

	DEBUG_PRINT2("url", aq49B7DL.c_str());
	 

	ZRNGJV3H.println(String("GET ") + aq49B7DL + " HTTP/1.1\r\n" +
		"Host: " + abOV1CXr.NhrThuQr + "\r\n" +
		"Authorization: Bearer " + j50Dw52A + "\r\n" +
		"User-Agent: " + SePUbEIF "\r\n");


	delay(iV0HXit6);

	DEBUG_PRINT("before http code");



	String hJstFwLT;
	String Fp9XixHE;

	uint32_t  DRhO4tOq = ResponseInfo(ZRNGJV3H, Fp9XixHE, hJstFwLT);

	ZRNGJV3H.flush();

	bool jLoVroBF = false;
	DeAUVtgk = a1I3oHPZ;
	if (DRhO4tOq == wWI5WIp9 && hJstFwLT.length() > 0) {

		uint8_t iG6b82zi = hJstFwLT.indexOf('\"');
		uint8_t cSs1RtBl = -1;
		if (iG6b82zi != -1 && (iG6b82zi + 1) < hJstFwLT.length()) {
			cSs1RtBl = hJstFwLT.indexOf('\"', iG6b82zi + 1);
		}
		DEBUG_PRINT2("len", hJstFwLT.length());
		DEBUG_PRINT2("top \"", iG6b82zi);
		DEBUG_PRINT2("end \"", cSs1RtBl);
		if (iG6b82zi != -1 && cSs1RtBl != -1 && (cSs1RtBl - iG6b82zi - 1) == h9hWIY9q) {

			String HTANwEtg = hJstFwLT.substring(iG6b82zi + 1, cSs1RtBl - XGA0Z31K);
			DEBUG_PRINT2("pattern", HTANwEtg.c_str());
			qHmEdXki.nUcwl1sH = (uint32_t)strtoul(HTANwEtg.c_str(), NULL, 16);
			iG6b82zi += (jCbaa3QY + 1);
			HTANwEtg = hJstFwLT.substring(iG6b82zi, iG6b82zi + jCbaa3QY);
			DEBUG_PRINT2("on/off", HTANwEtg.c_str());
			qHmEdXki.DpNfe0Pf = strtoul(HTANwEtg.c_str(), NULL, 16);
			DEBUG_PRINT2("info data", qHmEdXki.nUcwl1sH);
			DEBUG_PRINT2("info output level", qHmEdXki.DpNfe0Pf);
			jLoVroBF = true;
			DeAUVtgk = wgr2ignj;
		}
		else {

			ERROR_PRINT2("http no \"", iG6b82zi);
		}
	}
	else {

		ERROR_PRINT2("error http code", DRhO4tOq);
		if (DRhO4tOq == ug12loqA) {

			DeAUVtgk = L86duSkr_OUT;
			DEBUG_PRINT2("http auth token out error", DeAUVtgk);
		}
		else if (DRhO4tOq == IcyAXeza) {

			DeAUVtgk = L86duSkr;
			DEBUG_PRINT2("http auth token error", DeAUVtgk);
		}
	}

	DEBUG_PRINT("OUT");
	return jLoVroBF;
}

/**
* APIserverGetAccessInfo
*	@param WiFiClientSecure&	ZRNGJV3H 
*	@param FAePoVoY&			DeAUVtgk 
*/
bool APIserverGetAccessInfo(WiFiClientSecure& ZRNGJV3H, FAePoVoY& DeAUVtgk)
{
	DEBUG_PRINT("IN");

	DEBUG_PRINT2("param access token out", DeAUVtgk);

	String aq49B7DL = String(abOV1CXr.hWHpOEFJ) + "/" + abOV1CXr.EnarnfC1 + "/Device/Access";

	if (!ZRNGJV3H.connected()) {
		DEBUG_PRINT("API server not connected");
		if (!ZRNGJV3H.connect(abOV1CXr.NhrThuQr, abOV1CXr.ITerYv84)) {
			ERROR_PRINT("API server connection error");
			DeAUVtgk = NkfajNzP;
			return false;
		}
	}

	DEBUG_PRINT2("url", aq49B7DL.c_str());


	ZRNGJV3H.println(String("GET ") + aq49B7DL + " HTTP/1.1\r\n" +
		"Host: " + abOV1CXr.NhrThuQr + "\r\n" +
		"Authorization: Bearer " + j50Dw52A + "\r\n" +
		"User-Agent: " + SePUbEIF "\r\n");


	delay(iV0HXit6);

	DEBUG_PRINT("before http code");



	String Fp9XixHE;
	String hJstFwLT;

	uint32_t  DRhO4tOq = ResponseInfo(ZRNGJV3H, Fp9XixHE, hJstFwLT);

	ZRNGJV3H.flush();

	bool jLoVroBF = false;
	DeAUVtgk = a1I3oHPZ;
	if (DRhO4tOq == wWI5WIp9 && hJstFwLT.length() > 0) {

		if (JsonParseAccessInfo(hJstFwLT)) {

			jLoVroBF = true;
			DeAUVtgk = wgr2ignj;
		}
		else {

			ERROR_PRINT2("http auth token out error", DeAUVtgk);
		}
	}
	else {

		ERROR_PRINT2("error http code", DRhO4tOq);
		if (DRhO4tOq == ug12loqA) {

			DeAUVtgk = L86duSkr_OUT;
			DEBUG_PRINT2("http auth token out error", DeAUVtgk);
		}
		else if (DRhO4tOq == IcyAXeza) {

			DeAUVtgk = L86duSkr;
			DEBUG_PRINT2("http auth token out error", DeAUVtgk);
		}
	}

	DEBUG_PRINT("OUT");
	return jLoVroBF;
}

/**
* ResponseInfo
*	@param WiFiClientSecure&	ZRNGJV3H 
*	@param String&				Fp9XixHE 
*	@param String&				hJstFwLT 
*/
uint32_t ResponseInfo(WiFiClientSecure& ZRNGJV3H, String& Fp9XixHE, String& hJstFwLT)
{
	DEBUG_PRINT("IN");

	DEBUG_PRINT2("param headers", Fp9XixHE);
	DEBUG_PRINT2("param body", hJstFwLT);

	char receiveBuff[cysVmeXe] = { 0 };
	uint32_t  DRhO4tOq = 0;


	uint32_t lxQB9Ug8 = millis();


	while (ZRNGJV3H.connected()) {
		delay(uc8ZuE97);
		if ((millis() - lxQB9Ug8) > LC33O36V) {

			ERROR_PRINT("http response timeout error");
			break;
		}

		if (!ZRNGJV3H.available()) {

			DEBUG_PRINT("http client is not available");
			continue;
		}

		size_t nA3WZbVO = 0;

		if (Fp9XixHE.length() == 0) {

			nA3WZbVO = ZRNGJV3H.readBytesUntil('\r', receiveBuff, sizeof(receiveBuff));
			DEBUG_PRINT2("http read response header", nA3WZbVO);
			if (nA3WZbVO == 0) {

				DEBUG_PRINT("http read response header size is zero");
				continue;
			}
			else if (nA3WZbVO >= cysVmeXe) {

				DEBUG_PRINT("http read response header size is not enough");
				break;
			}


			receiveBuff[nA3WZbVO] = '\0';
			Fp9XixHE = receiveBuff;
			DEBUG_PRINT2("http read response header ok", receiveBuff);
		}

		receiveBuff[0] = '\0';


		nA3WZbVO = ZRNGJV3H.readBytesUntil('\n', receiveBuff, sizeof(receiveBuff));
		DEBUG_PRINT2("http read response body before line", nA3WZbVO);
		if (nA3WZbVO == 0 || nA3WZbVO >= cysVmeXe) {

			DEBUG_PRINT("http read response body before line is size zero");
			continue;
		}

		receiveBuff[nA3WZbVO] = '\0';
		if (strcmp(receiveBuff, "\r") != 0) {

			DEBUG_PRINT2("http read response body before line is not CRLF", receiveBuff);
			continue;
		}


		nA3WZbVO = ZRNGJV3H.readBytes(receiveBuff, sizeof(receiveBuff));
		receiveBuff[nA3WZbVO] = '\0';
		DEBUG_PRINT2("http read response body", nA3WZbVO);
		if (nA3WZbVO > 0 && nA3WZbVO < cysVmeXe) {

			hJstFwLT = receiveBuff;
			DEBUG_PRINT("http read response body ok");
			break;
		}

		DEBUG_PRINT("http read response body empty");
	}

	DEBUG_PRINT2("http headers", Fp9XixHE.c_str());
	DEBUG_PRINT2("http response", hJstFwLT.c_str());

	if (Fp9XixHE.length() > 0) {

		uint32_t  P8fwnmrB = Fp9XixHE.indexOf(" ");
		if (P8fwnmrB != -1 && Fp9XixHE.length() > ++P8fwnmrB) {
			char nUoYZx68[8] = { 0 };
			strncpy(nUoYZx68, (Fp9XixHE.c_str() + P8fwnmrB), sizeof(nUoYZx68));
			char* code = strchr(nUoYZx68, ' ');
			if (code != NULL) {
				*code = '\0';
				DRhO4tOq = strtoul(nUoYZx68, '\0', 0);
				DEBUG_PRINT2("http code found", DRhO4tOq);
			}
		}
	}

	DEBUG_PRINT2("http code", DRhO4tOq);

	DEBUG_PRINT("OUT");
	return DRhO4tOq;
}

/**
* JsonParseValueString
*	@param String&	Jz36EKWP 
*	@param String&	p2aoYpjK 
*	@param String&	HTANwEtg 
*/
bool JsonParseValueString(String& Jz36EKWP, String& p2aoYpjK, String& HTANwEtg)
{
	DEBUG_PRINT("IN");

	DEBUG_PRINT2("param src", Jz36EKWP);
	DEBUG_PRINT2("param value name", p2aoYpjK);
	DEBUG_PRINT2("param value", HTANwEtg);

	uint32_t birRLT7L = Jz36EKWP.indexOf(p2aoYpjK);
	if (birRLT7L == -1) {

		DEBUG_PRINT2("json parse name error", p2aoYpjK);
		return false;
	}
	else {
		birRLT7L += p2aoYpjK.length();
		if ((birRLT7L + strlen(":\"")) > Jz36EKWP.length() ||
			Jz36EKWP.indexOf(':', birRLT7L) == -1 ||
			Jz36EKWP.indexOf('\"', (birRLT7L + 1)) == -1) {


			DEBUG_PRINT2("json parse value error", p2aoYpjK);
			return false;
		}
		uint32_t iG6b82zi = Jz36EKWP.indexOf('\"', (birRLT7L + 1));
		uint32_t cSs1RtBl = Jz36EKWP.indexOf('\"', (iG6b82zi + 1));
		if (cSs1RtBl == -1) {


			DEBUG_PRINT2("json parse value end error", p2aoYpjK);
			return false;
		}
		HTANwEtg = Jz36EKWP.substring((iG6b82zi + 1), cSs1RtBl);
	}

	DEBUG_PRINT("OUT");
	return true;
}


const char r5W8MkjA[] = { ',', '\r', '\n', '}' };

/**
* JsonParseValueUInt32
*	@param String&		Jz36EKWP 
*	@param String&		p2aoYpjK 
*	@param uint32_t&	HTANwEtg 
*/
bool JsonParseValueUInt32(String& Jz36EKWP, String& p2aoYpjK, uint32_t& HTANwEtg)
{
	DEBUG_PRINT("IN");

	DEBUG_PRINT2("param src", Jz36EKWP);
	DEBUG_PRINT2("param value name", p2aoYpjK);
	DEBUG_PRINT2("param value", HTANwEtg);

	uint32_t birRLT7L = Jz36EKWP.indexOf(p2aoYpjK);
	if (birRLT7L == -1) {

		DEBUG_PRINT2("json parse name error", p2aoYpjK);
		return false;
	}
	else {
		birRLT7L += p2aoYpjK.length();
		if ((birRLT7L + strlen(":}")) > Jz36EKWP.length() ||
			Jz36EKWP.indexOf(':', birRLT7L) == -1) {


			DEBUG_PRINT2("json parse value error", p2aoYpjK);
			return false;
		}

		uint32_t iG6b82zi = birRLT7L + 1;
		uint32_t cSs1RtBl = 0;
		uint32_t i = 0;
		for (i = 0; i < sizeof(r5W8MkjA); i++) {
			cSs1RtBl = Jz36EKWP.indexOf(r5W8MkjA[i], iG6b82zi);
			if (cSs1RtBl != -1) {
				break;
			}
		}
		if (cSs1RtBl == -1) {


			DEBUG_PRINT2("json parse value end error", p2aoYpjK);
			return false;
		}

		bool g9nuZcGc = false;
		uint32_t MGLgVbBm = 0;
		for (i = iG6b82zi; i < cSs1RtBl; i++) {
			char c = Jz36EKWP.charAt(i);
			if (c >= '0' && c <= '9') {
				MGLgVbBm = MGLgVbBm * 10 + (c - '0');
				g9nuZcGc = true;
			}
			else {
				g9nuZcGc = false;
				DEBUG_PRINT2("json parse no num error", c);
				break;
			}
		}
		if (!g9nuZcGc) {


			DEBUG_PRINT2("json parse no value error", p2aoYpjK);
			return false;
		}
		HTANwEtg = MGLgVbBm;
	}

	DEBUG_PRINT("OUT");
	return true;
}

/**
* JsonParseAccessInfo
*	@param String&	hJstFwLT 
*/
bool JsonParseAccessInfo(String& hJstFwLT)
{
	DEBUG_PRINT("IN");

	bool jLoVroBF = false;
	Ido0dXS0 CQmILTbJ = { 0 };

	if (hJstFwLT.indexOf("{") == -1 ||
		hJstFwLT.indexOf("}") == -1) {

		ERROR_PRINT("json parse error");
		return false;
	}

	String p2aoYpjK = "\"Host\"";
	String ovxXljnR;
	if (!JsonParseValueString(hJstFwLT, p2aoYpjK, ovxXljnR)) {

		ERROR_PRINT("json parse error Host");
		return false;
	}
	strcpy(CQmILTbJ.NhrThuQr, ovxXljnR.c_str());
	DEBUG_PRINT2("Host", CQmILTbJ.NhrThuQr);

	p2aoYpjK = "\"Port\"";
	uint32_t  Te5CM4iM = 0;
	if (!JsonParseValueUInt32(hJstFwLT, p2aoYpjK, Te5CM4iM)) {

		ERROR_PRINT("json parse error Port");
		return false;
	}
	CQmILTbJ.ITerYv84 = (uint16_t)Te5CM4iM;
	DEBUG_PRINT2("Port", CQmILTbJ.ITerYv84);

	p2aoYpjK = "\"AuthPath\"";
	if (!JsonParseValueString(hJstFwLT, p2aoYpjK, ovxXljnR)) {

		ERROR_PRINT("json parse error AuthPath");
		return false;
	}
	strcpy(CQmILTbJ.RImO3BBw, ovxXljnR.c_str());
	DEBUG_PRINT2("AuthPath", CQmILTbJ.RImO3BBw);

	p2aoYpjK = "\"InfoPath\"";
	if (!JsonParseValueString(hJstFwLT, p2aoYpjK, ovxXljnR)) {

		ERROR_PRINT("json parse error InfoPath");
		return false;
	}
	strcpy(CQmILTbJ.hWHpOEFJ, ovxXljnR.c_str());
	DEBUG_PRINT2("InfoPath", CQmILTbJ.hWHpOEFJ);

	p2aoYpjK = "\"Term\"";
	if (!JsonParseValueUInt32(hJstFwLT, p2aoYpjK, Te5CM4iM)) {

		ERROR_PRINT("json parse error Term");
		return false;
	}
	CQmILTbJ.DU9L0Uyl = Te5CM4iM;
	DEBUG_PRINT2("Term", CQmILTbJ.DU9L0Uyl);

	if (CQmILTbJ.NhrThuQr[0] == '\0' || CQmILTbJ.RImO3BBw[0] == '\0' ||
		CQmILTbJ.hWHpOEFJ[0] == '\0' || CQmILTbJ.DU9L0Uyl == 0) {
		ERROR_PRINT("get invalid settings");
		return false;
	}
	else {
		DEBUG_PRINT("get settings");
		bool jxRKJRff = false;
		jLoVroBF = true;
		if (strcmp(CQmILTbJ.NhrThuQr, abOV1CXr.NhrThuQr) != 0) {
			DEBUG_PRINT2("Host is different", abOV1CXr.NhrThuQr);
			strcpy(abOV1CXr.NhrThuQr, CQmILTbJ.NhrThuQr);
			jxRKJRff = true;
		}
		if (strcmp(CQmILTbJ.RImO3BBw, abOV1CXr.RImO3BBw) != 0) {
			DEBUG_PRINT2("AuthPath is different", abOV1CXr.RImO3BBw);
			strcpy(abOV1CXr.RImO3BBw, CQmILTbJ.RImO3BBw);
			jxRKJRff = true;
		}
		if (strcmp(CQmILTbJ.hWHpOEFJ, abOV1CXr.hWHpOEFJ) != 0) {
			DEBUG_PRINT2("InfoPath is different", abOV1CXr.hWHpOEFJ);
			strcpy(abOV1CXr.hWHpOEFJ, CQmILTbJ.hWHpOEFJ);
			jxRKJRff = true;
		}
		if (CQmILTbJ.ITerYv84 != abOV1CXr.ITerYv84) {
			DEBUG_PRINT2("Port is different", abOV1CXr.ITerYv84);
			abOV1CXr.ITerYv84 = CQmILTbJ.ITerYv84;
			jxRKJRff = true;
		}
		if (CQmILTbJ.DU9L0Uyl != abOV1CXr.DU9L0Uyl) {
			DEBUG_PRINT2("Term is different", abOV1CXr.DU9L0Uyl);
			abOV1CXr.DU9L0Uyl = CQmILTbJ.DU9L0Uyl;
			jxRKJRff = true;
		}
		if (jxRKJRff) {

			EEPROM.begin(sizeof(Ido0dXS0));
			EEPROM.put<Ido0dXS0>(0, abOV1CXr);
			EEPROM.end();
			DEBUG_PRINT2("setting is different", jxRKJRff);
		}
	}

	DEBUG_PRINT("OUT");
	return jLoVroBF;
}
