inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 12, 6 }));
  set_short( "Corridor - x3y12z6" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y12z6.c",
  "north" : DIR+"/rooms/x3y13z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
