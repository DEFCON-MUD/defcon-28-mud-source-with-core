inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 64, 1 }));
  set_short( "Hallway - x5y64z1" );
set_objects( DIR+"/npc/rick.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y64z1.c",
  "east" : DIR+"/rooms/x6y64z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
