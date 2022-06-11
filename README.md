# Hierarchical structure converter
 This program is used to convert the data recorded in the file from a hierarchical structure to a tree structure.
Each node is assigned an integer id, then the data is written to the output file of the following structure:
(node id, parent node id, node name, value in node).
For list nodes, the id of its immediate descendants is written instead of the value.
The order of output nodes in the output file is the same as in the input file.
