// Test for #20053

use GpuDiagnostics;


startGpuDiagnostics();

var Days : domain(int) = {0, 10, 20};
on here.gpus[0] {
  var A : [Days] real;

  // NOTE: Currently this does not generate a kernel launch
  foreach d in A.domain {
    A[d] = 10.0;
  }

  writeln(A);
}

stopGpuDiagnostics();
assertGpuDiags(kernel_launch_um=0, kernel_launch_aod=1); // we are currently skipping with aod
