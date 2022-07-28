inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 18, 3 }));
  set_short( "Corridor - x16y18z3" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y18z3.c",
  "east" : DIR+"/rooms/x17y18z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
