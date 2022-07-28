inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 13, 3 }));
  set_short( "Hallway - x35y13z3" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y14z3.c",
  "south" : DIR+"/rooms/x35y12z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
