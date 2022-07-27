inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 61, 7 }));
  set_short( "Hallway - x11y61z7" );
set_objects( DIR+"/monsters/eastmaintenaedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y62z7.c",
  "south" : DIR+"/rooms/x11y60z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
