DESCRIPTION = "tango control system"
LICENSE = "GPLv3 | LGPLv3"
LIC_FILES_CHKSUM = " \
		 file://COPYING;md5=d32239bcb673463ab874e80d47fae504 \
		 file://COPYING.LESSER;md5=6a6a8e020838b23406c81b19c1d46df6 \
"
DEPENDS += " zlib zeromq omniorb-native omniorb4 "
SRC_URI = "http://downloads.sourceforge.net/project/tango-cs/tango-9.2.2.tar.gz \
	file://p922_1.diff;patch=1 \
"

SRC_URI[md5sum] = "b5df66504fda1775f4f4552486ef7316"
SRC_URI[sha256sum] = "bd99f215a2fccbcb9f7dfb40ca23a9646e90ecf7bc6f84dac0412a6483bdd73b"


#TO DO remove reference to zmq version and omniorb, apply patches ???
EXTRA_OECONF_append += "PATH=${PATH}:${STAGING_BINDIR_NATIVE}/arm-poky-linux-gnueabi/  \
--disable-dbserver \
'--with-zlib=${STAGING_DIR}' \
'OMNI_ROOT=${STAGING_DIR}/../work/armv7a-vfp-neon-poky-linux-gnueabi/omniorb4/4.2.1-r3/package/usr/' \
'ZMQ_ROOT=${STAGING_DIR}/../work/armv7a-vfp-neon-poky-linux-gnueabi/zeromq/4.1.5-r0/package/usr/' \
"
inherit autotools pkgconfig 

#TODO :
#requires zeromq omniorb omniorb4 zlib
#OMNI_ROOT and ZMQ_ROOT $PN
#libtool issue : remove  aclocal.m4

