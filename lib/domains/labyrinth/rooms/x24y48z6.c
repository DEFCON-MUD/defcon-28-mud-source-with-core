inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 48, 6 }));
  set_short( "Corridor - x24y48z6" );
set_objects( DIR+"/npc/zaryem.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y48z6.c",
  "east" : DIR+"/rooms/x25y48z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
