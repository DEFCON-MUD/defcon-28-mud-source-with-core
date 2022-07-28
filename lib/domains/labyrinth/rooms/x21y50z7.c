inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 50, 7 }));
  set_short( "Hallway - x21y50z7" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y50z7.c",
  "north" : DIR+"/rooms/x21y51z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crappy sales material in this joint. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
