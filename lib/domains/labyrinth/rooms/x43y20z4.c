inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 20, 4 }));
  set_short( "Passage - x43y20z4" );
set_objects( DIR+"/npc/bartender.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y20z4.c",
  "south" : DIR+"/rooms/x43y19z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crappy sales material in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
