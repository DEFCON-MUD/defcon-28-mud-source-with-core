inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 26, 1 }));
  set_short( "Passage - x55y26z1" );
set_objects( DIR+"/npc/atriumrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y26z1.c",
  "north" : DIR+"/rooms/x55y27z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
