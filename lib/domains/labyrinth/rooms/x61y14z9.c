inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 14, 9 }));
  set_short( "Corridor - x61y14z9" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y15z9.c",
  "south" : DIR+"/rooms/x61y13z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
