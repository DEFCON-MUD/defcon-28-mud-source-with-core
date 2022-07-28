inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 54, 4 }));
  set_short( "Passage - x21y54z4" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y55z4.c",
  "south" : DIR+"/rooms/x21y53z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
