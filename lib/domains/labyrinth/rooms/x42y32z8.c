inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 32, 8 }));
  set_short( "Corridor - x42y32z8" );
set_objects( DIR+"/npc/rat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y32z8.c",
  "east" : DIR+"/rooms/x43y32z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
