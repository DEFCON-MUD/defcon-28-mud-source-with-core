inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 28, 7 }));
  set_short( "Corridor - x1y28z7" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y29z7.c",
  "south" : DIR+"/rooms/x1y27z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
