#include <CL/sycl.hpp>
#include <iostream>

#define PROP_NAME(_x) #_x
#define PRINT_DEVICE_PROPERTY(dev, prop) \
  std::cout << PROP_NAME(prop) << ": " \
  << dev.get_info<cl::sycl::info::device::prop>() << std::endl;

int main(int, char**) {

  sycl::gpu_selector selector;
  sycl::device device = sycl::device(selector);
  auto& dev = device;
  PRINT_DEVICE_PROPERTY(dev, name);
  PRINT_DEVICE_PROPERTY(dev, vendor);
  PRINT_DEVICE_PROPERTY(dev, driver_version);
  PRINT_DEVICE_PROPERTY(dev, profile);
  PRINT_DEVICE_PROPERTY(dev, version);
  PRINT_DEVICE_PROPERTY(dev, opencl_c_version);
  PRINT_DEVICE_PROPERTY(dev, max_compute_units);
  PRINT_DEVICE_PROPERTY(dev, max_work_item_dimensions);
  PRINT_DEVICE_PROPERTY(dev, preferred_vector_width_short);
  PRINT_DEVICE_PROPERTY(dev, preferred_vector_width_int);
  PRINT_DEVICE_PROPERTY(dev, preferred_vector_width_double);
  PRINT_DEVICE_PROPERTY(dev, preferred_vector_width_half);
  PRINT_DEVICE_PROPERTY(dev, native_vector_width_char);
  PRINT_DEVICE_PROPERTY(dev, native_vector_width_int);
  PRINT_DEVICE_PROPERTY(dev, native_vector_width_float);
  PRINT_DEVICE_PROPERTY(dev, native_vector_width_double);
  PRINT_DEVICE_PROPERTY(dev, native_vector_width_half);
  PRINT_DEVICE_PROPERTY(dev, local_mem_size);
  PRINT_DEVICE_PROPERTY(dev, global_mem_cache_line_size);
  PRINT_DEVICE_PROPERTY(dev, global_mem_cache_size);
  PRINT_DEVICE_PROPERTY(dev, global_mem_size);
  return 0;
}
