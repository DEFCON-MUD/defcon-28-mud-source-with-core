inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 54, 9 }));
  set_short( "Corridor - x46y54z9" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y54z9.c",
  "east" : DIR+"/rooms/x47y54z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
