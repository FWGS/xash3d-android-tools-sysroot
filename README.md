# xash3d-android-tools-sysroot
Basic sysroot to build xash3d on android (arm only)

This is sdk8 sysroot with added hardfloat support and SLES headers (for xash3d-android build).

Also it has a hack to disable libgnustl-shared dependency.

Note that android's libstdc++ does not contain typeinfo information and you need to use STLport to enable rtti, or you'll get linking errors even if you do not need STL.
