inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 45, 3 }));
  set_short( "Corridor - x29y45z3" );
set_objects( DIR+"/monsters/james.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y46z3.c",
  "south" : DIR+"/rooms/x29y44z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
