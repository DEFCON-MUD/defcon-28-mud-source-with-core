inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 55, 5 }));
  set_short( "Hallway - x53y55z5" );
set_objects( DIR+"/monsters/anthonyfox.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y56z5.c",
  "south" : DIR+"/rooms/x53y54z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the glorzo in this hellhole. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
