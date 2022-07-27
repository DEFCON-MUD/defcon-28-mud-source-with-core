inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 40, 7 }));
  set_short( "Corridor - x17y40z7" );
set_objects( DIR+"/monsters/eastmaintenaedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y40z7.c",
  "north" : DIR+"/rooms/x17y41z7.c",
  "south" : DIR+"/rooms/x17y39z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
