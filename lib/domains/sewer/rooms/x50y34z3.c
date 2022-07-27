inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 34, 3 }));
  set_short( "Hallway - x50y34z3" );
set_objects( DIR+"/monsters/varysstark.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y34z3.c",
  "east" : DIR+"/rooms/x51y34z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
