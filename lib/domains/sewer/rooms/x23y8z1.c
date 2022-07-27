inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 8, 1 }));
  set_short( "Hallway - x23y8z1" );
set_objects( DIR+"/monsters/clubdaer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y9z1.c",
  "south" : DIR+"/rooms/x23y7z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
