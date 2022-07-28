inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 0, 8 }));
  set_short( "Passage - x60y0z8" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y0z8.c",
  "east" : DIR+"/rooms/x61y0z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the radioactive waste in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
