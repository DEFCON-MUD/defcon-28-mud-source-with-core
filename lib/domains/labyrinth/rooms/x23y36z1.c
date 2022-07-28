inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 36, 1 }));
  set_short( "Passage - x23y36z1" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y36z1.c",
  "north" : DIR+"/rooms/x23y37z1.c",
  "south" : DIR+"/rooms/x23y35z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
