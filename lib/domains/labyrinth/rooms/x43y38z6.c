inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 38, 6 }));
  set_short( "Passage - x43y38z6" );
set_objects( DIR+"/npc/slowzombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y38z6.c",
  "south" : DIR+"/rooms/x43y37z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
