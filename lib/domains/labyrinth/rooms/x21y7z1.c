inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 7, 1 }));
  set_short( "Hallway - x21y7z1" );
set_objects( DIR+"/npc/tiffany.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y8z1.c",
  "south" : DIR+"/rooms/x21y6z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
