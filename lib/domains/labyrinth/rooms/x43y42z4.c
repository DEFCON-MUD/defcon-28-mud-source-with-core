inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 42, 4 }));
  set_short( "Corridor - x43y42z4" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y43z4.c",
  "south" : DIR+"/rooms/x43y41z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
