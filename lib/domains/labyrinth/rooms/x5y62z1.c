inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 62, 1 }));
  set_short( "Hallway - x5y62z1" );
set_objects( DIR+"/npc/eric.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y62z1.c",
  "east" : DIR+"/rooms/x6y62z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
