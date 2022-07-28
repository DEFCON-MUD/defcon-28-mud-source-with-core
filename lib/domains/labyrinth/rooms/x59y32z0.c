inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 32, 0 }));
  set_short( "Corridor - x59y32z0" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y33z0.c",
  "south" : DIR+"/rooms/x59y31z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
