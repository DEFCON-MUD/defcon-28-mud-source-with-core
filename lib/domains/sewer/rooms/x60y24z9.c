inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 24, 9 }));
  set_short( "Hallway - x60y24z9" );
set_objects( DIR+"/monsters/neelo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y24z9.c",
  "east" : DIR+"/rooms/x61y24z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
