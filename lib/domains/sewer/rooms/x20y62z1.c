inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 62, 1 }));
  set_short( "Corridor - x20y62z1" );
set_objects( DIR+"/monsters/hore.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y62z1.c",
  "east" : DIR+"/rooms/x21y62z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
