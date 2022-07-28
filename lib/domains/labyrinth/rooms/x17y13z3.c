inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 13, 3 }));
  set_short( "Corridor - x17y13z3" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y14z3.c",
  "south" : DIR+"/rooms/x17y12z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
