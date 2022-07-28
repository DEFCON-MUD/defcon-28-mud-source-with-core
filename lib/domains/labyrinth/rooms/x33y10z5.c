inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 10, 5 }));
  set_short( "Hallway - x33y10z5" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y10z5.c",
  "north" : DIR+"/rooms/x33y11z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
