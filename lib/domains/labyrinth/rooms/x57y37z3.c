inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 37, 3 }));
  set_short( "Passage - x57y37z3" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y38z3.c",
  "south" : DIR+"/rooms/x57y36z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
