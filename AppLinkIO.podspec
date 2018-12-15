Pod::Spec.new do |s|
s.name             = 'AppLinkIO'
s.version          = '2.1.1'
s.summary          = 'AppLink.io iOS SDK'
s.description      = 'AppLink.io mobile app analytics, engagement and performance platform'
s.homepage         = 'https://applink.io'
s.license          = { :type => 'Commercial', :file => 'AppLinkIO-iOS-2.1.1/LICENSE' }
s.author           = { 'AppLink.io, Inc.' => 'support@applink.io' }
s.source           = { :http => 'https://sdk.applink.io/iOS/AppLinkIO-iOS-2.1.1.zip' }
s.platform          = :ios
s.ios.deployment_target = '8.0'
s.source_files = 'AppLinkIO-iOS-2.1.1/*.h'
s.public_header_files = 'AppLinkIO-iOS-2.1.1/*.h'
s.ios.vendored_libraries = 'AppLinkIO-iOS-2.1.1/libAppLinkIO.a'
s.frameworks = 'SystemConfiguration', 'CoreLocation', 'CoreTelephony'
s.libraries = 'AppLinkIO', 'z', 'sqlite3'
s.pod_target_xcconfig = { 'OTHER_LDFLAGS' => '-ObjC' }
end
