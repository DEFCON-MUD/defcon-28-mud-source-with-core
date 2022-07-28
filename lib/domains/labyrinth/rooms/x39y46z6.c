inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 46, 6 }));
  set_short( "Corridor - x39y46z6" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y46z6.c",
  "north" : DIR+"/rooms/x39y47z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
