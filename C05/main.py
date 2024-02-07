import os

def main():
	files = [f for f in os.listdir('.') if os.path.isfile(f)]
	for file_name in files:
		# if file_name.endswith('.py'):
		#     class_definition = create_class_from_filename(file_name)
		#     with open(file_name, 'a') as file:
		#         file.write(class_definition)
		print(f'Class created in {file_name}')