# $OpenBSD:$

ONLY_FOR_ARCHS =	amd64 arm64 i386

USE_WXNEEDED =		Yes

COMMENT =		V8 JavaScript for clients and servers

DISTFILES =		node-pledge-{}${PLEDGE_VER}.tar.gz:0 ${DISTNAME}.tar.gz
DISTNAME =		node-${NODE_VERSION}
PKGNAME =		${DISTNAME:S/v//g}

MASTER_SITES0 =		https://github.com/qbit/node-pledge/archive/

CATEGORIES =		lang devel

HOMEPAGE =		http://nodejs.org/

MAINTAINER =		Aaron Bieber <abieber@openbsd.org>

# MIT
PERMIT_PACKAGE_CDROM =	Yes

MASTER_SITES =		${HOMEPAGE}dist/${NODE_VERSION}/


MODULES =	lang/python

USE_GMAKE =	Yes

BUILD_DEPENDS =	sysutils/flock

RUN_DEPENDS =	devel/gmake \
		sysutils/flock

TEST_TARGET =		test
CONFIGURE_STYLE =	simple

CONFIGURE_ARGS =	--shared-zlib

.if "${MACHINE}" ==	"arm64"
CONFIGURE_ARGS +=	--openssl-no-asm
.endif

MAKE_ENV+=      V=1 CXX="${CXX}" CXXFLAGS="${CXXFLAGS}" \

SUBST_VARS += 		DISTNAME
SUBST_VARS += 		DISTFILES
SUBST_VARS += 		EXTRACT_SUFX
SUBST_VARS += 		LOCALBASE
SUBST_VARS += 		PREFIX
SUBST_VARS +=		WRKDIST

MAKE_ENV +=		V=1 CXX="${CXX}" CXXFLAGS="${CXXFLAGS}" \
			LDFLAGS="-L${LOCALBASE}/lib -L${X11BASE}/lib"

do-extract:
	mkdir ${WRKSRC}; \
	tar -C ${WRKDIR} -zxf ${FULLDISTDIR}/${DISTNAME}.tar.gz && \
	tar -C ${WRKSRC}/deps/npm/node_modules/ -zxf \
		${FULLDISTDIR}/node-pledge-${PLEDGE_VER}.tar.gz && \
	mv ${WRKSRC}/deps/npm/node_modules/node-pledge-${PLEDGE_VER} \
		${WRKSRC}/deps/npm/node_modules/node-pledge

post-extract:
	# Currently tarbals exclude tools/eslint, while the tests that require it
	# are still in tree
	cd ${WRKSRC} && for x in $$(grep -r "tools/eslint" test/* | awk -F: '{print $$1}' | sort | uniq); do \
		rm $$x; \
	done

pre-configure:
	@# Bad practice, but prevents a whole stack of patches.
	ln -sf ${LOCALBASE}/bin/python${MODPY_VERSION} ${WRKDIR}/bin/python
	${SUBST_CMD} ${WRKDIST}/lib/module.js \
		${WRKDIST}/deps/npm/bin/node-gyp-bin/node-gyp \
		${WRKDIST}/deps/npm/node_modules/node-gyp/lib/configure.js \
		${WRKDIST}/deps/npm/node_modules/node-gyp/lib/install.js \
		${WRKDIST}/node.gyp \
		${WRKDIST}/common.gypi \
		${WRKDIST}/tools/test.py

post-install:
	${MODPY_BIN} ${MODPY_LIBDIR}/compileall.py \
		${PREFIX}/lib/node_modules/npm/node_modules/node-gyp/gyp
	${INSTALL_DATA_DIR} ${PREFIX}/share/node
	${INSTALL_DATA} ${FULLDISTDIR}/${DISTNAME}.tar.gz \
		${PREFIX}/share/node/${DISTNAME}.tar.gz
	ln -s ${TRUEPREFIX}/lib/node_modules/npm/bin/node-gyp-bin/node-gyp \
		${PREFIX}/bin/node-gyp;
	cd ${PREFIX}/lib/node_modules/npm/node_modules && for x in *; do \
		mv $$x ../..; \
		ln -s ../../$$x $$x; \
	done

do-test:
	cd ${WRKSRC} && \
	ulimit -n $$(ulimit -Hn) && \
	ulimit -d $$(ulimit -Hd) && \
	gmake test


