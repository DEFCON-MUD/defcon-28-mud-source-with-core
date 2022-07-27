inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 2, 8 }));
  set_short( "Passage - x18y2z8" );
set_objects( DIR+"/monsters/snake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y2z8.c",
  "east" : DIR+"/rooms/x19y2z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
