inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 32, 9 }));
  set_short( "Corridor - x37y32z9" );
set_objects( DIR+"/monsters/snapperjaw.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y32z9.c",
  "north" : DIR+"/rooms/x37y33z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
