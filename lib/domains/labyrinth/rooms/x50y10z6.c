inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 10, 6 }));
  set_short( "Hallway - x50y10z6" );
set_objects( DIR+"/npc/massiveweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y10z6.c",
  "east" : DIR+"/rooms/x51y10z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
