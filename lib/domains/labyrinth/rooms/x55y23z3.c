inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 23, 3 }));
  set_short( "Corridor - x55y23z3" );
set_objects( DIR+"/npc/atriumrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y24z3.c",
  "south" : DIR+"/rooms/x55y22z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
