inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 2, 6 }));
  set_short( "Corridor - x49y2z6" );
set_objects( DIR+"/monsters/mei.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y2z6.c",
  "north" : DIR+"/rooms/x49y3z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crappy sales material in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
