inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 30, 5 }));
  set_short( "Corridor - x43y30z5" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y30z5.c",
  "north" : DIR+"/rooms/x43y31z5.c",
  "south" : DIR+"/rooms/x43y29z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
