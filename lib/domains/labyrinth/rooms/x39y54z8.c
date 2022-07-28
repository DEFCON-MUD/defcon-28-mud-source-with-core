inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 54, 8 }));
  set_short( "Passage - x39y54z8" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y54z8.c",
  "north" : DIR+"/rooms/x39y55z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
