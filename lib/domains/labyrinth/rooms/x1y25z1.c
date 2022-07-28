inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 25, 1 }));
  set_short( "Corridor - x1y25z1" );
set_objects( DIR+"/npc/salik.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y26z1.c",
  "south" : DIR+"/rooms/x1y24z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
