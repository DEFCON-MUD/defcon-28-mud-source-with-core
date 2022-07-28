inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 42, 6 }));
  set_short( "Hallway - x57y42z6" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y42z6.c",
  "south" : DIR+"/rooms/x57y41z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
