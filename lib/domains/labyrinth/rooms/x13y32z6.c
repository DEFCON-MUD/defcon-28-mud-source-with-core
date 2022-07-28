inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 32, 6 }));
  set_short( "Hallway - x13y32z6" );
set_objects( DIR+"/npc/rick.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y32z6.c",
  "north" : DIR+"/rooms/x13y33z6.c",
  "south" : DIR+"/rooms/x13y31z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
