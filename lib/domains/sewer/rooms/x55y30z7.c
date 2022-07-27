inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 30, 7 }));
  set_short( "Hallway - x55y30z7" );
set_objects( DIR+"/monsters/thnian.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y30z7.c",
  "south" : DIR+"/rooms/x55y29z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the radioactive waste in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
