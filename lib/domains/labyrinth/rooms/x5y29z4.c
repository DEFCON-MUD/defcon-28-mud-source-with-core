inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 29, 4 }));
  set_short( "Corridor - x5y29z4" );
set_objects( DIR+"/npc/deformedweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y30z4.c",
  "south" : DIR+"/rooms/x5y28z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
