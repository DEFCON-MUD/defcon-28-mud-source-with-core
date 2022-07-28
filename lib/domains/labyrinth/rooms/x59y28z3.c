inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 28, 3 }));
  set_short( "Hallway - x59y28z3" );
set_objects( DIR+"/npc/sparrow.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y28z3.c",
  "east" : DIR+"/rooms/x60y28z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
