Pod::Spec.new do |s|
s.name             = 'AppLinkIO'
s.version          = '2.9.4'
s.summary          = 'AppLink.io iOS SDK'
s.description      = 'AppLink.io mobile app analytics, engagement and performance platform'
s.homepage         = 'https://applink.io'
s.license          = { :type => 'Commercial', :file => 'AppLinkIO-iOS-2.9.4/LICENSE' }
s.author           = { 'AppLink.io, Inc.' => 'support@applink.io' }
s.source           = { :http => 'https://cdn.applink.io/sdk/ios/AppLinkIO-iOS-2.9.4.zip' }
s.platform          = :ios
s.ios.deployment_target = '8.0'
s.source_files = 'AppLinkIO-iOS-2.9.4/*.h'
s.public_header_files = 'AppLinkIO-iOS-2.9.4/*.h'
s.ios.vendored_libraries = 'AppLinkIO-iOS-2.9.4/libAppLinkIO.a'
s.frameworks = 'SystemConfiguration', 'CoreLocation', 'CoreTelephony'
s.libraries = 'AppLinkIO', 'z', 'sqlite3'
s.pod_target_xcconfig = { 'OTHER_LDFLAGS' => '-ObjC' }
end
