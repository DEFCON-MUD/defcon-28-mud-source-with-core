inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 50, 0 }));
  set_short( "Passage - x37y50z0" );
set_objects( DIR+"/npc/tawny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y50z0.c",
  "south" : DIR+"/rooms/x37y49z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crud in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
