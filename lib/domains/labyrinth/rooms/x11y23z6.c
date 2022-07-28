inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 23, 6 }));
  set_short( "Hallway - x11y23z6" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y24z6.c",
  "south" : DIR+"/rooms/x11y22z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
