inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 47, 8 }));
  set_short( "Corridor - x55y47z8" );
set_objects( DIR+"/npc/valerie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y48z8.c",
  "south" : DIR+"/rooms/x55y46z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
