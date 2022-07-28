inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 40, 4 }));
  set_short( "Passage - x49y40z4" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y41z4.c",
  "south" : DIR+"/rooms/x49y39z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
