#include "Movies.h"

Movies::Movies()
{
    //ctor

}

Movies::~Movies()
{
    //dtor

}

bool add_movie(std::string name, std::string rating, int watched) {
for(const Movie &movie: movies) {
    if (movie.get_name == name)
        return false;
}
Movie temp (name, rating, watched);
Movies.pushback(temp);
return true;

bool increment_watched(std::string name) {
for (Movie &movie: movies){
    if (movie.get_name() == name) {
        movie.increment_watched();
        return true;
    }

}
 return false;
}

 void display() const {
 if (movies.size == 0) {
    std::cout <<"Sorry, No movies to display" << std::endl;
 } else {
 for (const auto &movie: movies)
    movie.display();
 }
