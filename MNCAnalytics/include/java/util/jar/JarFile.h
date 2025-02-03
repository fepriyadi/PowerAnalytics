//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/jar/JarFile.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilJarJarFile")
#ifdef RESTRICT_JavaUtilJarJarFile
#define INCLUDE_ALL_JavaUtilJarJarFile 0
#else
#define INCLUDE_ALL_JavaUtilJarJarFile 1
#endif
#undef RESTRICT_JavaUtilJarJarFile

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilJarJarFile_) && (INCLUDE_ALL_JavaUtilJarJarFile || defined(INCLUDE_JavaUtilJarJarFile))
#define JavaUtilJarJarFile_

#define RESTRICT_JavaUtilZipZipFile 1
#define INCLUDE_JavaUtilZipZipFile 1
#include "java/util/zip/ZipFile.h"

@class JavaIoFile;
@class JavaIoInputStream;
@class JavaNioCharsetCharset;
@class JavaUtilJarJarEntry;
@class JavaUtilJarManifest;
@class JavaUtilZipZipEntry;
@protocol JavaUtilEnumeration;
@protocol JavaUtilStreamStream;

/*!
 @brief The <code>JarFile</code> class is used to read the contents of a jar file
  from any file that can be opened with <code>java.io.RandomAccessFile</code>.
 It extends the class <code>java.util.zip.ZipFile</code> with support
  for reading an optional <code>Manifest</code> entry. The 
 <code>Manifest</code> can be used to specify meta-information about the
  jar file and its entries. 
 <p> Unless otherwise noted, passing a <tt>null</tt> argument to a constructor
  or method in this class will cause a <code>NullPointerException</code> to be
  thrown.
  If the verify flag is on when opening a signed jar file, the content of the
  file is verified against its signature embedded inside the file. Please note
  that the verification process does not include validating the signer's
  certificate. A caller should inspect the return value of 
 <code>JarEntry.getCodeSigners()</code> to further determine if the signature
  can be trusted.
 @author David Connelly
 - seealso: Manifest
 - seealso: java.util.zip.ZipFile
 - seealso: java.util.jar.JarEntry
 @since 1.2
 */
@interface JavaUtilJarJarFile : JavaUtilZipZipFile
@property (readonly, copy, class) NSString *MANIFEST_NAME NS_SWIFT_NAME(MANIFEST_NAME);

#pragma mark Public

/*!
 @brief Creates a new <code>JarFile</code> to read from the specified 
 <code>File</code> object.The <code>JarFile</code> will be verified if
  it is signed.
 @param file the jar file to be opened for reading
 @throw IOExceptionif an I/O error has occurred
 @throw SecurityExceptionif access to the file is denied
          by the SecurityManager
 */
- (instancetype __nonnull)initWithJavaIoFile:(JavaIoFile *)file;

/*!
 @brief Creates a new <code>JarFile</code> to read from the specified 
 <code>File</code> object.
 @param file the jar file to be opened for reading
 @param verify whether or not to verify the jar file if  it is signed.
 @throw IOExceptionif an I/O error has occurred
 @throw SecurityExceptionif access to the file is denied
          by the SecurityManager.
 */
- (instancetype __nonnull)initWithJavaIoFile:(JavaIoFile *)file
                                 withBoolean:(jboolean)verify;

/*!
 @brief Creates a new <code>JarFile</code> to read from the specified 
 <code>File</code> object in the specified mode.The mode argument
  must be either <tt>OPEN_READ</tt> or <tt>OPEN_READ | OPEN_DELETE</tt>.
 @param file the jar file to be opened for reading
 @param verify whether or not to verify the jar file if  it is signed.
 @param mode the mode in which the file is to be opened
 @throw IOExceptionif an I/O error has occurred
 @throw IllegalArgumentException
 if the <tt>mode</tt> argument is invalid
 @throw SecurityExceptionif access to the file is denied
          by the SecurityManager
 @since 1.3
 */
- (instancetype __nonnull)initWithJavaIoFile:(JavaIoFile *)file
                                 withBoolean:(jboolean)verify
                                     withInt:(jint)mode;

/*!
 @brief Creates a new <code>JarFile</code> to read from the specified
  file <code>name</code>.The <code>JarFile</code> will be verified if
  it is signed.
 @param name the name of the jar file to be opened for reading
 @throw IOExceptionif an I/O error has occurred
 @throw SecurityExceptionif access to the file is denied
          by the SecurityManager
 */
- (instancetype __nonnull)initWithNSString:(NSString *)name;

/*!
 @brief Creates a new <code>JarFile</code> to read from the specified
  file <code>name</code>.
 @param name the name of the jar file to be opened for reading
 @param verify whether or not to verify the jar file if  it is signed.
 @throw IOExceptionif an I/O error has occurred
 @throw SecurityExceptionif access to the file is denied
          by the SecurityManager
 */
- (instancetype __nonnull)initWithNSString:(NSString *)name
                               withBoolean:(jboolean)verify;

/*!
 @brief Returns an enumeration of the zip file entries.
 */
- (id<JavaUtilEnumeration>)entries;

/*!
 @brief Returns the <code>ZipEntry</code> for the given entry name or 
 <code>null</code> if not found.
 @param name the jar file entry name
 @return the <code>ZipEntry</code> for the given entry name or
          <code>null</code> if not found
 @throw IllegalStateException
 may be thrown if the jar file has been closed
 - seealso: java.util.zip.ZipEntry
 */
- (JavaUtilZipZipEntry *)getEntryWithNSString:(NSString *)name;

/*!
 @brief Returns an input stream for reading the contents of the specified
  zip file entry.
 @param ze the zip file entry
 @return an input stream for reading the contents of the specified
          zip file entry
 @throw ZipExceptionif a zip file format error has occurred
 @throw IOExceptionif an I/O error has occurred
 @throw SecurityExceptionif any of the jar file entries
          are incorrectly signed.
 @throw IllegalStateException
 may be thrown if the jar file has been closed
 */
- (JavaIoInputStream *)getInputStreamWithJavaUtilZipZipEntry:(JavaUtilZipZipEntry *)ze;

/*!
 @brief Returns the <code>JarEntry</code> for the given entry name or 
 <code>null</code> if not found.
 @param name the jar file entry name
 @return the <code>JarEntry</code> for the given entry name or
          <code>null</code> if not found.
 @throw IllegalStateException
 may be thrown if the jar file has been closed
 - seealso: java.util.jar.JarEntry
 */
- (JavaUtilJarJarEntry *)getJarEntryWithNSString:(NSString *)name;

/*!
 @brief Returns the jar file manifest, or <code>null</code> if none.
 @return the jar file manifest, or <code>null</code> if none
 @throw IllegalStateException
 may be thrown if the jar file has been closed
 @throw IOExceptionif an I/O error has occurred
 */
- (JavaUtilJarManifest *)getManifest;

/*!
 @brief Returns <code>true</code> iff this JAR file has a manifest with the
  Class-Path attribute
 */
- (jboolean)hasClassPathAttribute;

- (id<JavaUtilStreamStream>)stream;

#pragma mark Package-Private

- (JavaUtilJarJarEntry *)newEntryWithJavaUtilZipZipEntry:(JavaUtilZipZipEntry *)ze OBJC_METHOD_FAMILY_NONE;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaIoFile:(JavaIoFile *)arg0
                                     withInt:(jint)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaIoFile:(JavaIoFile *)arg0
                                     withInt:(jint)arg1
                   withJavaNioCharsetCharset:(JavaNioCharsetCharset *)arg2 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaIoFile:(JavaIoFile *)arg0
                   withJavaNioCharsetCharset:(JavaNioCharsetCharset *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                 withJavaNioCharsetCharset:(JavaNioCharsetCharset *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(JavaUtilJarJarFile)

/*!
 @brief The JAR manifest file name.
 */
inline NSString *JavaUtilJarJarFile_get_MANIFEST_NAME(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaUtilJarJarFile_MANIFEST_NAME;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilJarJarFile, MANIFEST_NAME, NSString *)

FOUNDATION_EXPORT void JavaUtilJarJarFile_initWithNSString_(JavaUtilJarJarFile *self, NSString *name);

FOUNDATION_EXPORT JavaUtilJarJarFile *new_JavaUtilJarJarFile_initWithNSString_(NSString *name) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilJarJarFile *create_JavaUtilJarJarFile_initWithNSString_(NSString *name);

FOUNDATION_EXPORT void JavaUtilJarJarFile_initWithNSString_withBoolean_(JavaUtilJarJarFile *self, NSString *name, jboolean verify);

FOUNDATION_EXPORT JavaUtilJarJarFile *new_JavaUtilJarJarFile_initWithNSString_withBoolean_(NSString *name, jboolean verify) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilJarJarFile *create_JavaUtilJarJarFile_initWithNSString_withBoolean_(NSString *name, jboolean verify);

FOUNDATION_EXPORT void JavaUtilJarJarFile_initWithJavaIoFile_(JavaUtilJarJarFile *self, JavaIoFile *file);

FOUNDATION_EXPORT JavaUtilJarJarFile *new_JavaUtilJarJarFile_initWithJavaIoFile_(JavaIoFile *file) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilJarJarFile *create_JavaUtilJarJarFile_initWithJavaIoFile_(JavaIoFile *file);

FOUNDATION_EXPORT void JavaUtilJarJarFile_initWithJavaIoFile_withBoolean_(JavaUtilJarJarFile *self, JavaIoFile *file, jboolean verify);

FOUNDATION_EXPORT JavaUtilJarJarFile *new_JavaUtilJarJarFile_initWithJavaIoFile_withBoolean_(JavaIoFile *file, jboolean verify) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilJarJarFile *create_JavaUtilJarJarFile_initWithJavaIoFile_withBoolean_(JavaIoFile *file, jboolean verify);

FOUNDATION_EXPORT void JavaUtilJarJarFile_initWithJavaIoFile_withBoolean_withInt_(JavaUtilJarJarFile *self, JavaIoFile *file, jboolean verify, jint mode);

FOUNDATION_EXPORT JavaUtilJarJarFile *new_JavaUtilJarJarFile_initWithJavaIoFile_withBoolean_withInt_(JavaIoFile *file, jboolean verify, jint mode) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilJarJarFile *create_JavaUtilJarJarFile_initWithJavaIoFile_withBoolean_withInt_(JavaIoFile *file, jboolean verify, jint mode);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilJarJarFile)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilJarJarFile")
