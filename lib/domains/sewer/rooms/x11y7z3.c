inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 7, 3 }));
  set_short( "Corridor - x11y7z3" );
set_objects( DIR+"/monsters/fieldmouse.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y8z3.c",
  "south" : DIR+"/rooms/x11y6z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
