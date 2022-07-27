inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 29, 1 }));
  set_short( "Corridor - x5y29z1" );
set_objects( DIR+"/monsters/clophant.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y30z1.c",
  "south" : DIR+"/rooms/x5y28z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
