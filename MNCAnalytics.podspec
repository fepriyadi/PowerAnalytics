#
# Be sure to run `pod lib lint MNCAnalytics.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'MNCAnalytics'
  s.version          = '1.2.8'
  s.summary          = 'This is POD version of MNC Analytics'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
  TODO: Add long description of the pod here
                       DESC

  s.homepage         = 'https://repo.mncinnovation.id/dac/video-analytics/sdk/mobile-sdk/source/ios/pod/MNCAnalytics'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'fepriyadihrp' => 'fepriyadi.harahap@mncgroup.com' }
  s.source           = { :git => 'https://repo.mncinnovation.id/dac/video-analytics/sdk/mobile-sdk/source/ios/pod/MNCAnalytics.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '11.0'
  s.requires_arc = false
  s.static_framework = true
  s.libraries = 'icucore','z', 'iconv','jre_emul','json'

  s.source_files = 'MNCAnalytics/include/**/*.h', 'MNCAnalytics/public/*.h'
  s.public_header_files = 'MNCAnalytics/public/*.h'
  s.private_header_files = 'MNCAnalytics/include/*.h'
  s.frameworks = 'UIKit', 'Foundation','CoreFoundation'

  s.prepare_command = <<-CMD
      XCODEPROJECT=MNCAnalytics
      XCODETARGET=MNCAnalytics
      BUILDDIR=build
      BUILDROOT=${BUILDDIR}
      CONFIG=Release
      OUTDIR=${BUILDDIR}/${CONFIG}

      if [ -d "MNCAnalytics/lib" ]; then
        rm -rf "MNCAnalytics/lib"
      fi

      if [ ! -d "MNCAnalytics/lib" ]; then
        echo "fetching j2objc lib"
        mkdir MNCAnalytics/lib

        # use this lib locally to test sdk func. only
        # cp /Users/fep/Documents/SDK/PODS/j2objc/j2objc_lib/lib/libjre_emul.a MNCAnalytics/lib
        # cp /Users/fep/Documents/SDK/PODS/j2objc/j2objc_lib/lib/libjson.a MNCAnalytics/lib

        # ready to download j2objc lib and publish after test locally successful
        curl -OL https://github.com/fepriyadi/MNCAnalytics/releases/download/1.2.3/lib.zip
        unzip -d MNCAnalytics/lib lib.zip
        rm lib.zip
      fi

      echo "Creating framework"
  
      if [ -d "${BUILDDIR}" ]; then
        rm -rf "${BUILDDIR}"
      fi

      mkdir -p "${OUTDIR}"

      if [ -f "${OUTDIR}/lib${XCODEPROJECT}.a" ]; then
          rm "${OUTDIR}/lib${XCODEPROJECT}.a"
      fi

      if [ -f "MNCAnalytics/lib" ]; then
        rm "MNCAnalytics/lib/*.a"
      fi

      echo "=======> Building devices..."
      xcodebuild -project ${XCODEPROJECT}.xcodeproj -target ${XCODETARGET} ONLY_ACTIVE_ARCH=YES -configuration ${CONFIG} -sdk iphoneos  
      BUILD_DIR="${BUILDDIR}" BUILD_ROOT="${BUILDROOT}" BITCODE_GENERATION_MODE=bitcode
      if [ $? -gt 0 ]; then
        echo "ERROR! when try to build..."
        exit 1
      fi
      
      echo "=======> Building x86_64..."
      xcodebuild -project ${XCODEPROJECT}.xcodeproj -target ${XCODETARGET} -configuration ${CONFIG} -sdk iphonesimulator -arch x86_64 
      BUILD_DIR="${BUILDDIR}" BUILD_ROOT="${BUILDROOT}" BITCODE_GENERATION_MODE=bitcode
      if [ $? -gt 0 ]; then
        echo "ERROR! when try to build..."
        exit 1
      fi

      echo "=======> Building all..."
      lipo -create -output "${OUTDIR}/lib${XCODEPROJECT}.a" "${BUILDDIR}/${CONFIG}-iphoneos/lib${XCODEPROJECT}.a" "${BUILDDIR}/${CONFIG}-iphonesimulator/lib${XCODEPROJECT}.a"
      if [ $? -gt 0 ]; then
        echo "ERROR! when try to build..."
        exit 1
      fi

      echo "=======> Copying headers..."

      cp "j2objc/objc/TTask.h" "MNCAnalytics/public/"
      cp "j2objc/objc/Core.h" "MNCAnalytics/public/"
      cp "j2objc/objc/MncDigitalAnalytics.h" "MNCAnalytics/public/"

      cp "${OUTDIR}/lib${XCODEPROJECT}.a" "MNCAnalytics/lib/"

      echo "=======> Done"
  CMD
  
  s.vendored_libraries = 'MNCAnalytics/lib/*.a'
  s.xcconfig = {
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64',
    'ALWAYS_SEARCH_USER_PATHS' => 'NO',
    'ONLY_ACTIVE_ARCH' => 'NO',
    'OTHER_LDFLAGS' => '$(inherited) -liconv -ljson'
  }

  s.pod_target_xcconfig = { 
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' 
  }
  s.user_target_xcconfig = { 
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64',
    'USER_HEADER_SEARCH_PATHS' => '$(inherited) "${PODS_ROOT}/Headers/Private/MNCAnalytics"',
    'SWIFT_OBJC_BRIDGING_HEADER' => '${PODS_ROOT}/Headers/Public/MNCAnalytics/MncDigitalAnalytics.h'
  }
end
