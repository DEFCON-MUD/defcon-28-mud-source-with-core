inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 37, 6 }));
  set_short( "Passage - x51y37z6" );
set_objects( DIR+"/npc/coder.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y38z6.c",
  "south" : DIR+"/rooms/x51y36z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
