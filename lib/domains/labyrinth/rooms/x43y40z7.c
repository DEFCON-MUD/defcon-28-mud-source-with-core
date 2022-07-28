inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 40, 7 }));
  set_short( "Hallway - x43y40z7" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y41z7.c",
  "south" : DIR+"/rooms/x43y39z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
