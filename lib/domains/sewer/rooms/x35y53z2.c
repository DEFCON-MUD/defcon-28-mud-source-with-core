inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 53, 2 }));
  set_short( "Corridor - x35y53z2" );
set_objects( DIR+"/monsters/brian.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y54z2.c",
  "south" : DIR+"/rooms/x35y52z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the glorzo in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
