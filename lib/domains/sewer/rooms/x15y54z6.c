inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 54, 6 }));
  set_short( "Passage - x15y54z6" );
set_objects( DIR+"/monsters/edwardio.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y55z6.c",
  "south" : DIR+"/rooms/x15y53z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
