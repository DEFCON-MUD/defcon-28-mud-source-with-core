inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 19, 9 }));
  set_short( "Hallway - x61y19z9" );
set_objects( DIR+"/npc/valerie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y20z9.c",
  "south" : DIR+"/rooms/x61y18z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
