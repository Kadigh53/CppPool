import os
import sys

# def main():
# 	# files = [f for f in os.listdir('.') if os.path.isfile(f)]
# 	files = os.walk('.')
# 	print(files)
# 	# for file in files:
# 	# 	if file.endswith('.hpp'):
# 	# 		print(file)
# 		#     class_definition = create_class_from_filename(file_name)
# 		#     with open(file_name, 'a') as file:
# 		#         file.write(class_definition)
# 		# print(f'Class created in {file_name}'.format(file_name))


def main(dir):
    for root, dirs, files in os.walk('./' + dir):
        for file_name in files:
            if (file_name.endswith('.hpp')):
                var = file_name[:-4]
                with open(os.path.join(root, file_name), 'w') as f:
                    file_name = file_name[:-4]
                    f.write('#ifndef ' + var.upper() + '_HPP\n')
                    f.write('#define ' + var.upper() + '_HPP\n\n')
                    f.write('class ' + var + '\n')
                    f.write('{\nprivate :\npublic :\n')
                    f.write('\t' + var +'();\n')
                    f.write('\t' + var +'(const ' + var + '& other);\n')
                    f.write('\t' + var + '& operator=(const '  + var + '& other);\n')
                    f.write('\t~' + var +'();\n')
                    f.write('};\n\n')
                    f.write('#endif\n')
                print(file_name)

main('C09/ex00')