# $OpenBSD: Makefile,v 1.2 2021/07/27 08:51:18 sthen Exp $

COMMENT =	a superset of JavaScript that compiles to JavaScript

V =		4.5.5
DISTNAME =	typescript-${V}

CATEGORIES =	devel

HOMEPAGE =	https://typescriptlang.org

EXTRACT_SUFX =	.tgz

WRKSRC =	${WRKDIR}/package

# Apache-2.0
PERMIT_PACKAGE =	Yes

MASTER_SITES =		https://github.com/microsoft/TypeScript/releases/download/v${V}/

RUN_DEPENDS =		lang/node

NO_BUILD =		Yes

do-install:
	rm -rf ${WRKSRC}/lib/{cs,de,es,fr,it,ja,ko,pl,pt-br,pt,ru,tr,zh-cn,zh-tw}
	${INSTALL_SCRIPT} ${WRKSRC}/bin/* ${PREFIX}/bin/
	${INSTALL_DATA_DIR} ${PREFIX}/lib/
	${INSTALL_DATA} ${WRKSRC}/lib/* ${PREFIX}/lib/

.include <bsd.port.mk>
