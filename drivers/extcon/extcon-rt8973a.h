/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 * rt8973a.h
 *
 * Copyright (c) 2014 Samsung Electronics Co., Ltd
 */

#ifndef __LINUX_EXTCON_RT8973A_H
#define __LINUX_EXTCON_RT8973A_H

enum rt8973a_types {
	TYPE_RT8973A,
};

/* RT8973A registers */
enum rt8973A_reg {
	RT8973A_REG_DEVICE_ID = 0x1,
	RT8973A_REG_CONTROL1,
	RT8973A_REG_INT1,
	RT8973A_REG_INT2,
	RT8973A_REG_INTM1,
	RT8973A_REG_INTM2,
	RT8973A_REG_ADC,
	RT8973A_REG_RSVD_1,
	RT8973A_REG_RSVD_2,
	RT8973A_REG_DEV1,
	RT8973A_REG_DEV2,
	RT8973A_REG_RSVD_3,
	RT8973A_REG_RSVD_4,
	RT8973A_REG_RSVD_5,
	RT8973A_REG_RSVD_6,
	RT8973A_REG_RSVD_7,
	RT8973A_REG_RSVD_8,
	RT8973A_REG_RSVD_9,
	RT8973A_REG_MANUAL_SW1,
	RT8973A_REG_MANUAL_SW2,
	RT8973A_REG_RSVD_10,
	RT8973A_REG_RSVD_11,
	RT8973A_REG_RSVD_12,
	RT8973A_REG_RSVD_13,
	RT8973A_REG_RSVD_14,
	RT8973A_REG_RSVD_15,
	RT8973A_REG_RESET,

	RT8973A_REG_END,
};

/* Define RT8973A MASK/SHIFT constant */
#define RT8973A_REG_DEVICE_ID_VENDOR_SHIFT	0
#define RT8973A_REG_DEVICE_ID_VERSION_SHIFT	3
#define RT8973A_REG_DEVICE_ID_VENDOR_MASK	(0x7 << RT8973A_REG_DEVICE_ID_VENDOR_SHIFT)
#define RT8973A_REG_DEVICE_ID_VERSION_MASK	(0x1f << RT8973A_REG_DEVICE_ID_VERSION_SHIFT)

#define RT8973A_REG_CONTROL1_INTM_SHIFT	0
#define RT8973A_REG_CONTROL1_AUTO_CONFIG_SHIFT	2
#define RT8973A_REG_CONTROL1_I2C_RST_EN_SHIFT	3
#define RT8973A_REG_CONTROL1_SWITCH_OPEN_SHIFT	4
#define RT8973A_REG_CONTROL1_CHGTYP_SHIFT	5
#define RT8973A_REG_CONTROL1_USB_CHD_EN_SHIFT	6
#define RT8973A_REG_CONTROL1_ADC_EN_SHIFT	7
#define RT8973A_REG_CONTROL1_INTM_MASK		(0x1 << RT8973A_REG_CONTROL1_INTM_SHIFT)
#define RT8973A_REG_CONTROL1_AUTO_CONFIG_MASK	(0x1 << RT8973A_REG_CONTROL1_AUTO_CONFIG_SHIFT)
#define RT8973A_REG_CONTROL1_I2C_RST_EN_MASK	(0x1 << RT8973A_REG_CONTROL1_I2C_RST_EN_SHIFT)
#define RT8973A_REG_CONTROL1_SWITCH_OPEN_MASK	(0x1 << RT8973A_REG_CONTROL1_SWITCH_OPEN_SHIFT)
#define RT8973A_REG_CONTROL1_CHGTYP_MASK	(0x1 << RT8973A_REG_CONTROL1_CHGTYP_SHIFT)
#define RT8973A_REG_CONTROL1_USB_CHD_EN_MASK	(0x1 << RT8973A_REG_CONTROL1_USB_CHD_EN_SHIFT)
#define RT8973A_REG_CONTROL1_ADC_EN_MASK	(0x1 << RT8973A_REG_CONTROL1_ADC_EN_SHIFT)

#define RT9873A_REG_INTM1_ATTACH_SHIFT		0
#define RT9873A_REG_INTM1_DETACH_SHIFT		1
#define RT9873A_REG_INTM1_CHGDET_SHIFT		2
#define RT9873A_REG_INTM1_DCD_T_SHIFT		3
#define RT9873A_REG_INTM1_OVP_SHIFT		4
#define RT9873A_REG_INTM1_CONNECT_SHIFT		5
#define RT9873A_REG_INTM1_ADC_CHG_SHIFT		6
#define RT9873A_REG_INTM1_OTP_SHIFT		7
#define RT9873A_REG_INTM1_ATTACH_MASK		(0x1 << RT9873A_REG_INTM1_ATTACH_SHIFT)
#define RT9873A_REG_INTM1_DETACH_MASK		(0x1 <<  RT9873A_REG_INTM1_DETACH_SHIFT)
#define RT9873A_REG_INTM1_CHGDET_MASK		(0x1 <<  RT9873A_REG_INTM1_CHGDET_SHIFT)
#define RT9873A_REG_INTM1_DCD_T_MASK		(0x1 <<  RT9873A_REG_INTM1_DCD_T_SHIFT)
#define RT9873A_REG_INTM1_OVP_MASK		(0x1 <<  RT9873A_REG_INTM1_OVP_SHIFT)
#define RT9873A_REG_INTM1_CONNECT_MASK		(0x1 <<  RT9873A_REG_INTM1_CONNECT_SHIFT)
#define RT9873A_REG_INTM1_ADC_CHG_MASK		(0x1 <<  RT9873A_REG_INTM1_ADC_CHG_SHIFT)
#define RT9873A_REG_INTM1_OTP_MASK		(0x1 <<  RT9873A_REG_INTM1_OTP_SHIFT)

#define RT9873A_REG_INTM2_UVLO_SHIFT		1
#define RT9873A_REG_INTM2_POR_SHIFT		2
#define RT9873A_REG_INTM2_OTP_FET_SHIFT		3
#define RT9873A_REG_INTM2_OVP_FET_SHIFT		4
#define RT9873A_REG_INTM2_OCP_LATCH_SHIFT	5
#define RT9873A_REG_INTM2_OCP_SHIFT		6
#define RT9873A_REG_INTM2_OVP_OCP_SHIFT		7
#define RT9873A_REG_INTM2_UVLO_MASK		(0x1 << RT9873A_REG_INTM2_UVLO_SHIFT)
#define RT9873A_REG_INTM2_POR_MASK		(0x1 <<  RT9873A_REG_INTM2_POR_SHIFT)
#define RT9873A_REG_INTM2_OTP_FET_MASK		(0x1 <<  RT9873A_REG_INTM2_OTP_FET_SHIFT)
#define RT9873A_REG_INTM2_OVP_FET_MASK		(0x1 <<  RT9873A_REG_INTM2_OVP_FET_SHIFT)
#define RT9873A_REG_INTM2_OCP_LATCH_MASK	(0x1 <<  RT9873A_REG_INTM2_OCP_LATCH_SHIFT)
#define RT9873A_REG_INTM2_OCP_MASK		(0x1 <<  RT9873A_REG_INTM2_OCP_SHIFT)
#define RT9873A_REG_INTM2_OVP_OCP_MASK		(0x1 <<  RT9873A_REG_INTM2_OVP_OCP_SHIFT)

#define RT8973A_REG_ADC_SHIFT			0
#define RT8973A_REG_ADC_MASK			(0x1f << RT8973A_REG_ADC_SHIFT)

#define RT8973A_REG_DEV1_OTG_SHIFT		0
#define RT8973A_REG_DEV1_SDP_SHIFT		2
#define RT8973A_REG_DEV1_UART_SHIFT		3
#define RT8973A_REG_DEV1_CAR_KIT_TYPE1_SHIFT	4
#define RT8973A_REG_DEV1_CDPORT_SHIFT		5
#define RT8973A_REG_DEV1_DCPORT_SHIFT		6
#define RT8973A_REG_DEV1_OTG_MASK		(0x1 << RT8973A_REG_DEV1_OTG_SHIFT)
#define RT8973A_REG_DEV1_SDP_MASK		(0x1 << RT8973A_REG_DEV1_SDP_SHIFT)
#define RT8973A_REG_DEV1_UART_MASK		(0x1 << RT8973A_REG_DEV1_UART_SHIFT)
#define RT8973A_REG_DEV1_CAR_KIT_TYPE1_MASK	(0x1 << RT8973A_REG_DEV1_CAR_KIT_TYPE1_SHIFT)
#define RT8973A_REG_DEV1_CDPORT_MASK		(0x1 << RT8973A_REG_DEV1_CDPORT_SHIFT)
#define RT8973A_REG_DEV1_DCPORT_MASK		(0x1 << RT8973A_REG_DEV1_DCPORT_SHIFT)
#define RT8973A_REG_DEV1_USB_MASK		(RT8973A_REG_DEV1_SDP_MASK \
						| RT8973A_REG_DEV1_CDPORT_MASK)

#define RT8973A_REG_DEV2_JIG_USB_ON_SHIFT	0
#define RT8973A_REG_DEV2_JIG_USB_OFF_SHIFT	1
#define RT8973A_REG_DEV2_JIG_UART_ON_SHIFT	2
#define RT8973A_REG_DEV2_JIG_UART_OFF_SHIFT	3
#define RT8973A_REG_DEV2_JIG_USB_ON_MASK	(0x1 << RT8973A_REG_DEV2_JIG_USB_ON_SHIFT)
#define RT8973A_REG_DEV2_JIG_USB_OFF_MASK	(0x1 << RT8973A_REG_DEV2_JIG_USB_OFF_SHIFT)
#define RT8973A_REG_DEV2_JIG_UART_ON_MASK	(0x1 << RT8973A_REG_DEV2_JIG_UART_ON_SHIFT)
#define RT8973A_REG_DEV2_JIG_UART_OFF_MASK	(0x1 << RT8973A_REG_DEV2_JIG_UART_OFF_SHIFT)

#define RT8973A_REG_MANUAL_SW1_DP_SHIFT		2
#define RT8973A_REG_MANUAL_SW1_DM_SHIFT		5
#define RT8973A_REG_MANUAL_SW1_DP_MASK		(0x7 << RT8973A_REG_MANUAL_SW1_DP_SHIFT)
#define RT8973A_REG_MANUAL_SW1_DM_MASK		(0x7 << RT8973A_REG_MANUAL_SW1_DM_SHIFT)
#define DM_DP_CON_SWITCH_OPEN			0x0
#define DM_DP_CON_SWITCH_USB			0x1
#define DM_DP_CON_SWITCH_UART			0x3
#define DM_DP_SWITCH_OPEN			((DM_DP_CON_SWITCH_OPEN << RT8973A_REG_MANUAL_SW1_DP_SHIFT) \
						| (DM_DP_CON_SWITCH_OPEN << RT8973A_REG_MANUAL_SW1_DM_SHIFT))
#define DM_DP_SWITCH_USB			((DM_DP_CON_SWITCH_USB << RT8973A_REG_MANUAL_SW1_DP_SHIFT) \
						| (DM_DP_CON_SWITCH_USB << RT8973A_REG_MANUAL_SW1_DM_SHIFT))
#define DM_DP_SWITCH_UART			((DM_DP_CON_SWITCH_UART << RT8973A_REG_MANUAL_SW1_DP_SHIFT) \
						| (DM_DP_CON_SWITCH_UART << RT8973A_REG_MANUAL_SW1_DM_SHIFT))

#define RT8973A_REG_MANUAL_SW2_FET_ON_SHIFT	0
#define RT8973A_REG_MANUAL_SW2_JIG_ON_SHIFT	2
#define RT8973A_REG_MANUAL_SW2_BOOT_SW_SHIFT	3
#define RT8973A_REG_MANUAL_SW2_FET_ON_MASK	(0x1 << RT8973A_REG_MANUAL_SW2_FET_ON_SHIFT)
#define RT8973A_REG_MANUAL_SW2_JIG_ON_MASK	(0x1 << RT8973A_REG_MANUAL_SW2_JIG_ON_SHIFT)
#define RT8973A_REG_MANUAL_SW2_BOOT_SW_MASK	(0x1 << RT8973A_REG_MANUAL_SW2_BOOT_SW_SHIFT)
#define RT8973A_REG_MANUAL_SW2_FET_ON		0
#define RT8973A_REG_MANUAL_SW2_FET_OFF		0x1
#define RT8973A_REG_MANUAL_SW2_JIG_OFF		0
#define RT8973A_REG_MANUAL_SW2_JIG_ON		0x1
#define RT8973A_REG_MANUAL_SW2_BOOT_SW_ON	0
#define RT8973A_REG_MANUAL_SW2_BOOT_SW_OFF	0x1

#define RT8973A_REG_RESET_SHIFT			0
#define RT8973A_REG_RESET_MASK			(0x1 << RT8973A_REG_RESET_SHIFT)
#define RT8973A_REG_RESET			0x1

/* RT8973A Interrupts */
enum rt8973a_irq {
	/* Interrupt1*/
	RT8973A_INT1_ATTACH,
	RT8973A_INT1_DETACH,
	RT8973A_INT1_CHGDET,
	RT8973A_INT1_DCD_T,
	RT8973A_INT1_OVP,
	RT8973A_INT1_CONNECT,
	RT8973A_INT1_ADC_CHG,
	RT8973A_INT1_OTP,

	/* Interrupt2*/
	RT8973A_INT2_UVLO,
	RT8973A_INT2_POR,
	RT8973A_INT2_OTP_FET,
	RT8973A_INT2_OVP_FET,
	RT8973A_INT2_OCP_LATCH,
	RT8973A_INT2_OCP,
	RT8973A_INT2_OVP_OCP,

	RT8973A_NUM,
};

#define RT8973A_INT1_ATTACH_MASK		BIT(0)
#define RT8973A_INT1_DETACH_MASK		BIT(1)
#define RT8973A_INT1_CHGDET_MASK		BIT(2)
#define RT8973A_INT1_DCD_T_MASK			BIT(3)
#define RT8973A_INT1_OVP_MASK			BIT(4)
#define RT8973A_INT1_CONNECT_MASK		BIT(5)
#define RT8973A_INT1_ADC_CHG_MASK		BIT(6)
#define RT8973A_INT1_OTP_MASK			BIT(7)
#define RT8973A_INT2_UVLOT_MASK			BIT(0)
#define RT8973A_INT2_POR_MASK			BIT(1)
#define RT8973A_INT2_OTP_FET_MASK		BIT(2)
#define RT8973A_INT2_OVP_FET_MASK		BIT(3)
#define RT8973A_INT2_OCP_LATCH_MASK		BIT(4)
#define RT8973A_INT2_OCP_MASK			BIT(5)
#define RT8973A_INT2_OVP_OCP_MASK		BIT(6)

#endif /*  __LINUX_EXTCON_RT8973A_H */
