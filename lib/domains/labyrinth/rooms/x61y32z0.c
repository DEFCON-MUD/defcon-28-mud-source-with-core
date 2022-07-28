inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 32, 0 }));
  set_short( "Corridor - x61y32z0" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y33z0.c",
  "south" : DIR+"/rooms/x61y31z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
