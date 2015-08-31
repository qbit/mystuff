# $OpenBSD: Makefile,v 1.3 2015/03/31 09:45:10 ajacoutot Exp $

COMMENT=	typeface designed for source code

DISTNAME=	hack-1.21
PKGNAME=	hack-font-1.21
CATEGORIES=	fonts x11

GH_ACCOUNT=	chrissimpkins
GH_PROJECT=	Hack
GH_TAGNAME=	v2.010

# Modified OFL 1.1
PERMIT_PACKAGE_CDROM=	Yes

MAINTAINER=	Aaron Bieber <abieber@openbsd.org>

HOMEPAGE=	http://sourcefoundry.org/hack/

NO_BUILD=	Yes
NO_TEST=	Yes

INST_DIR=	${PREFIX}/share/fonts/hack/

do-install:
	${INSTALL_DATA_DIR} ${INST_DIR}
	${INSTALL_DATA}	${WRKDIR}/${GH_PROJECT}-${GH_TAGNAME:S/v//g}/prebuild/*.ttf ${INST_DIR}

.include <bsd.port.mk>
