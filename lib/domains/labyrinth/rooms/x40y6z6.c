inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 6, 6 }));
  set_short( "Passage - x40y6z6" );
set_objects( DIR+"/npc/snake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y6z6.c",
  "east" : DIR+"/rooms/x41y6z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
