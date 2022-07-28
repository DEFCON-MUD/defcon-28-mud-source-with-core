inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 16, 9 }));
  set_short( "Corridor - x39y16z9" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y16z9.c",
  "south" : DIR+"/rooms/x39y15z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the radioactive waste in this stink-pit. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
