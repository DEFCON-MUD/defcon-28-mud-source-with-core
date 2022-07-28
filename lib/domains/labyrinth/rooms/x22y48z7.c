inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 48, 7 }));
  set_short( "Corridor - x22y48z7" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y48z7.c",
  "east" : DIR+"/rooms/x23y48z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
