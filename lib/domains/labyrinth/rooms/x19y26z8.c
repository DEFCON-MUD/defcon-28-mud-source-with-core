inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 26, 8 }));
  set_short( "Hallway - x19y26z8" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y26z8.c",
  "north" : DIR+"/rooms/x19y27z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crud in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
