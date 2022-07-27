inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 6, 1 }));
  set_short( "Passage - x60y6z1" );
set_objects( DIR+"/monsters/bouer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y6z1.c",
  "east" : DIR+"/rooms/x61y6z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
