inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 48, 6 }));
  set_short( "Corridor - x23y48z6" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y48z6.c",
  "north" : DIR+"/rooms/x23y49z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
