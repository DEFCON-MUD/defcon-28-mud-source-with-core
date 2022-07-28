inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 35, 3 }));
  set_short( "Hallway - x19y35z3" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y36z3.c",
  "south" : DIR+"/rooms/x19y34z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
