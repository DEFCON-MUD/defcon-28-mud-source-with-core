inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 31, 0 }));
  set_short( "Corridor - x31y31z0" );
set_objects( DIR+"/npc/largeheptopsquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y32z0.c",
  "south" : DIR+"/rooms/x31y30z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
