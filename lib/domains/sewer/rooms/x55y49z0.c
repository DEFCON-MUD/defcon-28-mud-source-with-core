inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 49, 0 }));
  set_short( "Corridor - x55y49z0" );
set_objects( DIR+"/monsters/clubdaer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y50z0.c",
  "south" : DIR+"/rooms/x55y48z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the glorzo in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
