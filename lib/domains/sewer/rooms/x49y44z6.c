inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 44, 6 }));
  set_short( "Corridor - x49y44z6" );
set_objects( DIR+"/monsters/carrierpigeon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y44z6.c",
  "south" : DIR+"/rooms/x49y43z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
