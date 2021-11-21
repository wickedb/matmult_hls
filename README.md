# Matrix multiplication using HLS on Xilinx Vitis 

## HLS

High-level synthesis is an automated design process that takes an abstract behavioral specification of a digital system and find a register-transfer level structure that realizes the given behavior.

Optimization done using [HLS pragmas](https://www.xilinx.com/html_docs/xilinx2021_1/vitis_doc/hls_pragmas.html).


## Specifications

* Matrix size: 100x100
* Inputs: Generated and filled with random numbers in the testbench. 
* Target device: Artix7 35t (xa7a100t-csg324-1I)

## Usage

- Create a vitis project. 
- The opt_tb.c is equivalent of a "testbench" and should be added as a simulation source. It is common for both cases. 
- The other two files are sources. Add one of them as a source and run simulation and synthesis. Repeat with the other source file. 

## Report 

### Cycle count reduction and area blow up

#### Without optimization
| Frequency | Cycles | LUT | FF  | DSP |
|---       | ---    | --- | --- | --- | 
|144.77 Mhz | 1110001 |  558 | 591 | 3 


#### With optimization
Frequency | Cycles | LUT | FF | DSP
--- | --- | --- | --- | --- 
144.59 Mhz | 16051 | 1872321 | 747503 | 300

### Vitis report for matmult_opt

![matmult_opt](https://github.com/wickedb/matmult_hls/blob/main/matmult_opt.jpg)
