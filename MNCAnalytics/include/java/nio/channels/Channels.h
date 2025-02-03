//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/channels/Channels.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioChannelsChannels")
#ifdef RESTRICT_JavaNioChannelsChannels
#define INCLUDE_ALL_JavaNioChannelsChannels 0
#else
#define INCLUDE_ALL_JavaNioChannelsChannels 1
#endif
#undef RESTRICT_JavaNioChannelsChannels

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioChannelsChannels_) && (INCLUDE_ALL_JavaNioChannelsChannels || defined(INCLUDE_JavaNioChannelsChannels))
#define JavaNioChannelsChannels_

@class JavaIoInputStream;
@class JavaIoOutputStream;
@class JavaIoReader;
@class JavaIoWriter;
@class JavaNioCharsetCharsetDecoder;
@class JavaNioCharsetCharsetEncoder;
@protocol JavaNioChannelsAsynchronousByteChannel;
@protocol JavaNioChannelsReadableByteChannel;
@protocol JavaNioChannelsWritableByteChannel;

/*!
 @brief Utility methods for channels and streams.
 <p> This class defines static methods that support the interoperation of the
  stream classes of the <tt><code>java.io</code></tt> package with the channel
  classes of this package.  </p>
 @author Mark Reinhold
 @author Mike McCloskey
 @author JSR-51 Expert Group
 @since 1.4
 */
@interface JavaNioChannelsChannels : NSObject

#pragma mark Public

/*!
 @brief Constructs a channel that reads bytes from the given stream.
 <p> The resulting channel will not be buffered; it will simply redirect
  its I/O operations to the given stream.  Closing the channel will in
  turn cause the stream to be closed.  </p>
 @param inArg The stream from which bytes are to be read
 @return A new readable byte channel
 */
+ (id<JavaNioChannelsReadableByteChannel>)newChannelWithJavaIoInputStream:(JavaIoInputStream *)inArg OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Constructs a channel that writes bytes to the given stream.
 <p> The resulting channel will not be buffered; it will simply redirect
  its I/O operations to the given stream.  Closing the channel will in
  turn cause the stream to be closed.  </p>
 @param outArg The stream to which bytes are to be written
 @return A new writable byte channel
 */
+ (id<JavaNioChannelsWritableByteChannel>)newChannelWithJavaIoOutputStream:(JavaIoOutputStream *)outArg OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Constructs a stream that reads bytes from the given channel.
 <p> The stream will not be buffered, and it will not support the <code>mark</code>
  or <code>reset</code> methods.  The
  stream will be safe for access by multiple concurrent threads.  Closing
  the stream will in turn cause the channel to be closed.  </p>
 @param ch The channel from which bytes will be read
 @return A new input stream
 @since 1.7
 */
+ (JavaIoInputStream *)newInputStreamWithJavaNioChannelsAsynchronousByteChannel:(id<JavaNioChannelsAsynchronousByteChannel>)ch OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Constructs a stream that reads bytes from the given channel.
 <p> The <tt>read</tt> methods of the resulting stream will throw an 
 <code>IllegalBlockingModeException</code> if invoked while the underlying
  channel is in non-blocking mode.  The stream will not be buffered, and
  it will not support the <code>mark</code> or <code>reset</code>
  methods.  The stream will be safe for access by
  multiple concurrent threads.  Closing the stream will in turn cause the
  channel to be closed.  </p>
 @param ch The channel from which bytes will be read
 @return A new input stream
 */
+ (JavaIoInputStream *)newInputStreamWithJavaNioChannelsReadableByteChannel:(id<JavaNioChannelsReadableByteChannel>)ch OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Constructs a stream that writes bytes to the given channel.
 <p> The stream will not be buffered. The stream will be safe for access
  by multiple concurrent threads.  Closing the stream will in turn cause
  the channel to be closed.  </p>
 @param ch The channel to which bytes will be written
 @return A new output stream
 @since 1.7
 */
+ (JavaIoOutputStream *)newOutputStreamWithJavaNioChannelsAsynchronousByteChannel:(id<JavaNioChannelsAsynchronousByteChannel>)ch OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Constructs a stream that writes bytes to the given channel.
 <p> The <tt>write</tt> methods of the resulting stream will throw an 
 <code>IllegalBlockingModeException</code> if invoked while the underlying
  channel is in non-blocking mode.  The stream will not be buffered.  The
  stream will be safe for access by multiple concurrent threads.  Closing
  the stream will in turn cause the channel to be closed.  </p>
 @param ch The channel to which bytes will be written
 @return A new output stream
 */
+ (JavaIoOutputStream *)newOutputStreamWithJavaNioChannelsWritableByteChannel:(id<JavaNioChannelsWritableByteChannel>)ch OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Constructs a reader that decodes bytes from the given channel using the
  given decoder.
 <p> The resulting stream will contain an internal input buffer of at
  least <tt>minBufferCap</tt> bytes.  The stream's <tt>read</tt> methods
  will, as needed, fill the buffer by reading bytes from the underlying
  channel; if the channel is in non-blocking mode when bytes are to be
  read then an <code>IllegalBlockingModeException</code> will be thrown.  The
  resulting stream will not otherwise be buffered, and it will not support
  the <code>mark</code> or <code>reset</code> methods.
  Closing the stream will in turn cause the channel to be closed.  </p>
 @param ch The channel from which bytes will be read
 @param dec The charset decoder to be used
 @param minBufferCap The minimum capacity of the internal byte buffer,
           or  <tt>
  -1 </tt>  if an implementation-dependent          default capacity is to be used
 @return A new reader
 */
+ (JavaIoReader *)newReaderWithJavaNioChannelsReadableByteChannel:(id<JavaNioChannelsReadableByteChannel>)ch
                                 withJavaNioCharsetCharsetDecoder:(JavaNioCharsetCharsetDecoder *)dec
                                                          withInt:(jint)minBufferCap OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Constructs a reader that decodes bytes from the given channel according
  to the named charset.
 <p> An invocation of this method of the form 
 <blockquote>@code

  Channels.newReader(ch, csname)
@endcode</blockquote>
  behaves in exactly the same way as the expression 
 <blockquote>@code

  Channels.newReader(ch,
                     Charset.forName(csName)
                         .newDecoder(),
                     -1);
@endcode</blockquote>
 @param ch The channel from which bytes will be read
 @param csName The name of the charset to be used
 @return A new reader
 @throw UnsupportedCharsetException
 If no support for the named charset is available
           in this instance of the Java virtual machine
 */
+ (JavaIoReader *)newReaderWithJavaNioChannelsReadableByteChannel:(id<JavaNioChannelsReadableByteChannel>)ch
                                                     withNSString:(NSString *)csName OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Constructs a writer that encodes characters using the given encoder and
  writes the resulting bytes to the given channel.
 <p> The resulting stream will contain an internal output buffer of at
  least <tt>minBufferCap</tt> bytes.  The stream's <tt>write</tt> methods
  will, as needed, flush the buffer by writing bytes to the underlying
  channel; if the channel is in non-blocking mode when bytes are to be
  written then an <code>IllegalBlockingModeException</code> will be thrown.
  The resulting stream will not otherwise be buffered.  Closing the stream
  will in turn cause the channel to be closed.  </p>
 @param ch The channel to which bytes will be written
 @param enc The charset encoder to be used
 @param minBufferCap The minimum capacity of the internal byte buffer,
           or  <tt>
  -1 </tt>  if an implementation-dependent          default capacity is to be used
 @return A new writer
 */
+ (JavaIoWriter *)newWriterWithJavaNioChannelsWritableByteChannel:(id<JavaNioChannelsWritableByteChannel>)ch
                                 withJavaNioCharsetCharsetEncoder:(JavaNioCharsetCharsetEncoder *)enc
                                                          withInt:(jint)minBufferCap OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Constructs a writer that encodes characters according to the named
  charset and writes the resulting bytes to the given channel.
 <p> An invocation of this method of the form 
 <blockquote>@code

  Channels.newWriter(ch, csname)
@endcode</blockquote>
  behaves in exactly the same way as the expression 
 <blockquote>@code

  Channels.newWriter(ch,
                     Charset.forName(csName)
                         .newEncoder(),
                     -1);
@endcode</blockquote>
 @param ch The channel to which bytes will be written
 @param csName The name of the charset to be used
 @return A new writer
 @throw UnsupportedCharsetException
 If no support for the named charset is available
           in this instance of the Java virtual machine
 */
+ (JavaIoWriter *)newWriterWithJavaNioChannelsWritableByteChannel:(id<JavaNioChannelsWritableByteChannel>)ch
                                                     withNSString:(NSString *)csName OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsChannels)

FOUNDATION_EXPORT JavaIoInputStream *JavaNioChannelsChannels_newInputStreamWithJavaNioChannelsReadableByteChannel_(id<JavaNioChannelsReadableByteChannel> ch);

FOUNDATION_EXPORT JavaIoOutputStream *JavaNioChannelsChannels_newOutputStreamWithJavaNioChannelsWritableByteChannel_(id<JavaNioChannelsWritableByteChannel> ch);

FOUNDATION_EXPORT JavaIoInputStream *JavaNioChannelsChannels_newInputStreamWithJavaNioChannelsAsynchronousByteChannel_(id<JavaNioChannelsAsynchronousByteChannel> ch);

FOUNDATION_EXPORT JavaIoOutputStream *JavaNioChannelsChannels_newOutputStreamWithJavaNioChannelsAsynchronousByteChannel_(id<JavaNioChannelsAsynchronousByteChannel> ch);

FOUNDATION_EXPORT id<JavaNioChannelsReadableByteChannel> JavaNioChannelsChannels_newChannelWithJavaIoInputStream_(JavaIoInputStream *inArg);

FOUNDATION_EXPORT id<JavaNioChannelsWritableByteChannel> JavaNioChannelsChannels_newChannelWithJavaIoOutputStream_(JavaIoOutputStream *outArg);

FOUNDATION_EXPORT JavaIoReader *JavaNioChannelsChannels_newReaderWithJavaNioChannelsReadableByteChannel_withJavaNioCharsetCharsetDecoder_withInt_(id<JavaNioChannelsReadableByteChannel> ch, JavaNioCharsetCharsetDecoder *dec, jint minBufferCap);

FOUNDATION_EXPORT JavaIoReader *JavaNioChannelsChannels_newReaderWithJavaNioChannelsReadableByteChannel_withNSString_(id<JavaNioChannelsReadableByteChannel> ch, NSString *csName);

FOUNDATION_EXPORT JavaIoWriter *JavaNioChannelsChannels_newWriterWithJavaNioChannelsWritableByteChannel_withJavaNioCharsetCharsetEncoder_withInt_(id<JavaNioChannelsWritableByteChannel> ch, JavaNioCharsetCharsetEncoder *enc, jint minBufferCap);

FOUNDATION_EXPORT JavaIoWriter *JavaNioChannelsChannels_newWriterWithJavaNioChannelsWritableByteChannel_withNSString_(id<JavaNioChannelsWritableByteChannel> ch, NSString *csName);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsChannels)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioChannelsChannels")
