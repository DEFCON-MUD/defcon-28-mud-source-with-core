inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 18, 2 }));
  set_short( "Passage - x13y18z2" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y19z2.c",
  "south" : DIR+"/rooms/x13y17z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
