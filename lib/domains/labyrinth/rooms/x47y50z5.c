inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 50, 5 }));
  set_short( "Hallway - x47y50z5" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y50z5.c",
  "north" : DIR+"/rooms/x47y51z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
