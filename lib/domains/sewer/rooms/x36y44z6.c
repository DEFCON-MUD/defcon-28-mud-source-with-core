inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 44, 6 }));
  set_short( "Hallway - x36y44z6" );
set_objects( DIR+"/monsters/gana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y44z6.c",
  "east" : DIR+"/rooms/x37y44z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
