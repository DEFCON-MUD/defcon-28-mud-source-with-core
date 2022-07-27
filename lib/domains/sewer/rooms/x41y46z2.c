inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 46, 2 }));
  set_short( "Passage - x41y46z2" );
set_objects( DIR+"/monsters/ccagent.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y46z2.c",
  "south" : DIR+"/rooms/x41y45z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crappy sales material in this stink-pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
