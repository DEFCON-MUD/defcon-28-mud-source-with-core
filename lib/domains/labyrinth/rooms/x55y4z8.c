inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 4, 8 }));
  set_short( "Passage - x55y4z8" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y4z8.c",
  "north" : DIR+"/rooms/x55y5z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
