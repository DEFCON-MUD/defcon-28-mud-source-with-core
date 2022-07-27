inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 33, 3 }));
  set_short( "Corridor - x1y33z3" );
set_objects( DIR+"/monsters/vampire.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y34z3.c",
  "south" : DIR+"/rooms/x1y32z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the gunk in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
