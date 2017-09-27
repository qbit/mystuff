# $OpenBSD: Makefile.template,v 1.76 2017/02/25 16:04:20 danj Exp $

COMMENT =	automate clojure projects without setting your hair on fire

GH_ACCOUNT =	technomancy
GH_PROJECT =	leiningen
GH_TAGNAME =	2.7.1

CATEGORIES =	devel

# Eclipse Public License - v1.0
PERMIT_PACKAGE_CDROM =	Yes

RUN_DEPENDS =		jre-*|jdk-*:devel/jdk/1.8 \
			shells/bash
NO_BUILD =		Yes

do-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/leiningen
	${INSTALL_PROGRAM} ${WRKSRC}/bin/lein ${PREFIX}/bin;
	${INSTALL_DATA} ${WRKSRC}/doc/*.md ${PREFIX}/share/doc/leiningen
	${INSTALL_MAN} ${WRKSRC}/doc/lein.1 ${PREFIX}/man/man1

.include <bsd.port.mk>
