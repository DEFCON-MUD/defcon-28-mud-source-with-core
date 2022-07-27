inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 26, 1 }));
  set_short( "Hallway - x6y26z1" );
set_objects( DIR+"/monsters/th.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y26z1.c",
  "east" : DIR+"/rooms/x7y26z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this sty. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
