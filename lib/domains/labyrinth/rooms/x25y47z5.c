inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 47, 5 }));
  set_short( "Corridor - x25y47z5" );
set_objects( DIR+"/npc/atriumrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y48z5.c",
  "south" : DIR+"/rooms/x25y46z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
