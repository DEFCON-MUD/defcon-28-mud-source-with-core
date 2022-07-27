inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 46, 4 }));
  set_short( "Hallway - x53y46z4" );
set_objects( DIR+"/monsters/clubbouer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y46z4.c",
  "north" : DIR+"/rooms/x53y47z4.c",
  "south" : DIR+"/rooms/x53y45z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
