inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 30, 8 }));
  set_short( "Passage - x61y30z8" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y31z8.c",
  "south" : DIR+"/rooms/x61y29z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
