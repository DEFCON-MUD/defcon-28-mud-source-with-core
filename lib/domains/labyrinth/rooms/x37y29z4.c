inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 29, 4 }));
  set_short( "Corridor - x37y29z4" );
set_objects( DIR+"/npc/treelizard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y30z4.c",
  "south" : DIR+"/rooms/x37y28z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
