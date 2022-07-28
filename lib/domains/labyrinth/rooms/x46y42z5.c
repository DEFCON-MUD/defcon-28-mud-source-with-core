inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 42, 5 }));
  set_short( "Passage - x46y42z5" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y42z5.c",
  "east" : DIR+"/rooms/x47y42z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
