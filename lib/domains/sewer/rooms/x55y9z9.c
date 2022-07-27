inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 9, 9 }));
  set_short( "Hallway - x55y9z9" );
set_objects( DIR+"/monsters/fireant.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y10z9.c",
  "south" : DIR+"/rooms/x55y8z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
