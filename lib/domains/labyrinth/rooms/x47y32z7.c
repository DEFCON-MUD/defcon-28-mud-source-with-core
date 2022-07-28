inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 32, 7 }));
  set_short( "Hallway - x47y32z7" );
set_objects( DIR+"/npc/doe.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y33z7.c",
  "south" : DIR+"/rooms/x47y31z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
