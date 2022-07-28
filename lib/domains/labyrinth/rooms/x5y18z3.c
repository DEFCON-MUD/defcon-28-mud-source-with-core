inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 18, 3 }));
  set_short( "Corridor - x5y18z3" );
set_objects( DIR+"/npc/professor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y19z3.c",
  "south" : DIR+"/rooms/x5y17z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the radioactive waste in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
