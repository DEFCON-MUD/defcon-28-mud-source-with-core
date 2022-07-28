inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 44, 2 }));
  set_short( "Hallway - x55y44z2" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y44z2.c",
  "east" : DIR+"/rooms/x56y44z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
