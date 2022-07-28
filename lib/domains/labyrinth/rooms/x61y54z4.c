inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 54, 4 }));
  set_short( "Hallway - x61y54z4" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y55z4.c",
  "south" : DIR+"/rooms/x61y53z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the glorzo in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
