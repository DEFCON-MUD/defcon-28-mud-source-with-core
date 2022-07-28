inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 32, 4 }));
  set_short( "Hallway - x3y32z4" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y33z4.c",
  "south" : DIR+"/rooms/x3y31z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crap in this area. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
