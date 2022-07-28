inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 38, 8 }));
  set_short( "Corridor - x19y38z8" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y38z8.c",
  "north" : DIR+"/rooms/x19y39z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
