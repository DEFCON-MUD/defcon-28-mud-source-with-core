inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 18, 6 }));
  set_short( "Hallway - x1y18z6" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y18z6.c",
  "north" : DIR+"/rooms/x1y19z6.c",
  "south" : DIR+"/rooms/x1y17z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
