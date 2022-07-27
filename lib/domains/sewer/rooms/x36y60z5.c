inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 60, 5 }));
  set_short( "Hallway - x36y60z5" );
set_objects( DIR+"/monsters/monkey.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y60z5.c",
  "east" : DIR+"/rooms/x37y60z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crappy sales material in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
