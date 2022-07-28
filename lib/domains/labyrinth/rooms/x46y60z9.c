inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 60, 9 }));
  set_short( "Passage - x46y60z9" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y60z9.c",
  "east" : DIR+"/rooms/x47y60z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
