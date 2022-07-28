inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 12, 8 }));
  set_short( "Passage - x9y12z8" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y12z8.c",
  "north" : DIR+"/rooms/x9y13z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
