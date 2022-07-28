inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 50, 8 }));
  set_short( "Corridor - x22y50z8" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y50z8.c",
  "east" : DIR+"/rooms/x23y50z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the sludge in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
