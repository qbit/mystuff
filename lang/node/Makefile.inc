COMMENT =	V8 JavaScript for clients and servers

DISTNAME =	node-${NODE_VERSION}
PKGNAME =	${DISTNAME:S/v//g}

USE_WXNEEDED =	Yes

CATEGORIES =	lang
MASTER_SITES =	${HOMEPAGE}dist/${NODE_VERSION}/
MASTER_SITES0 =	https://github.com/qbit/node-pledge/archive/

MAINTAINR =	Aaron Bieber <abieber@openbsd.org>

HOMEPAGE =	http://nodejs.org/

# MIT
PERMIT_PACKAGE_CDROM =	Yes

ONLY_FOR_ARCHES =	amd64 i386 powerpc

PLEDGE_VER =		1.1.0

DISTFILES =	node-pledge-{}${PLEDGE_VER}.tar.gz:0 ${DISTNAME}.tar.gz

MODULES=        gcc4 \
                lang/python

MODGCC4_LANGS = c c++
MODGCC4_ARCHS = *

USE_GMAKE=      Yes

BUILD_DEPENDS=  sysutils/flock

RUN_DEPENDS=    devel/gmake \
                lang/gcc/${MODGCC4_VERSION},-c++ \
                sysutils/flock

TEST_TARGET=            test
CONFIGURE_STYLE=        simple

# libpath and includes aren't picked up, but I added them here as a note.
# The patch for node.gyp is where they are actually being set.
#CONFIGURE_ARGS= --shared-openssl \
#                --shared-openssl-includes=${LOCALBASE}/include/eopenssl \
#                --shared-openssl-libpath=${LOCALBASE}/lib/eopenssl \
#                --shared-zlib
CONIFURE_ARGS=	--shared-zlib

SUBST_VARS+=    DISTNAME
SUBST_VARS+=    DISTFILES
SUBST_VARS+=    EXTRACT_SUFX
SUBST_VARS+=    LOCALBASE
SUBST_VARS+=    PREFIX
SUBST_VARS+=    WRKDIST

MAKE_ENV+=      V=1 CXX="${CXX}" CXXFLAGS="${CXXFLAGS}" \
                LDFLAGS="-L${LOCALBASE}/lib -L${X11BASE}/lib"


do-extract:
	mkdir ${WRKSRC}; \
	tar -C ${WRKDIR} -zxf ${FULLDISTDIR}/${DISTNAME}.tar.gz && \
	tar -C ${WRKSRC}/deps/npm/node_modules/ -zxf \
		${FULLDISTDIR}/node-pledge-${PLEDGE_VER}.tar.gz && \
	mv ${WRKSRC}/deps/npm/node_modules/node-pledge-${PLEDGE_VER} \
		${WRKSRC}/deps/npm/node_modules/node-pledge


pre-configure:
	# Bad practice, but prevents a whole stack of patches.
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
		${PREFIX}/node/${VERSION}/lib/node_modules/npm/node_modules/node-gyp/gyp
		${INSTALL_DATA_DIR} ${PREFIX}/share/node/${NODE_VERSION}
		${INSTALL_DATA} ${FULLDISTDIR}/${DISTNAME}.tar.gz \
		${PREFIX}/share/node/${NODE_VERSION}/${DISTNAME}.tar.gz
	ln -s ${TRUEPREFIX}/node/${VERSION}/lib/node_modules/npm/bin/node-gyp-bin/node-gyp \
		${PREFIX}/node/${VERSION}/bin/node-gyp;
	cd ${PREFIX}/node/${VERSION}/include/node/openssl/archs; rm -rf \
		{VC,aix,darwin,linux,solaris}*


