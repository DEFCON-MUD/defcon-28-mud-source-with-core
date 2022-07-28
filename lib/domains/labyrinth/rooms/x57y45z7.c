inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 45, 7 }));
  set_short( "Corridor - x57y45z7" );
set_objects( DIR+"/npc/professor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y46z7.c",
  "south" : DIR+"/rooms/x57y44z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
