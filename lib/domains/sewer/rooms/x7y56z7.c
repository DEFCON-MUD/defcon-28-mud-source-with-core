inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 56, 7 }));
  set_short( "Hallway - x7y56z7" );
set_objects( DIR+"/monsters/captain.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y56z7.c",
  "north" : DIR+"/rooms/x7y57z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
