SUMMARY = "tango control system DeviceServer"
LICENSE = "CLOSED"

DEPENDS = "tango omniorb4 zeromq"
SRC_URI = "file://*"

S = "${WORKDIR}/{PN}-${PV}/../"

EXTRA_OEMAKE = " 'CC=${CC}' 'RANLIB=${RANLIB}' 'AR=${AR}' 'BUILDDIR=${S}' \
'TANGO_HOME=${TMPDIR}/sysroots/zedboard-zynq7/usr' \
'OMNI_HOME=${TMPDIR}/sysroots/zedboard-zynq7/usr' \
'ZMQ_HOME=${TMPDIR}/sysroots/zedboard-zynq7/usr' \
'OUTPUT_DIR=${S}' \
"

do_compile () {
        export EmbeddedSystem=1
	export TOOLBINDIR=${S}
	oe_runmake
}

do_install() {
	install -m 0755 -d ${D}${bindir}
	install -m 0777 ${S}/ZedGPIO ${D}${bindir}
}


