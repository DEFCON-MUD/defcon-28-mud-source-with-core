inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 38, 4 }));
  set_short( "Corridor - x29y38z4" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y38z4.c",
  "east" : DIR+"/rooms/x30y38z4.c",
  "south" : DIR+"/rooms/x29y37z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, east, and west.%^RESET%^");
}
