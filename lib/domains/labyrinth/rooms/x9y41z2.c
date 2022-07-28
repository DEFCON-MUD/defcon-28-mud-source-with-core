inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 41, 2 }));
  set_short( "Hallway - x9y41z2" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y42z2.c",
  "south" : DIR+"/rooms/x9y40z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
