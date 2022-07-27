inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 60, 0 }));
  set_short( "Passage - x49y60z0" );
set_objects( DIR+"/monsters/python.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y60z0.c",
  "north" : DIR+"/rooms/x49y61z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crappy sales material in this stink-pit. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
