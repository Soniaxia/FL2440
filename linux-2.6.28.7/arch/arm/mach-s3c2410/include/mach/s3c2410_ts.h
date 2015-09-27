#ifndef __ASM_ARM_S3C2410_TS_H
#define __ASM_ARM_S3C2410_TS_H

struct s3c2410_ts_mach_info {
	int delay;
	int presc;
	int oversampling_shift;
};

void __init set_s3c2410ts_info(struct s3c2410_ts_mach_info *hard_s3c2410ts_info);

#endif
