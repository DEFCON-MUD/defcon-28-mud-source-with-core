inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 54, 5 }));
  set_short( "Passage - x17y54z5" );
set_objects( DIR+"/monsters/probe.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y54z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the radioactive waste in this dump. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east.%^RESET%^");
}
