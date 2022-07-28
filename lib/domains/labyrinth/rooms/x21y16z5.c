inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 16, 5 }));
  set_short( "Passage - x21y16z5" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y16z5.c",
  "south" : DIR+"/rooms/x21y15z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crud in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
