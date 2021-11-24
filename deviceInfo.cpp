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
  PRINT_DEVICE_PROPERTY(dev, vendor_id);
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

  PRINT_DEVICE_PROPERTY(dev,max_work_group_size);
  PRINT_DEVICE_PROPERTY(dev,max_clock_frequency);
  PRINT_DEVICE_PROPERTY(dev,address_bits);
  PRINT_DEVICE_PROPERTY(dev,max_mem_alloc_size);
  PRINT_DEVICE_PROPERTY(dev,image_support);
  PRINT_DEVICE_PROPERTY(dev,max_read_image_args);
  PRINT_DEVICE_PROPERTY(dev,max_write_image_args);
  PRINT_DEVICE_PROPERTY(dev,image2d_max_height);
  PRINT_DEVICE_PROPERTY(dev,image2d_max_width);
  PRINT_DEVICE_PROPERTY(dev,image3d_max_height);
  PRINT_DEVICE_PROPERTY(dev,image3d_max_width);
  PRINT_DEVICE_PROPERTY(dev,image3d_max_depth);
  PRINT_DEVICE_PROPERTY(dev,image_max_buffer_size);
  PRINT_DEVICE_PROPERTY(dev,image_max_array_size);
  PRINT_DEVICE_PROPERTY(dev,max_samplers);
  PRINT_DEVICE_PROPERTY(dev,max_parameter_size);
  PRINT_DEVICE_PROPERTY(dev,mem_base_addr_align);
  PRINT_DEVICE_PROPERTY(dev,error_correction_support);
  PRINT_DEVICE_PROPERTY(dev,host_unified_memory);
  PRINT_DEVICE_PROPERTY(dev,profiling_timer_resolution);
  PRINT_DEVICE_PROPERTY(dev,is_endian_little);
  PRINT_DEVICE_PROPERTY(dev,is_available);
  PRINT_DEVICE_PROPERTY(dev,is_compiler_available);
  PRINT_DEVICE_PROPERTY(dev,is_linker_available);
  PRINT_DEVICE_PROPERTY(dev,queue_profiling);
  PRINT_DEVICE_PROPERTY(dev,printf_buffer_size);
  PRINT_DEVICE_PROPERTY(dev,preferred_interop_user_sync);
  PRINT_DEVICE_PROPERTY(dev,partition_max_sub_devices);
  PRINT_DEVICE_PROPERTY(dev,reference_count);
  return 0;
}
