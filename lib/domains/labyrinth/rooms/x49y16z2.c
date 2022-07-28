inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 16, 2 }));
  set_short( "Hallway - x49y16z2" );
set_objects( DIR+"/npc/deformedweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y16z2.c",
  "north" : DIR+"/rooms/x49y17z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
