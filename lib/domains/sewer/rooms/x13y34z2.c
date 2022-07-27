inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 34, 2 }));
  set_short( "Corridor - x13y34z2" );
set_objects( DIR+"/monsters/massiveweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y34z2.c",
  "north" : DIR+"/rooms/x13y35z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
