inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 9, 7 }));
  set_short( "Hallway - x31y9z7" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y10z7.c",
  "south" : DIR+"/rooms/x31y8z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
