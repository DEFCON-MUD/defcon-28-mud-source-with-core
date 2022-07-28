inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 21, 5 }));
  set_short( "Hallway - x25y21z5" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y22z5.c",
  "south" : DIR+"/rooms/x25y20z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
