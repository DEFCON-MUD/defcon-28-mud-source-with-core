inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 27, 1 }));
  set_short( "Passage - x35y27z1" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y28z1.c",
  "south" : DIR+"/rooms/x35y26z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
