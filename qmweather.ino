/**
* QMWeather
*
* IDE: Arduino IDE
* BOARD: Generic ESP8266 Module
*/

#include <ESP8266WebServer.h>
#include <Ticker.h>

#include "kqx_common.h"

//-------------------------------------------------------------------
// Lib 
//-------------------------------------------------------------------

extern "C" {
#include <eagle_soc.h>

#define E1QEc9bI  (F_CPU / 2500000)
#define Whj0VUz7  (F_CPU / 1250000)
#define l3L4pRlb      (F_CPU /  800000)

	/**
	* _getCycleCount
	*/
	static uint32_t _getCycleCount(void) __attribute__((always_inline));
	static inline uint32_t _getCycleCount(void) {
		DEBUG_INTERRUPT1_PRINT("IN");

		uint32_t tMWQ1m8r;
		__asm__ __volatile__("rsr %0,ccount":"=a" (tMWQ1m8r));

		DEBUG_INTERRUPT1_PRINT2("OUT ccount", tMWQ1m8r);
		return tMWQ1m8r;
	}

	/**
	* show 
	*	@param uint8_t	gm9Y7d24 
	*	@param uint8_t*	MbmJ95O3 
	*	@param uint32_t	jqdiKIa5 
	*/
	void ICACHE_RAM_ATTR show(
		uint8_t gm9Y7d24,
		uint8_t *MbmJ95O3,
		uint32_t jqdiKIa5)
	{
		DEBUG_INTERRUPT1_PRINT("IN");

		DEBUG_INTERRUPT1_PRINT2("pin", gm9Y7d24);
		DEBUG_INTERRUPT1_PRINT2("numBytes", jqdiKIa5);

		uint32_t GbYrmWK6 = BIT(gm9Y7d24);
		uint8_t* oxGHRBf4 = MbmJ95O3;
		uint8_t* cSs1RtBl = oxGHRBf4 + jqdiKIa5;
		uint8_t bKEDiHgq = *oxGHRBf4++;
		uint8_t aR1UGIDX = 0x80;
		uint32_t sUf3ShQw = 0;

		uint32_t kem2yYS7 = E1QEc9bI;
		uint32_t vp89O4OG = Whj0VUz7;
		uint32_t v89iNeMo = l3L4pRlb;

		DEBUG_INTERRUPT1_PRINT2("pinMask", GbYrmWK6);
		DEBUG_INTERRUPT1_PRINT2("time0", kem2yYS7);
		DEBUG_INTERRUPT1_PRINT2("time1", vp89O4OG);
		DEBUG_INTERRUPT1_PRINT2("period", v89iNeMo);

		for (uint32_t t = kem2yYS7;; t = kem2yYS7) {
			DEBUG_INTERRUPT1_PRINT2("t", t);

			if (bKEDiHgq & aR1UGIDX) {
				t = vp89O4OG;
				DEBUG_INTERRUPT1_PRINT2("pix & mask", bKEDiHgq & aR1UGIDX);
				DEBUG_INTERRUPT1_PRINT2("t", t);
			}
			uint32_t Fd3qG7Y3;
			while (((Fd3qG7Y3 = _getCycleCount()) - sUf3ShQw) < v89iNeMo);
			DEBUG_INTERRUPT1_PRINT2("c", Fd3qG7Y3);
			GPIO_REG_WRITE(GPIO_OUT_W1TS_ADDRESS, GbYrmWK6);
			sUf3ShQw = Fd3qG7Y3;
			while (((Fd3qG7Y3 = _getCycleCount()) - sUf3ShQw) < t);
			DEBUG_INTERRUPT1_PRINT2("c", Fd3qG7Y3);
			GPIO_REG_WRITE(GPIO_OUT_W1TC_ADDRESS, GbYrmWK6);
			if (!(aR1UGIDX >>= 1)) {
				DEBUG_INTERRUPT1_PRINT2("mask", aR1UGIDX);
				if (oxGHRBf4 >= cSs1RtBl) {
					DEBUG_INTERRUPT1_PRINT("p >= cSs1RtBl");
					break;
				}
				bKEDiHgq = *oxGHRBf4++;
				aR1UGIDX = 0x80;
			}
		}
		while ((_getCycleCount() - sUf3ShQw) < v89iNeMo);

		DEBUG_INTERRUPT1_PRINT("OUT");
	}
}

//-------------------------------------------------------------------
// define
//-------------------------------------------------------------------


xX0gXtVI duIa3Bkv = ffx00Jba;

//-------------------------------------------------------------------
// value 
//-------------------------------------------------------------------

const uint8_t ItxhDspj	= JcOdF4A8;
const char poNQGYZR[]			= Kc6CuwyA;
const char vzoPsOJe[]	= cIfzh3T8;


ESP8266WebServer bORkG5GM(ItxhDspj);

//-------------------------------------------------------------------
// value
//-------------------------------------------------------------------

volatile YM98PaJG kR1FWfhY[v9sQ2pW0] = { q9qnECgA };


struct BcqC2BFM {
	uint8_t NOsK5EJb;
	uint8_t lu1PnCg5;
	uint8_t Gqj8EN3R;
};
volatile BcqC2BFM frDIFK81 = { 0 };


uint32_t StepPos = 0;


volatile uint32_t LedBlinkColor = mQ76RfPF;
volatile uint32_t LedFlowing = buQIDqXG;


volatile uint32_t OutputLevel = a7WcvzVF;

//-------------------------------------------------------------------
// value
//-------------------------------------------------------------------


Ido0dXS0 abOV1CXr = { 0 };

//-------------------------------------------------------------------
// Func 
//-------------------------------------------------------------------

void SetLedsColor(const uint32_t data);

//-------------------------------------------------------------------
// Func
//-------------------------------------------------------------------

volatile uint32_t LedsDelayCount = 0;
volatile uint32_t LedsBlinkingDelayCount = 0;
volatile uint32_t EoWlogbu = 0;
volatile uint32_t GGSXu2Fa = 0;
volatile uint32_t OperationInfoInterruptTime = qUT0Os0f;
volatile bool first = true;

Ticker feOahgRy;
/**
* InterruptLedsLighting 
*/
void InterruptLedsLighting()
{


	DEBUG_INTERRUPT2_PRINT("IN");

	LedsDelayCount++;
	DEBUG_INTERRUPT2_PRINT2("LedsDelayCount incrimented", LedsDelayCount);


	uint8_t NOsK5EJb = frDIFK81.NOsK5EJb;
	uint8_t lu1PnCg5 = frDIFK81.lu1PnCg5;
	uint8_t Gqj8EN3R = frDIFK81.Gqj8EN3R;

	DEBUG_INTERRUPT2_PRINT2("r", NOsK5EJb);
	DEBUG_INTERRUPT2_PRINT2("g", lu1PnCg5);
	DEBUG_INTERRUPT2_PRINT2("b", Gqj8EN3R);

	DEBUG_INTERRUPT2_PRINT2("StepPos", StepPos);


	uint32_t duty = 0;
	if (StepPos < ssNWunxu) {
		duty = (StepPos << TrMtiD1p) / ssNWunxu;
		DEBUG_INTERRUPT2_PRINT2("blink rising time duty", duty);
	}
	else if (StepPos < (ssNWunxu + pIlCiRKD)) {
		duty = (1 << TrMtiD1p);
		DEBUG_INTERRUPT2_PRINT2("blink hold time duty", duty);
	}
	else if (StepPos < (ssNWunxu + pIlCiRKD + Z74tHg2d)) {
		duty = (1 << TrMtiD1p) - ((StepPos - ssNWunxu - pIlCiRKD) << TrMtiD1p) / Z74tHg2d;
		DEBUG_INTERRUPT2_PRINT2("blink falling time duty", duty);
	}
	else {
		duty = 0;
		DEBUG_INTERRUPT2_PRINT2("blink interval time duty", duty);
	}


	uint8_t _NOsK5EJb = (NOsK5EJb * duty) >> TrMtiD1p;
	uint8_t _lu1PnCg5 = (lu1PnCg5 * duty) >> TrMtiD1p;
	uint8_t _Gqj8EN3R = (Gqj8EN3R * duty) >> TrMtiD1p;

	DEBUG_INTERRUPT2_PRINT2("_r", _NOsK5EJb);
	DEBUG_INTERRUPT2_PRINT2("_g", _lu1PnCg5);
	DEBUG_INTERRUPT2_PRINT2("_b", _Gqj8EN3R);


	uint8_t MbmJ95O3[v9sQ2pW0 * 3] = { 0 };
	for (int i = 0; i < v9sQ2pW0; ++i) {
		int j = i * 3;
		DEBUG_INTERRUPT2_PRINT2("i", i);
		DEBUG_INTERRUPT2_PRINT2("j", j);
		switch (kR1FWfhY[i]) {
		case JrW2ciVP:
			MbmJ95O3[j + 0] = lu1PnCg5;
			MbmJ95O3[j + 1] = NOsK5EJb;
			MbmJ95O3[j + 2] = Gqj8EN3R;
			DEBUG_INTERRUPT2_PRINT("LED lighting");
			DEBUG_INTERRUPT2_PRINT2("g", lu1PnCg5);
			DEBUG_INTERRUPT2_PRINT2("r", NOsK5EJb);
			DEBUG_INTERRUPT2_PRINT2("b", Gqj8EN3R);
			break;
		case GMK7fnl1:
			MbmJ95O3[j + 0] = _lu1PnCg5;
			MbmJ95O3[j + 1] = _NOsK5EJb;
			MbmJ95O3[j + 2] = _Gqj8EN3R;
			DEBUG_INTERRUPT2_PRINT("LED blinking");
			DEBUG_INTERRUPT2_PRINT2("_g", _lu1PnCg5);
			DEBUG_INTERRUPT2_PRINT2("_r", _NOsK5EJb);
			DEBUG_INTERRUPT2_PRINT2("_b", _Gqj8EN3R);
			break;
		default:
			DEBUG_INTERRUPT2_PRINT("LED off");
			break;
		}
	}


	DEBUG_INTERRUPT2_PRINT("before noInterrupts()");
	noInterrupts();
	DEBUG_INTERRUPT2_PRINT("after noInterrupts()");

	show(L64tL2Xd, MbmJ95O3, v9sQ2pW0 * 3);

	DEBUG_INTERRUPT2_PRINT("before interrupts()");
	interrupts();
	DEBUG_INTERRUPT2_PRINT("after interrupts()");


	StepPos += YIYmaUCD;
	DEBUG_INTERRUPT2_PRINT2("increment StepPos", StepPos);
	if (StepPos > (ssNWunxu + pIlCiRKD + Z74tHg2d + tpPXxem4)) {
		StepPos = 0;
		DEBUG_INTERRUPT2_PRINT2("next cycle StepPos", StepPos);
	}

	LedsDelayCount--;

	DEBUG_INTERRUPT2_PRINT2("LedsDelayCount decrimented", LedsDelayCount);

	DEBUG_INTERRUPT2_PRINT("OUT");
}

/**
* InterruptLedsBlinking 
*/
void InterruptLedsBlinking()
{


	DEBUG_INTERRUPT2_PRINT("IN");

	LedsBlinkingDelayCount++;

	DEBUG_INTERRUPT2_PRINT2("LedsBlinkingDelayCount incrimented", LedsBlinkingDelayCount);

	uint32_t PP5X7hX7 = 0;
	uint8_t YFLGDVWu = 0;

	DEBUG_INTERRUPT2_PRINT2("LedBlinkColor", LedBlinkColor);
	DEBUG_INTERRUPT2_PRINT2("LedFlowing", LedFlowing);

	switch (LedFlowing) {
	case buQIDqXG:

		LedBlinkColor ^= jf6SVD2f;
		DEBUG_INTERRUPT2_PRINT2("on/off", LedBlinkColor);
		break;

	case uSIjGxXz:


		PP5X7hX7 = LedBlinkColor >> ux5Ff0nb;

		YFLGDVWu = (LedBlinkColor & jf6SVD2f) >> (b7TzuSI2 + 1);
		if (YFLGDVWu == 0) {

			YFLGDVWu = 1 << (LHA1U8C0 - b7TzuSI2);
			DEBUG_INTERRUPT2_PRINT2("overflow nextflowing", YFLGDVWu);
		}
		LedBlinkColor = (PP5X7hX7 << ux5Ff0nb) | (YFLGDVWu << b7TzuSI2);
		DEBUG_INTERRUPT2_PRINT2("flowing from left", LedBlinkColor);
		break;

	case octUcoGp:


		PP5X7hX7 = LedBlinkColor >> ux5Ff0nb;

		YFLGDVWu = (LedBlinkColor & jf6SVD2f) >> (b7TzuSI2 - 1);
		if (YFLGDVWu > 0xF) {

			YFLGDVWu = 1 << (zdS14wQD - b7TzuSI2);
			DEBUG_INTERRUPT2_PRINT2("overflow nextflowing", YFLGDVWu);
		}
		LedBlinkColor = (PP5X7hX7 << ux5Ff0nb) | (YFLGDVWu << b7TzuSI2);
		DEBUG_INTERRUPT2_PRINT2("flowing from right", LedBlinkColor);
		break;

	case ia4NrpaU:

		DEBUG_INTERRUPT2_PRINT("flowing no");
		break;

	case oMZqe5B6:

		DEBUG_INTERRUPT2_PRINT("flowing next blink");


		feOahgRy.detach();


		StepPos = 0;


		SetLedsColor(LedBlinkColor);


		feOahgRy.attach_ms(YIYmaUCD, InterruptLedsLighting);
		break;

	case opkHh8M6:

		DEBUG_INTERRUPT2_PRINT("flowing next on/off");
		SetLedsBlinking(LedBlinkColor, buQIDqXG);
		break;
	}

	if (LedFlowing != oMZqe5B6 &&
		LedFlowing != opkHh8M6) {


		SetLedsColor(LedBlinkColor);


		LedsBlink();
	}

	LedsBlinkingDelayCount--;

	DEBUG_INTERRUPT2_PRINT2("LedsBlinkingDelayCount decrimented", LedsBlinkingDelayCount);

	DEBUG_INTERRUPT2_PRINT("OUT");
}

Ticker iOperationInfo;
/**
* InterruptOperationInfoUpdate 
*/
void InterruptOperationInfoUpdate()
{
	DEBUG_INTERRUPT3_PRINT("IN");

	GGSXu2Fa++;
	EoWlogbu++;

	DEBUG_INTERRUPT3_PRINT2("WifiConnect delay incrimented", GGSXu2Fa);
	DEBUG_INTERRUPT3_PRINT2("OperationInfo delay incrimented", EoWlogbu);

	DEBUG_INTERRUPT3_PRINT("OUT");
}

//-------------------------------------------------------------------
// Func
//-------------------------------------------------------------------

/**
* LedsBlink 
*/
void LedsBlink()
{


	DEBUG_INTERRUPT2_PRINT("IN");


	uint8_t NOsK5EJb = frDIFK81.NOsK5EJb;
	uint8_t lu1PnCg5 = frDIFK81.lu1PnCg5;
	uint8_t Gqj8EN3R = frDIFK81.Gqj8EN3R;

	DEBUG_INTERRUPT2_PRINT2("r", NOsK5EJb);
	DEBUG_INTERRUPT2_PRINT2("g", lu1PnCg5);
	DEBUG_INTERRUPT2_PRINT2("b", Gqj8EN3R);


	uint8_t MbmJ95O3[v9sQ2pW0 * 3] = { 0 };
	for (int i = 0; i < v9sQ2pW0; ++i) {
		int j = i * 3;
		DEBUG_INTERRUPT2_PRINT2("i", i);
		DEBUG_INTERRUPT2_PRINT2("j", j);
		if (kR1FWfhY[i] == JrW2ciVP) {

			MbmJ95O3[j + 0] = lu1PnCg5;
			MbmJ95O3[j + 1] = NOsK5EJb;
			MbmJ95O3[j + 2] = Gqj8EN3R;
			DEBUG_INTERRUPT2_PRINT("LED lighting");
			DEBUG_INTERRUPT2_PRINT2("g", lu1PnCg5);
			DEBUG_INTERRUPT2_PRINT2("r", NOsK5EJb);
			DEBUG_INTERRUPT2_PRINT2("b", Gqj8EN3R);
		}
	}


	DEBUG_INTERRUPT2_PRINT("before noInterrupts()");
	noInterrupts();
	DEBUG_INTERRUPT2_PRINT("after noInterrupts()");

	show(L64tL2Xd, MbmJ95O3, v9sQ2pW0 * 3);

	DEBUG_INTERRUPT2_PRINT("before interrupts()");
	interrupts();
	DEBUG_INTERRUPT2_PRINT("after interrupts()");

	DEBUG_INTERRUPT2_PRINT("OUT");
}

/**
* SetLedsColor 
*	@param const uint32_t	nUcwl1sH 
*/
void SetLedsColor(const uint32_t data)
{
	DEBUG_INTERRUPT2_PRINT("IN");


	kR1FWfhY[0] = kR1FWfhY[1] = kR1FWfhY[2] = kR1FWfhY[3] = q9qnECgA;


	uint32_t NOsK5EJb = ((data >> 24) & 0xff) * OutputLevel;
	uint32_t lu1PnCg5 = ((data >> 16) & 0x00ff) * OutputLevel;
	uint32_t Gqj8EN3R = ((data >>  8) & 0x0000ff) * OutputLevel;

	DEBUG_INTERRUPT2_PRINT2("OutputLevel", OutputLevel);
	DEBUG_INTERRUPT2_PRINT2("r * outputLevel", NOsK5EJb);
	DEBUG_INTERRUPT2_PRINT2("g * outputLevel", lu1PnCg5);
	DEBUG_INTERRUPT2_PRINT2("b * outputLevel", Gqj8EN3R);

	if (NOsK5EJb % 100) {


		frDIFK81.NOsK5EJb = (uint32_t)(double(NOsK5EJb / 100) + 0.5);
		DEBUG_INTERRUPT2_PRINT2("rounding r", frDIFK81.NOsK5EJb);
	}
	else {


		frDIFK81.NOsK5EJb = NOsK5EJb / 100;
		DEBUG_INTERRUPT2_PRINT2("not rounding r", frDIFK81.NOsK5EJb);
	}

	if (lu1PnCg5 % 100) {


		frDIFK81.lu1PnCg5 = (uint32_t)(double(lu1PnCg5 / 100) + 0.5);
		DEBUG_INTERRUPT2_PRINT2("rounding g", frDIFK81.lu1PnCg5);
	}
	else {


		frDIFK81.lu1PnCg5 = lu1PnCg5 / 100;
		DEBUG_INTERRUPT2_PRINT2("not rounding g", frDIFK81.lu1PnCg5);
	}

	if (Gqj8EN3R % 100) {


		frDIFK81.Gqj8EN3R = (uint32_t)(double(Gqj8EN3R / 100) + 0.5);
		DEBUG_INTERRUPT2_PRINT2("rounding b", frDIFK81.Gqj8EN3R);
	}
	else {


		frDIFK81.Gqj8EN3R = Gqj8EN3R / 100;
		DEBUG_INTERRUPT2_PRINT2("not rounding b", frDIFK81.Gqj8EN3R);
	}

	DEBUG_INTERRUPT2_PRINT2("r", frDIFK81.NOsK5EJb);
	DEBUG_INTERRUPT2_PRINT2("g", frDIFK81.g);
	DEBUG_INTERRUPT2_PRINT2("b", frDIFK81.Gqj8EN3R);


	uint8_t OperationInfo = (data) & 0x000000ff;
	DEBUG_INTERRUPT2_PRINT2("OperationInfo", OperationInfo);


	uint8_t current = OperationInfo >> 4;
	DEBUG_INTERRUPT2_PRINT2("current OperationInfo", current);
	for (int i = 0; i < 4; ++i) {
		if (current & (1 << (3 - i))) {
			kR1FWfhY[i] = JrW2ciVP;
			DEBUG_INTERRUPT2_PRINT2("Lighting", i);
		}
	}


	uint8_t forecast = OperationInfo & 0x0f;
	DEBUG_INTERRUPT2_PRINT2("forecast OperationInfo", forecast);
	for (int i = 0; i < 4; ++i) {

		if ((kR1FWfhY[i] == q9qnECgA) && (forecast & (1 << (3 - i)))) {
			kR1FWfhY[i] = GMK7fnl1;
			DEBUG_INTERRUPT2_PRINT2("Blinking", i);
		}
	}

	DEBUG_INTERRUPT2_PRINT("OUT");
}

/**
* SetLedsBlinking 
*	@param const uint32_t	hIjcZt7c 
*	@param const uint32_t	LjDRbPYx 
*/
void SetLedsBlinking(const uint32_t hIjcZt7c, const uint32_t LjDRbPYx)
{
	DEBUG_PRINT("IN");

	DEBUG_PRINT2("param color", hIjcZt7c);
	DEBUG_PRINT2("param flow", LjDRbPYx);
	DEBUG_PRINT2("OutputLevel", OutputLevel);


	feOahgRy.detach();


	SetLedsColor(hIjcZt7c);
	LedsBlink();


	LedFlowing = LjDRbPYx;


	LedBlinkColor = hIjcZt7c;
	feOahgRy.attach_ms(Axq1TMzl, InterruptLedsBlinking);

	DEBUG_PRINT("OUT");
}

/**
* SetLedsNextBlinking
*	@param const uint32_t	hIjcZt7c
*	@param CEylI3du&	qHmEdXki
*	@param const uint32_t	j9bA7CUD
*/
void SetLedsNextBlinking(const uint32_t hIjcZt7c, CEylI3du& qHmEdXki, const uint32_t j9bA7CUD)
{
	DEBUG_PRINT("IN");

	DEBUG_PRINT2("param color", hIjcZt7c);
	DEBUG_PRINT2("param Info data", qHmEdXki.nUcwl1sH);
	DEBUG_PRINT2("param Info outputLevel", qHmEdXki.DpNfe0Pf);
	DEBUG_PRINT2("param keepTime", j9bA7CUD);

	uint32_t DH3yI1i6 = 0;
	uint32_t YFLGDVWu = 0;
	uint32_t blinkColor = 0;

	if (qHmEdXki.nUcwl1sH != 0) {


		DH3yI1i6 = oMZqe5B6;
		YFLGDVWu = oMZqe5B6;
		blinkColor = qHmEdXki.nUcwl1sH;
		DEBUG_PRINT2("pre color flowing", DH3yI1i6);
		DEBUG_PRINT2("pre color next flowing", YFLGDVWu);
	}
	else {


		DH3yI1i6 = opkHh8M6;
		YFLGDVWu = buQIDqXG;
		blinkColor = iqG9PxLN;
		DEBUG_PRINT2("no pre color flowing", DH3yI1i6);
		DEBUG_PRINT2("no pre color next flowing", YFLGDVWu);
		DEBUG_PRINT2("no pre color color", blinkColor);
	}

	DEBUG_PRINT2("LedBlinkColor", LedBlinkColor);
	DEBUG_PRINT2("LedFlowing", LedFlowing);

	DEBUG_PRINT("flowing or blinkColor change");

	LedFlowing = DH3yI1i6;
	LedBlinkColor = blinkColor;


	feOahgRy.detach();


	OutputLevel = qHmEdXki.DpNfe0Pf;


	SetLedsColor(hIjcZt7c);
	LedsBlink();


	feOahgRy.once_ms(j9bA7CUD, InterruptLedsBlinking);

	DEBUG_PRINT("OUT");
}

/**
* UpdateOperationInfos 
*	@param uint32_t&		DU9L0Uyl 
*	@param CEylI3du&	ajq0PsG8 
*/
void UpdateOperationInfos(uint32_t& DU9L0Uyl, CEylI3du& ajq0PsG8)
{
	DEBUG_PRINT("IN");

	FAePoVoY DeAUVtgk = wgr2ignj;
	CEylI3du qHmEdXki = { 0,  a7WcvzVF };


	bool ret = APIserverGetOperationInfos(qHmEdXki, DU9L0Uyl, DeAUVtgk);
	if (ret) {

		DEBUG_PRINT("get operation infos success");
		DEBUG_PRINT2("term", DU9L0Uyl);

		duIa3Bkv = wyEf0h9Q;


		DEBUG_PRINT2("outputLevel", qHmEdXki.DpNfe0Pf);

		if (ajq0PsG8.nUcwl1sH != qHmEdXki.nUcwl1sH ||
			ajq0PsG8.DpNfe0Pf != qHmEdXki.DpNfe0Pf ||
			LedBlinkColor != mQ76RfPF) {

			DEBUG_PRINT2("info.nUcwl1sH is changed", qHmEdXki.nUcwl1sH);


			ajq0PsG8.nUcwl1sH = qHmEdXki.nUcwl1sH;
			ajq0PsG8.DpNfe0Pf = qHmEdXki.DpNfe0Pf;


			LedBlinkColor = mQ76RfPF;


			feOahgRy.detach();


			StepPos = 0;


			OutputLevel = qHmEdXki.DpNfe0Pf;


			SetLedsColor(qHmEdXki.nUcwl1sH);


			feOahgRy.attach_ms(YIYmaUCD, InterruptLedsLighting);
		}
	}
	else {

		DEBUG_PRINT2("get operation infos error", DeAUVtgk);

		switch (DeAUVtgk) {
		case NkfajNzP:

			DEBUG_PRINT("connect error");

			DEBUG_PRINT2("LED blink color", LedBlinkColor);


			SetLedsNextBlinking(jisWvNXZ, ajq0PsG8, zQWobgTe);

			duIa3Bkv = wyEf0h9Q;
			break;

		case L86duSkr:

			DEBUG_PRINT("access token error");

			if (LedBlinkColor != McorIaqX) {
				DEBUG_PRINT2("LED blink color changed", LedBlinkColor);


				OutputLevel = ajq0PsG8.DpNfe0Pf;


				SetLedsBlinking(McorIaqX, ia4NrpaU);
			}


			duIa3Bkv = wyEf0h9Q;
			break;

		default:
			//case L86duSkr_OUT:
			//case a1I3oHPZ:

			DEBUG_PRINT("authtoken out or bad request error");

			DEBUG_PRINT2("LED blink color", LedBlinkColor);


			SetLedsNextBlinking(MWueyeYe, ajq0PsG8, cErpE1eq);

			duIa3Bkv = wyEf0h9Q;
			break;
		}
	}

	DEBUG_PRINT("OUT");
}

//-------------------------------------------------------------------
// Func
//-------------------------------------------------------------------

/**
* setup 
*/
void setup()
{
	Serial.begin(WQ7nipYd);
	while (!Serial);

#ifdef DEBUG
	delay(100);
#endif

	DEBUG_PRINT("setup start");


	pinMode(CYEpMuDF, INPUT);
	pinMode(L64tL2Xd, OUTPUT);


	digitalWrite(L64tL2Xd, LOW);


	SetLedsColor(VfSXHQ6l);


	LedsBlink();


	uint32_t XftxuW28 = digitalRead(CYEpMuDF);
	DEBUG_PRINT2("factory reset switch", XftxuW28);


	GetSettings();

	DEBUG_PRINT2("software reset", abOV1CXr.fXP44W3g);
	DEBUG_PRINT2("wifi access succeeded", abOV1CXr.qw0na3dJ);
	DEBUG_PRINT2("productid", abOV1CXr.EnarnfC1);


	if (strcmp(abOV1CXr.EnarnfC1, MDczVErT) == 0) {

		DEBUG_PRINT("factory test productid software reset OFF");
		abOV1CXr.fXP44W3g = 0;
	}


	if (XftxuW28 == LOW || 
		abOV1CXr.fXP44W3g ||
		!HasSettings()) {
		DEBUG_PRINT2("default factory setting software reset", abOV1CXr.fXP44W3g);
		ClearSettings();


		DEBUG_PRINT("setting mode start");
		duIa3Bkv = RYf7Lfq7;
	}
	else {

		DEBUG_PRINT("setting mode start");
		duIa3Bkv = wyEf0h9Q;
	}

#ifdef DEBUG_TEST

	TestRun();
#endif

	DEBUG_PRINT("setup completed");
}

/**
* loop 
*/
void loop()
{

//	DEBUG_PRINT2("heap", ESP.getFreeHeap());

	static bool jLoVroBF = true;
	static CEylI3du ajq0PsG8 = { 0, a7WcvzVF };

	switch (duIa3Bkv) {


	case RYf7Lfq7:
		DEBUG_PRINT("starting web server mode");

		jLoVroBF = ConfigureWebServer(bORkG5GM, poNQGYZR, vzoPsOJe);
		if (jLoVroBF) {

			DEBUG_PRINT("web server start");
			bORkG5GM.begin();


			uint32_t hIjcZt7c = ((m3HZlaAI ^ jf6SVD2f) | (1 << LHA1U8C0));
			SetLedsBlinking(hIjcZt7c, uSIjGxXz);


			duIa3Bkv = kyPSflYy;

			DEBUG_PRINT2("web server start next mode", duIa3Bkv);
		}
		else {

			DEBUG_PRINT("web server not start");


			SetLedsBlinking(exItUKSD, ia4NrpaU);


			duIa3Bkv = PWulpHGS;

			DEBUG_PRINT2("web server not start next mode", duIa3Bkv);
		}
		break;


	case kyPSflYy:
		//DEBUG_PRINT("waiting user connection mode");
		bORkG5GM.handleClient();
		break;


	case wyEf0h9Q:
		//DEBUG_PRINT("connecting user AP mode");

		if (GGSXu2Fa == 0 && !first) {

			//DEBUG_PRINT2("not connection delay count and not first", GGSXu2Fa);
			break;
		}


		DEBUG_PRINT2("connection delay count", GGSXu2Fa);

		jLoVroBF = ConnectWiFi();
		if (jLoVroBF) {

			DEBUG_PRINT("connection success");

			if (!first) {

				duIa3Bkv = dawKBCjT;
				DEBUG_PRINT2("connection not first next mode", duIa3Bkv);
			}
			else {
				DEBUG_PRINT2("iOperationInfo.attach_ms time", OperationInfoInterruptTime);


				iOperationInfo.once_ms((OperationInfoInterruptTime * WO5Shqvl), InterruptOperationInfoUpdate);


				DEBUG_PRINT2("connection first next mode", duIa3Bkv);
			}


			SetwifiAccessSucceeded();


			ClearSoftwareReset();
		}
		else {

			DEBUG_PRINT("connection error");


			DisconnectWiFi();


			SetLedsBlinking(kAeW6XCF, buQIDqXG);

			if (EoWlogbu > 0 && !first) {

				EoWlogbu--;
				DEBUG_PRINT2("operation info delay count decrimented", EoWlogbu);
			}

			if (first) {


				OperationInfoInterruptTime = abOV1CXr.DU9L0Uyl;

				DEBUG_PRINT2("iOperationInfo.attach_ms time", OperationInfoInterruptTime);


				iOperationInfo.attach_ms((OperationInfoInterruptTime * WO5Shqvl), InterruptOperationInfoUpdate);
			}


			SetSoftwareReset();

			DEBUG_PRINT2("connection error next mode", duIa3Bkv);


		}
		if (!first) {

			GGSXu2Fa--;
			DEBUG_PRINT2("connection delay count decrimented", GGSXu2Fa);
		}
		else {

			first = false;
			DEBUG_PRINT2("first flag off", first);
		}
		break;


	case dawKBCjT: {
		DEBUG_PRINT("updating operation info mode");

		if (EoWlogbu == 0) {

			DEBUG_PRINT("not operation info delay count");
			break;
		}


		DEBUG_PRINT("operation info delay count");

		 uint32_t DU9L0Uyl = abOV1CXr.DU9L0Uyl;


		UpdateOperationInfos(DU9L0Uyl, ajq0PsG8);


		EoWlogbu--;
		DEBUG_PRINT2("operation info delay count decrimented", GGSXu2Fa);

		if (duIa3Bkv != PWulpHGS) {
			DEBUG_PRINT("mode is not error");

			if (DU9L0Uyl != OperationInfoInterruptTime) {


				iOperationInfo.detach();


				OperationInfoInterruptTime = DU9L0Uyl;
				DEBUG_PRINT2("iOperationInfoInterruptTime change", OperationInfoInterruptTime);


				iOperationInfo.attach_ms((OperationInfoInterruptTime * WO5Shqvl), InterruptOperationInfoUpdate);
			}
		}
		break;
	}

	case PWulpHGS:
		//DEBUG_PRINT("error mode");
		break;
	}


	if (LedsDelayCount > 0) {
		INFO_PRINT2("leds delay count", LedsDelayCount);
	}
	if (LedsBlinkingDelayCount > 0) {
		INFO_PRINT2("leds blinking delay count", LedsBlinkingDelayCount);
	}
	if (GGSXu2Fa > 0) {
		INFO_PRINT2("WifiConnect delay count", GGSXu2Fa);
	}
	if (EoWlogbu > 0) {
		INFO_PRINT2("OperationInfo delay count", EoWlogbu);
	}
}
