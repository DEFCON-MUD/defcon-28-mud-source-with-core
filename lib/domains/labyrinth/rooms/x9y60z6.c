inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 60, 6 }));
  set_short( "Hallway - x9y60z6" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y60z6.c",
  "north" : DIR+"/rooms/x9y61z6.c",
  "south" : DIR+"/rooms/x9y59z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, north, and west.%^RESET%^");
}
