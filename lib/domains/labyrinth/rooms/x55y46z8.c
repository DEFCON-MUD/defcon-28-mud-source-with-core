inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 46, 8 }));
  set_short( "Passage - x55y46z8" );
set_objects( DIR+"/npc/r1carmella.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y46z8.c",
  "north" : DIR+"/rooms/x55y47z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
