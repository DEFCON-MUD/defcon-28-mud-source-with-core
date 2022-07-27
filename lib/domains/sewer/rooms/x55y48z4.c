inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 48, 4 }));
  set_short( "Corridor - x55y48z4" );
set_objects( DIR+"/monsters/boa.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y48z4.c",
  "north" : DIR+"/rooms/x55y49z4.c",
  "south" : DIR+"/rooms/x55y47z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
