inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 26, 5 }));
  set_short( "Passage - x32y26z5" );
set_objects( DIR+"/monsters/hkle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y26z5.c",
  "east" : DIR+"/rooms/x33y26z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
