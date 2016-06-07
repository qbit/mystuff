# $OpenBSD: Makefile,v 1.6 2016/05/25 13:41:43 edd Exp $

COMMENT =	tftp rewrite daemon

GH_ACCOUNT =	qbit
GH_PROJECT =	trd
GH_TAGNAME =	v0.1.0
#DISTNAME =	trd-${V}
#DISTFILES =	trd-v${V}${EXTRACT_SUFX}

CATEGORIES =	sysutils
HOMEPAGE =	https://code.bolddaemon.com/qbit/trd

# ICS
PERMIT_PACKAGE_CDROM =	Yes

WANTLIB += c pthread

MODULES =		lang/go
MODGO_TYPE =		bin
MODGO_ENV =		PATH="${PORTPATH}" HOME="${PORTHOME}"

do-install:
	${INSTALL_PROGRAM} ${WRKDIR}/go/bin/trd ${PREFIX}/bin/

.include <bsd.port.mk>
