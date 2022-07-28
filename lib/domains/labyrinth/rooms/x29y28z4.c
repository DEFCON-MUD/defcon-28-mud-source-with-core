inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 28, 4 }));
  set_short( "Hallway - x29y28z4" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y28z4.c",
  "south" : DIR+"/rooms/x29y27z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
