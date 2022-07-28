inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 10, 3 }));
  set_short( "Hallway - x49y10z3" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y11z3.c",
  "south" : DIR+"/rooms/x49y9z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
