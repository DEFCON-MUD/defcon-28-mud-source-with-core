inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 49, 9 }));
  set_short( "Corridor - x39y49z9" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y50z9.c",
  "south" : DIR+"/rooms/x39y48z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
