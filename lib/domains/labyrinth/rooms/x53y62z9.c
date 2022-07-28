inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 62, 9 }));
  set_short( "Passage - x53y62z9" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y62z9.c",
  "south" : DIR+"/rooms/x53y61z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
