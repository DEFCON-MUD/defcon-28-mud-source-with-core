inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 62, 7 }));
  set_short( "Passage - x39y62z7" );
set_objects( DIR+"/npc/doe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y62z7.c",
  "south" : DIR+"/rooms/x39y61z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
