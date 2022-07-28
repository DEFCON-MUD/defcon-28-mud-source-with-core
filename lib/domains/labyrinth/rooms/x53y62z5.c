inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 62, 5 }));
  set_short( "Passage - x53y62z5" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y62z5.c",
  "south" : DIR+"/rooms/x53y61z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
