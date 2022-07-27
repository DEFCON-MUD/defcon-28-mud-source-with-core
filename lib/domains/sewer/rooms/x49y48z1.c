inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 48, 1 }));
  set_short( "Hallway - x49y48z1" );
set_objects( DIR+"/monsters/clophant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y48z1.c",
  "east" : DIR+"/rooms/x50y48z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
