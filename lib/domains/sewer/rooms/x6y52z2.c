inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 52, 2 }));
  set_short( "Hallway - x6y52z2" );
set_objects( DIR+"/monsters/mike.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y52z2.c",
  "east" : DIR+"/rooms/x7y52z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crappy sales material in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
