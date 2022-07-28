inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 33, 3 }));
  set_short( "Passage - x1y33z3" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y34z3.c",
  "south" : DIR+"/rooms/x1y32z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the muck in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
