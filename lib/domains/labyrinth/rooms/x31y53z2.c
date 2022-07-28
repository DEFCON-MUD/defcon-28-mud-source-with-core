inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 53, 2 }));
  set_short( "Corridor - x31y53z2" );
set_objects( DIR+"/npc/csccagent.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y54z2.c",
  "south" : DIR+"/rooms/x31y52z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
