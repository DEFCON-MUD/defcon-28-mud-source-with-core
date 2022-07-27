inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 26, 8 }));
  set_short( "Corridor - x21y26z8" );
set_objects( DIR+"/monsters/clerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y27z8.c",
  "south" : DIR+"/rooms/x21y25z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
