inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 43, 1 }));
  set_short( "Passage - x53y43z1" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y44z1.c",
  "south" : DIR+"/rooms/x53y42z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
