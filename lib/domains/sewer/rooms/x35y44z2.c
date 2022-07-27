inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 44, 2 }));
  set_short( "Hallway - x35y44z2" );
set_objects( DIR+"/monsters/bol.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y44z2.c",
  "north" : DIR+"/rooms/x35y45z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
