inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 46, 9 }));
  set_short( "Hallway - x9y46z9" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y46z9.c",
  "north" : DIR+"/rooms/x9y47z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the glorzo in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
