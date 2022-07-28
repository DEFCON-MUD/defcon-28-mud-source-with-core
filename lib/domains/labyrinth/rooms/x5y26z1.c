inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 26, 1 }));
  set_short( "Hallway - x5y26z1" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y26z1.c",
  "north" : DIR+"/rooms/x5y27z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crappy sales material in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
