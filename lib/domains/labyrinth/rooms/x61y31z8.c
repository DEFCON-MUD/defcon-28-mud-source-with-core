inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 31, 8 }));
  set_short( "Corridor - x61y31z8" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y32z8.c",
  "south" : DIR+"/rooms/x61y30z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the glorzo in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
