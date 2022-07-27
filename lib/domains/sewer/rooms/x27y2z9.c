inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 2, 9 }));
  set_short( "Hallway - x27y2z9" );
set_objects( DIR+"/monsters/easlerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y2z9.c",
  "north" : DIR+"/rooms/x27y3z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
