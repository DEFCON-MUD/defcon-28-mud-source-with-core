inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 59, 8 }));
  set_short( "Passage - x61y59z8" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y60z8.c",
  "south" : DIR+"/rooms/x61y58z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
