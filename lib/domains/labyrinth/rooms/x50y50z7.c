inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 50, 7 }));
  set_short( "Corridor - x50y50z7" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y50z7.c",
  "east" : DIR+"/rooms/x51y50z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
