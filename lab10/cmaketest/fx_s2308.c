#include "fx_s2308.h"

fixed fx_div1(fixed a, fixed b)
{
	return fromFloat(toFloat(a) / toFloat(b));
}

fixed fx_div2(fixed a, fixed b)
{
	// (a / b)/ FX_QNUM   // FX_QNUM = FX_QNUM_HALF1 + 2
	// 만약에 a가 2^28 보다 큰 수라면 Overflow 발생
	// b는 하위 4비트의 데이터를 버리게 되므로 오차가 발생할 수 있음
	return (a<<FX_QNUM_HALF1) / (b>>FX_QNUM_HALF2);
}
fixed fx_div3(fixed a, fixed b)
{
        long long la = a;
        la <<= FX_QNUM;
        la /= b;
        return (fixed) la;
}
