cmd_/home/citofonia/tlwn8200nddriver/hal/hal_btcoex.o := gcc -Wp,-MD,/home/citofonia/tlwn8200nddriver/hal/.hal_btcoex.o.d  -nostdinc -isystem /usr/lib/gcc/arm-linux-gnueabihf/5/include -I/usr/src/linux-headers-3.4.113-sun8i/arch/arm/include -Iarch/arm/include/generated -Iinclude  -include /usr/src/linux-headers-3.4.113-sun8i/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-sunxi/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -Os -marm -fno-dwarf2-cfi-asm -fno-omit-frame-pointer -mapcs -mno-sched-prolog -fno-ipa-sra -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -Wframe-larger-than=1024 -fno-stack-protector -Wno-unused-but-set-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-var-tracking-assignments -pg -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -DCC_HAVE_ASM_GOTO -O1 -Wno-unused-variable -Wno-unused-value -Wno-unused-label -Wno-unused-parameter -Wno-unused-function -Wno-unused -Wno-date-time -Wno-incompatible-pointer-types -I/home/citofonia/tlwn8200nddriver/include -I/home/citofonia/tlwn8200nddriver/hal/phydm -I/home/citofonia/tlwn8200nddriver/platform -DCONFIG_RTL8192E -DCONFIG_MP_INCLUDED -DCONFIG_HW_PWRP_DETECTION -DCONFIG_EFUSE_CONFIG_FILE -DEFUSE_MAP_PATH=\"/system/etc/wifi/wifi_efuse_8192eu.map\" -DWIFIMAC_PATH=\"/data/wifimac.txt\" -DCONFIG_LOAD_PHY_PARA_FROM_FILE -DREALTEK_CONFIG_PATH=\"\" -DCONFIG_CALIBRATE_TX_POWER_BY_REGULATORY -DCONFIG_RTW_ADAPTIVITY_EN=0 -DCONFIG_RTW_ADAPTIVITY_MODE=0 -DCONFIG_BR_EXT '-DCONFIG_BR_EXT_BRNAME="'br0'"' -DCONFIG_WIFI_MONITOR -DDM_ODM_SUPPORT_TYPE=0x04 -DCONFIG_LITTLE_ENDIAN -DCONFIG_IOCTL_CFG80211 -DRTW_USE_CFG80211_STA_EVENT  -DMODULE  -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(hal_btcoex)"  -D"KBUILD_MODNAME=KBUILD_STR(8192eu)" -c -o /home/citofonia/tlwn8200nddriver/hal/.tmp_hal_btcoex.o /home/citofonia/tlwn8200nddriver/hal/hal_btcoex.c

source_/home/citofonia/tlwn8200nddriver/hal/hal_btcoex.o := /home/citofonia/tlwn8200nddriver/hal/hal_btcoex.c

deps_/home/citofonia/tlwn8200nddriver/hal/hal_btcoex.o := \
    $(wildcard include/config/bt/coexist.h) \
    $(wildcard include/config/lps/lclk.h) \
    $(wildcard include/config/concurrent/mode.h) \
    $(wildcard include/config/p2p.h) \
    $(wildcard include/config/bt/coexist/socket/trx.h) \
    $(wildcard include/config/rtl8723b.h) \
    $(wildcard include/config/pci/hci.h) \
    $(wildcard include/config/usb/hci.h) \
    $(wildcard include/config/sdio/hci.h) \
    $(wildcard include/config/gspi/hci.h) \
    $(wildcard include/config/load/phy/para/from/file.h) \

/home/citofonia/tlwn8200nddriver/hal/hal_btcoex.o: $(deps_/home/citofonia/tlwn8200nddriver/hal/hal_btcoex.o)

$(deps_/home/citofonia/tlwn8200nddriver/hal/hal_btcoex.o):
