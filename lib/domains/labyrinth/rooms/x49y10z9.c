inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 10, 9 }));
  set_short( "Hallway - x49y10z9" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y10z9.c",
  "north" : DIR+"/rooms/x49y11z9.c",
  "south" : DIR+"/rooms/x49y9z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the radioactive waste in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
