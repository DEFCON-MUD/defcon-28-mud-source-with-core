inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 8, 0 }));
  set_short( "Hallway - x19y8z0" );
set_objects( DIR+"/monsters/surityoffer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y9z0.c",
  "south" : DIR+"/rooms/x19y7z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
