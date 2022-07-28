inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 9, 0 }));
  set_short( "Corridor - x29y9z0" );
set_objects( DIR+"/npc/tiffany.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y10z0.c",
  "south" : DIR+"/rooms/x29y8z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
