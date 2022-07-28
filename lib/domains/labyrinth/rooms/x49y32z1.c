inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 32, 1 }));
  set_short( "Hallway - x49y32z1" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y32z1.c",
  "south" : DIR+"/rooms/x49y31z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
