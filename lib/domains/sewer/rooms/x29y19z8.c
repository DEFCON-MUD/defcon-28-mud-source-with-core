inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 19, 8 }));
  set_short( "Hallway - x29y19z8" );
set_objects( DIR+"/monsters/bartender.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y20z8.c",
  "south" : DIR+"/rooms/x29y18z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
