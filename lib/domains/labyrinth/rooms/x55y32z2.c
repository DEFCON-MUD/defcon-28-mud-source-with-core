inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 32, 2 }));
  set_short( "Hallway - x55y32z2" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y32z2.c",
  "south" : DIR+"/rooms/x55y31z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
