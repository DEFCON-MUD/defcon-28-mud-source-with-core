inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 30, 4 }));
  set_short( "Hallway - x13y30z4" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y30z4.c",
  "north" : DIR+"/rooms/x13y31z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
