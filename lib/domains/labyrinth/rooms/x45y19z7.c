inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 19, 7 }));
  set_short( "Passage - x45y19z7" );
set_objects( DIR+"/npc/zombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y20z7.c",
  "south" : DIR+"/rooms/x45y18z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the glorzo in this hellhole. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
