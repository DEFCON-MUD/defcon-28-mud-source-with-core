inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 44, 0 }));
  set_short( "Hallway - x3y44z0" );
set_objects( DIR+"/npc/cellguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y44z0.c",
  "east" : DIR+"/rooms/x4y44z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
