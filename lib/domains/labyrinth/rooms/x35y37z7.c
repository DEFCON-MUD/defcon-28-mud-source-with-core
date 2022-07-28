inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 37, 7 }));
  set_short( "Passage - x35y37z7" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y38z7.c",
  "south" : DIR+"/rooms/x35y36z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
