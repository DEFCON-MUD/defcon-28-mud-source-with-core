inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 4, 7 }));
  set_short( "Hallway - x61y4z7" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y5z7.c",
  "south" : DIR+"/rooms/x61y3z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
