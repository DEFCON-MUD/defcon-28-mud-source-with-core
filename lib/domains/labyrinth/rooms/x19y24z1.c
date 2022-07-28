inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 24, 1 }));
  set_short( "Hallway - x19y24z1" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y24z1.c",
  "north" : DIR+"/rooms/x19y25z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
