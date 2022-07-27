inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 17, 7 }));
  set_short( "Passage - x11y17z7" );
set_objects( DIR+"/monsters/bouer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y18z7.c",
  "south" : DIR+"/rooms/x11y16z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
