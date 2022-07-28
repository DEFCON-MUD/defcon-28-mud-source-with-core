inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 57, 7 }));
  set_short( "Passage - x33y57z7" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y58z7.c",
  "south" : DIR+"/rooms/x33y56z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
