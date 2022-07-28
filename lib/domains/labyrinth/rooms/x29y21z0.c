inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 21, 0 }));
  set_short( "Corridor - x29y21z0" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y22z0.c",
  "south" : DIR+"/rooms/x29y20z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
