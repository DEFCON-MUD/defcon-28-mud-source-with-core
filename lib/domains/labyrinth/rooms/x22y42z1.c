inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 42, 1 }));
  set_short( "Passage - x22y42z1" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y42z1.c",
  "east" : DIR+"/rooms/x23y42z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
