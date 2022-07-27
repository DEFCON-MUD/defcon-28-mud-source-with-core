inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 34, 7 }));
  set_short( "Corridor - x23y34z7" );
set_objects( DIR+"/monsters/wardenbrke.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y34z7.c",
  "east" : DIR+"/rooms/x24y34z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
