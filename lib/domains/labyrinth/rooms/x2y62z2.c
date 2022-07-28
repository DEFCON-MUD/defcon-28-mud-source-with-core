inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 62, 2 }));
  set_short( "Hallway - x2y62z2" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y62z2.c",
  "east" : DIR+"/rooms/x3y62z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
