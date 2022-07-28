inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 36, 3 }));
  set_short( "Corridor - x1y36z3" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y36z3.c",
  "north" : DIR+"/rooms/x1y37z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
