inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 4, 0 }));
  set_short( "Hallway - x56y4z0" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y4z0.c",
  "east" : DIR+"/rooms/x57y4z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the glorzo in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
