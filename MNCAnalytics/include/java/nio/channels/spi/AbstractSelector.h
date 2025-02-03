//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/channels/spi/AbstractSelector.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioChannelsSpiAbstractSelector")
#ifdef RESTRICT_JavaNioChannelsSpiAbstractSelector
#define INCLUDE_ALL_JavaNioChannelsSpiAbstractSelector 0
#else
#define INCLUDE_ALL_JavaNioChannelsSpiAbstractSelector 1
#endif
#undef RESTRICT_JavaNioChannelsSpiAbstractSelector

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioChannelsSpiAbstractSelector_) && (INCLUDE_ALL_JavaNioChannelsSpiAbstractSelector || defined(INCLUDE_JavaNioChannelsSpiAbstractSelector))
#define JavaNioChannelsSpiAbstractSelector_

#define RESTRICT_JavaNioChannelsSelector 1
#define INCLUDE_JavaNioChannelsSelector 1
#include "java/nio/channels/Selector.h"

@class JavaNioChannelsSelectionKey;
@class JavaNioChannelsSpiAbstractSelectableChannel;
@class JavaNioChannelsSpiAbstractSelectionKey;
@class JavaNioChannelsSpiSelectorProvider;
@protocol JavaUtilSet;

/*!
 @brief Base implementation class for selectors.
 <p> This class encapsulates the low-level machinery required to implement
  the interruption of selection operations.  A concrete selector class must
  invoke the <code>begin</code> and <code>end</code> methods before and
  after, respectively, invoking an I/O operation that might block
  indefinitely.  In order to ensure that the <code>end</code> method is always
  invoked, these methods should be used within a 
 <tt>try</tt>&nbsp;...&nbsp;<tt>finally</tt> block: 
 <blockquote>@code

  try {
      begin();
      // Perform blocking I/O operation here
      ...
  } finally {
      end();
  }
@endcode</blockquote>
  
 <p> This class also defines methods for maintaining a selector's
  cancelled-key set and for removing a key from its channel's key set, and
  declares the abstract <code>register</code> method that is invoked by a
  selectable channel's <code>register</code>
  method in order to perform the actual work of registering a channel.  </p>
 @author Mark Reinhold
 @author JSR-51 Expert Group
 @since 1.4
 */
@interface JavaNioChannelsSpiAbstractSelector : JavaNioChannelsSelector

#pragma mark Public

/*!
 @brief Closes this selector.
 <p> If the selector has already been closed then this method returns
  immediately.  Otherwise it marks the selector as closed and then invokes the 
 <code>implCloseSelector</code> method in order to
  complete the close operation.  </p>
 @throw IOException
 If an I/O error occurs
 */
- (void)close;

- (jboolean)isOpen;

/*!
 @brief Returns the provider that created this channel.
 @return The provider that created this channel
 */
- (JavaNioChannelsSpiSelectorProvider *)provider;

#pragma mark Protected

/*!
 @brief Initializes a new instance of this class.
 @param provider The provider that created this selector
 */
- (instancetype __nonnull)initWithJavaNioChannelsSpiSelectorProvider:(JavaNioChannelsSpiSelectorProvider *)provider;

/*!
 @brief Marks the beginning of an I/O operation that might block indefinitely.
 <p> This method should be invoked in tandem with the <code>end</code>
  method, using a <tt>try</tt>&nbsp;...&nbsp;<tt>finally</tt> block as
  shown <a href="#be">above</a>, in order to implement interruption for
  this selector. 
 <p> Invoking this method arranges for the selector's <code>wakeup</code>
  method to be invoked if a thread's <code>interrupt</code>
  method is invoked while the thread is
  blocked in an I/O operation upon the selector.  </p>
 */
- (void)begin;

/*!
 @brief Retrieves this selector's cancelled-key set.
 <p> This set should only be used while synchronized upon it.  </p>
 @return The cancelled-key set
 */
- (id<JavaUtilSet>)cancelledKeys;

/*!
 @brief Removes the given key from its channel's key set.
 <p> This method must be invoked by the selector for each channel that it
  deregisters.  </p>
 @param key The selection key to be removed
 */
- (void)deregisterWithJavaNioChannelsSpiAbstractSelectionKey:(JavaNioChannelsSpiAbstractSelectionKey *)key;

/*!
 @brief Marks the end of an I/O operation that might block indefinitely.
 <p> This method should be invoked in tandem with the <code>begin</code>
  method, using a <tt>try</tt>&nbsp;...&nbsp;<tt>finally</tt> block as
  shown <a href="#be">above</a>, in order to implement interruption for
  this selector.  </p>
 */
- (void)end;

/*!
 @brief Closes this selector.
 <p> This method is invoked by the <code>close</code> method in order
  to perform the actual work of closing the selector.  This method is only
  invoked if the selector has not yet been closed, and it is never invoked
  more than once. 
 <p> An implementation of this method must arrange for any other thread
  that is blocked in a selection operation upon this selector to return
  immediately as if by invoking the <code>wakeup</code>
  method. </p>
 @throw IOException
 If an I/O error occurs while closing the selector
 */
- (void)implCloseSelector;

/*!
 @brief Registers the given channel with this selector.
 <p> This method is invoked by a channel's <code>register</code>
  method in order to perform
  the actual work of registering the channel with this selector.  </p>
 @param ch The channel to be registered
 @param ops The initial interest set, which must be valid
 @param att The initial attachment for the resulting key
 @return A new key representing the registration of the given channel
           with this selector
 */
- (JavaNioChannelsSelectionKey *)register__WithJavaNioChannelsSpiAbstractSelectableChannel:(JavaNioChannelsSpiAbstractSelectableChannel *)ch
                                                                                   withInt:(jint)ops
                                                                                    withId:(id)att;

#pragma mark Package-Private

- (void)cancelWithJavaNioChannelsSelectionKey:(JavaNioChannelsSelectionKey *)k;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsSpiAbstractSelector)

FOUNDATION_EXPORT void JavaNioChannelsSpiAbstractSelector_initWithJavaNioChannelsSpiSelectorProvider_(JavaNioChannelsSpiAbstractSelector *self, JavaNioChannelsSpiSelectorProvider *provider);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsSpiAbstractSelector)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioChannelsSpiAbstractSelector")
