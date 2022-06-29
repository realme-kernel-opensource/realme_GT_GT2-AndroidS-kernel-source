# SPDX-License-Identifier: GPL-2.0-only
obj-$(CONFIG_POWER_AVS)		+= avs/
obj-$(CONFIG_POWER_RESET)	+= reset/
obj-$(CONFIG_POWER_SUPPLY)	+= supply/
#ifdef OPLUS_FEATURE_CHG_BASIC

ifeq ($(strip $(BRAND_SHOW_FLAG)), oneplus)
	obj-$(CONFIG_OPLUS_SM8350_CHARGER)	+= oplus_chg/
else
	obj-$(CONFIG_OPLUS_SM8350_CHARGER)	+= oplus/
endif
#endif
