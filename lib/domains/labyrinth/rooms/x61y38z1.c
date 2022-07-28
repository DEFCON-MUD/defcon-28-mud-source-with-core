inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 38, 1 }));
  set_short( "Passage - x61y38z1" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y38z1.c",
  "south" : DIR+"/rooms/x61y37z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
