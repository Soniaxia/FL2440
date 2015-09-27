#ifndef __ASM_ARM_TS_H
#define __ASM_ARM_TS_H
struct EmbedSky_ts_mach_info {
	int delay;
	int presc;
	int oversampling_shift;
              };
void __init set_EmbedSky_ts_info(struct EmbedSky_ts_mach_info *hard_EmbedSky_ts_info);
#endif /* __ASM_ARM_TS_H */

