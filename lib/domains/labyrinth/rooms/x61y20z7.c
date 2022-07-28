inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 20, 7 }));
  set_short( "Corridor - x61y20z7" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y21z7.c",
  "south" : DIR+"/rooms/x61y19z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
