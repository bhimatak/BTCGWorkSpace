#include<common.h>

int main(int argc, char* argv[])
{
    int i;
    char* server_names;
    char** server_name = NULL;
    server_name = (char**)calloc(argc, sizeof(char));
    char* concatenated_servernames = NULL;
    server_names = NULL;
    int count_valid_names = 0;
    if(argc >= 4)
	 {
	     for(i = 1; i < argc; i++)
		  {     
			if(Cmd_validate(argv[i]) == EXIT_SUCCESS)                           																	{                                                                                                                                                                                                                                                          
                                				server_names = extract_servername(argv[i]);																			if(server_name != NULL)
																										{
																											server_name[i] = NULL;
																																																		server_name[count_valid_names] = server_names;
																																																			count_valid_names++;
																										
																										}																						else
																																											{
																																																	printf("\nMemory Can not be allocated!\n");
																																																					}
																																									}
																								else
																												{
																						printf("\n%s is not a valid word\n", argv[i]);					}	}                                                                          
	     concatenated_servernames = concatenate_servernames(server_name, count_valid_names);                
	printf("\n\nConcatenated  Server Names is : %s\n", concatenated_servernames);
																			}
										else
												{
															printf("Please enter atleast 3 arguments\n");
																}
											return EXIT_SUCCESS;
}

