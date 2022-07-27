inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 6, 7 }));
  set_short( "Passage - x58y6z7" );
set_objects( DIR+"/monsters/rk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y6z7.c",
  "east" : DIR+"/rooms/x59y6z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
