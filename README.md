# BrokenGoogleTestAdapter

GoogleTestAdapter incorrectly sets some random working directory when running unit test executables from TestExplorer or when discovering tests.
Two projects bellow are made to show issues with [GoogleTestAdapter](https://github.com/csoltenborn/GoogleTestAdapter) and [TestAdapterForGoogleTest](https://github.com/microsoft/TestAdapterForGoogleTest)

## BrokenDiscovery

If you run this test as-is from visual studio, it will pass. However, if you try to discover it from Test Explorer you won't see this test listed.
This happens because during test discovery `class A` throws when initializing gloabls. The reason `class A` constructor throws is because it cannot find `"some dir"` which is located in the project's directory. Because GoogleTestAdapter incorrectly sets some random working directory, the unit test executable doesn't even run.

## BrokenRunner

If you run this test as-is from visual studio, it will pass. However, if you try to run it from Test Explorer this test will always fail.
It fails from test explorer for the same reason: GoogleTestAdapter incorrectly sets some random working directory
