inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 12, 2 }));
  set_short( "Corridor - x21y12z2" );
set_objects( DIR+"/monsters/ferret.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y12z2.c",
  "south" : DIR+"/rooms/x21y11z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
