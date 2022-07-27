inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 36, 5 }));
  set_short( "Hallway - x19y36z5" );
set_objects( DIR+"/monsters/sparrow.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y36z5.c",
  "north" : DIR+"/rooms/x19y37z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the gunk in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
