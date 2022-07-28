inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 38, 9 }));
  set_short( "Corridor - x45y38z9" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y39z9.c",
  "south" : DIR+"/rooms/x45y37z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
