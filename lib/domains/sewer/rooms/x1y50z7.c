inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 50, 7 }));
  set_short( "Corridor - x1y50z7" );
set_objects( DIR+"/monsters/eastauthorizer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y51z7.c",
  "south" : DIR+"/rooms/x1y49z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
