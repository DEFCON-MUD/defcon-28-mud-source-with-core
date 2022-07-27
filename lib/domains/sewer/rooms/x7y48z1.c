inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 48, 1 }));
  set_short( "Hallway - x7y48z1" );
set_objects( DIR+"/monsters/clubdaer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y48z1.c",
  "east" : DIR+"/rooms/x8y48z1.c",
  "north" : DIR+"/rooms/x7y49z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, east, and north.%^RESET%^");
}
