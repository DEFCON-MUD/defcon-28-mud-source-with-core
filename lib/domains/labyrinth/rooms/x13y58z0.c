inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 58, 0 }));
  set_short( "Hallway - x13y58z0" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y59z0.c",
  "south" : DIR+"/rooms/x13y57z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
