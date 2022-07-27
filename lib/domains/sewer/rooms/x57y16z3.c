inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 16, 3 }));
  set_short( "Corridor - x57y16z3" );
set_objects( DIR+"/monsters/varysstark.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y16z3.c",
  "east" : DIR+"/rooms/x58y16z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
