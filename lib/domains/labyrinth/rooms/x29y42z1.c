inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 42, 1 }));
  set_short( "Hallway - x29y42z1" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y43z1.c",
  "south" : DIR+"/rooms/x29y41z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
