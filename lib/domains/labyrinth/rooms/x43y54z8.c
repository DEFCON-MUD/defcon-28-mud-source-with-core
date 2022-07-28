inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 54, 8 }));
  set_short( "Hallway - x43y54z8" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y54z8.c",
  "east" : DIR+"/rooms/x44y54z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crud in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
