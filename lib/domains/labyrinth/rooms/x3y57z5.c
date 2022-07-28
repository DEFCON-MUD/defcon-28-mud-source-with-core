inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 57, 5 }));
  set_short( "Hallway - x3y57z5" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y58z5.c",
  "south" : DIR+"/rooms/x3y56z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
