inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 31, 2 }));
  set_short( "Hallway - x21y31z2" );
set_objects( DIR+"/monsters/magnus.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y32z2.c",
  "south" : DIR+"/rooms/x21y30z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
