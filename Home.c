#include<stdio.h>

int m=0,n=0;

struct movie {
    char name[500];
    int nummovie;
    float time_movie;
};
struct movie movie_list[2];


void Home()
{
    int choicehome;
    system("cls");
    printf("\t___________________________________________________________\n\n");
    printf("\t ++++++++++++++++ WELCOME TO MOVIE THEATRE ++++++++++++++++\n");
    printf("\t___________________________________________________________\n\n");
    printf("\t\t\t\t1.Admin\n\n");
    printf("\t\t\t\t2.Users\n\n");
    printf("\t\t\t\t3.Exit Program\n\n");
    printf("\t\tPlease select number and enter : ");
    scanf("%d",&choicehome);
    if(choicehome == 1){
        Admin();
    }
    else if(choicehome == 2){
        Users();
    }
    else if (choicehome == 3){
        system("cls");
        Exit();
    }
    else{
        system("cls");
        Error();
    }
}
void Admin(){
    int i=0,count=0,pass[10];
    char Username[10];

    system("cls");
    printf("\t___________________________________________________________\n\n");
    printf("\t ++++++++++++++++ WELCOME TO MOVIE THEATRE ++++++++++++++++\n");
    printf("\t___________________________________________________________\n\n");
    printf("\t\t\t\t   Admin\n\n");
    printf("\t\tUsername : ");
    scanf("%s",Username);
    printf("\n\t\tPassword : ");
    for(i=0;i<5;i++)
    {
        pass[i]=getch();
        printf("*");
    }
    if(pass[0]=='3')
    {
        count++;
    }
    if(pass[1]=='5')
    {
        count++;
    }
    if(pass[2]=='4')
    {
        count++;
    }
    if(pass[3]=='2')
    {
        count++;
    }
    if(pass[4]=='9')
    {
        count++;
    }
    if(count==5)
    {
        system("cls");
        Homeadmin();
    }
    else
    {
        system("cls");
        printf("Eror...");
    }
}
void Homeadmin(){
    int choicehomeadmin;
    system("cls");
    printf("\n\t___________________________________________________________\n\n");
    printf("\t ++++++++++++++++ WELCOME TO MOVIE THEATRE +++++++++++++++ \n");
    printf("\t___________________________________________________________\n\n");
    printf("\t\t\t\t   Admin\n\n");
    printf("\t\t\t1.Edit movie\n\n");
    printf("\t\t\t2.Edit a schedule\n\n");
    printf("\t\t\t3.Return to menu\n\n");
    printf("\t\tPlease select number and enter : ");
    scanf("%d",&choicehomeadmin);
    if(choicehomeadmin == 1){
        EditMovie();
    }
    else if(choicehomeadmin == 2){
        printf("Edit a schedule");
    }
    else if(choicehomeadmin == 3){
        Home();
    }
    else{
        system("cls");
        Error();
    }
}
void EditMovie(){
    int choiceeditmovie;
    system("cls");
    printf("\n\t___________________________________________________________\n\n");
    printf("\t ++++++++++++++++ WELCOME TO MOVIE THEATRE +++++++++++++++ \n");
    printf("\t___________________________________________________________\n\n");
    printf("\t\t\t\t   Admin\n\n");
    printf("\t\t\t         Edit movie\n");
    printf("\t\t\t     -------------------\n\n");
    printf("\t\t\t1.Add movie\n\n");
    printf("\t\t\t2.Delete movie\n\n");
    printf("\t\t\t3.Return to menu\n\n");
    printf("\t\tPlease select number and enter : ");
    scanf("%d",&choiceeditmovie);
    if(choiceeditmovie == 1){
        Addmovie();
    }
    else if(choiceeditmovie == 2){
        printf("Delete movie");
    }
    else if(choiceeditmovie == 3){
        Home();
    }
    else{
        system("cls");
        Error();
    }
}
void Addmovie(){
    system("cls");
    int ans=1;
        FILE *addmovie;
        printf("\n\t___________________________________________________________\n\n");
        printf("\t ++++++++++++++++ WELCOME TO MOVIE THEATRE +++++++++++++++ \n");
        printf("\t___________________________________________________________\n\n");
        printf("\t\t\t\t   Admin\n\n");
        printf("\t\t\t         Edit movie\n");
        printf("\t\t\t     -------------------\n\n");
        printf("\t\tmoviename : ");
		scanf("%s",movie_list[n].name);
		movie_list[n].nummovie=n+1;
		addmovie=fopen("moviename.txt", "a");
		fprintf(addmovie,"%-3d%-30s\n",movie_list[n].nummovie,movie_list[n].name);
		fclose(addmovie);
		addmovie=fopen("movietime.txt", "a");
		while(ans==1){
			printf("\n\t\ttime: ");
			scanf("%f",&movie_list[m].time_movie);
			fprintf(addmovie,"%d\t%d\t\n",movie_list[n].nummovie,movie_list[m].time_movie);
            printf("\n\t\t\t1.add time\n\n");
            printf("\t\t\t2.Return to menu\n\n");
            printf("\t\tPlease select number and enter : ");
            scanf("%d",&ans);
			m++;
        }
        while(ans==2){
            EditMovie();
        }
		n++;
		fclose(addmovie);
}
void Users(){
    printf("Users");
}
void Exit(){
    printf("Exit Program");
}
void Error(){
    printf("Error...Try agin!!!");
}
void main(){
    system("color 0B");
    Home();
}

