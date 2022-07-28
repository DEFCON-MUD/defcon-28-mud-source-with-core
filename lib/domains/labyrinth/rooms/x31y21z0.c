inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 21, 0 }));
  set_short( "Passage - x31y21z0" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y22z0.c",
  "south" : DIR+"/rooms/x31y20z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
