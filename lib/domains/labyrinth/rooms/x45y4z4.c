inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 4, 4 }));
  set_short( "Passage - x45y4z4" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y4z4.c",
  "east" : DIR+"/rooms/x46y4z4.c",
  "south" : DIR+"/rooms/x45y3z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crappy sales material in this dump. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}
