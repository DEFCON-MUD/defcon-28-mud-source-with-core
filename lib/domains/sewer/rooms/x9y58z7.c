inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 58, 7 }));
  set_short( "Passage - x9y58z7" );
set_objects( DIR+"/monsters/floorvine.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y58z7.c",
  "north" : DIR+"/rooms/x9y59z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crappy sales material in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
