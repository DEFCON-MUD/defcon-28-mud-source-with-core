inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 32, 3 }));
  set_short( "Corridor - x22y32z3" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y32z3.c",
  "east" : DIR+"/rooms/x23y32z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
