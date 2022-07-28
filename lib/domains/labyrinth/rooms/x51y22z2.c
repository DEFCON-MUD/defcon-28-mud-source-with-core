inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 22, 2 }));
  set_short( "Hallway - x51y22z2" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y22z2.c",
  "south" : DIR+"/rooms/x51y21z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crap in this area. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
