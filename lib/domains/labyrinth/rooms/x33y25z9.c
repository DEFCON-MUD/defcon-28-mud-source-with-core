inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 25, 9 }));
  set_short( "Corridor - x33y25z9" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y26z9.c",
  "south" : DIR+"/rooms/x33y24z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
