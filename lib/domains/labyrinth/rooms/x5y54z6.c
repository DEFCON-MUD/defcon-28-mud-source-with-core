inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 54, 6 }));
  set_short( "Passage - x5y54z6" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y54z6.c",
  "east" : DIR+"/rooms/x6y54z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
