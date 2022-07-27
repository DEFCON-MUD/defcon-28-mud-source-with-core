inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 26, 1 }));
  set_short( "Hallway - x61y26z1" );
set_objects( DIR+"/monsters/dba.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y27z1.c",
  "south" : DIR+"/rooms/x61y25z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
