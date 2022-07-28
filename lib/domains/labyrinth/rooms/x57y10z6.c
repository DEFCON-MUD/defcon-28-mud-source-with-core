inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 10, 6 }));
  set_short( "Hallway - x57y10z6" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y11z6.c",
  "south" : DIR+"/rooms/x57y9z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the sludge in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
