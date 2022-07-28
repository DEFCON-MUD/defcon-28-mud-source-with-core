inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 44, 5 }));
  set_short( "Hallway - x18y44z5" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y44z5.c",
  "east" : DIR+"/rooms/x19y44z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the radioactive waste in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
