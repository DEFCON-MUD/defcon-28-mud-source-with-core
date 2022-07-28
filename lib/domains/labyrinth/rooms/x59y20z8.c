inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 20, 8 }));
  set_short( "Hallway - x59y20z8" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y21z8.c",
  "south" : DIR+"/rooms/x59y19z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
