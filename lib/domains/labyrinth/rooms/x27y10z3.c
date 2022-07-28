inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 10, 3 }));
  set_short( "Hallway - x27y10z3" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y11z3.c",
  "south" : DIR+"/rooms/x27y9z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crappy sales material in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
