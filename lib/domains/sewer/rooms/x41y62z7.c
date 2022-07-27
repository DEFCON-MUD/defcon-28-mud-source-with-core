inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 62, 7 }));
  set_short( "Hallway - x41y62z7" );
set_objects( DIR+"/monsters/clubdaer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y62z7.c",
  "south" : DIR+"/rooms/x41y61z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
