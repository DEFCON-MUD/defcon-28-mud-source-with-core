inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 49, 2 }));
  set_short( "Corridor - x59y49z2" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y50z2.c",
  "south" : DIR+"/rooms/x59y48z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
