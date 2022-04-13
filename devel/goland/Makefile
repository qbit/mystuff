# $OpenBSD: Makefile,v 1.38 2021/12/17 18:22:33 rsadowski Exp $

COMMENT=		Go IDE based on IntelliJ IDEA

V=			2021.3.4
DISTNAME=		goland-${V}
CATEGORIES=		devel

HOMEPAGE=		https://www.jetbrains.com/go/

MAINTAINER =		Aaron Bieber <abieber@openbsd.org>

PERMIT_PACKAGE=	nope

MASTER_SITES=		https://download.jetbrains.com/go/

MODULES=		java
MODJAVA_VER=		11

BUILD_DEPENDS=		${MODJAVA_RUN_DEPENDS}

RUN_DEPENDS=		devel/desktop-file-utils \
			java/javaPathHelper

NO_TEST=		Yes

PC=			${PREFIX}/goland

WRKDIST=		${WRKDIR}/GoLand-${V}

# If NO_BUILD is set, JAVA_HOME doesn't get defined. So do
# a no-op for do-build.
do-build:
	@true

do-install:
	${INSTALL_DATA_DIR} ${PC}
	@cd ${WRKDIST} && pax -rw . ${PC}
	@rm -rf ${PC}/plugins/android
	@rm -rf ${PC}/lib/pty4j-native
.for PLUGIN in darwin-x86-64 darwin-aarch64 win32-x86-64
	@rm -rf ${PC}/plugins/cwm-plugin/quiche-native/${PLUGIN}
.endfor
	${INSTALL_DATA_DIR} ${PREFIX}/share/applications
.for PROG in goland goland-lightedit
	@${SUBST_PROGRAM} ${FILESDIR}/${PROG} ${PREFIX}/bin/${PROG}
	@${SUBST_DATA} ${FILESDIR}/${PROG}.desktop \
		${PREFIX}/share/applications/${PROG}.desktop
.endfor
	${INSTALL_MAN} ${FILESDIR}/goland.1 ${PREFIX}/man/man1

.include <bsd.port.mk>
