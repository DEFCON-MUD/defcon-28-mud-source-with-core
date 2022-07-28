inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 51, 7 }));
  set_short( "Corridor - x61y51z7" );
set_objects( DIR+"/npc/cellguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y52z7.c",
  "south" : DIR+"/rooms/x61y50z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
