inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 42, 3 }));
  set_short( "Corridor - x57y42z3" );
set_objects( DIR+"/monsters/ken.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y42z3.c",
  "north" : DIR+"/rooms/x57y43z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
