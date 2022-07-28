inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 54, 4 }));
  set_short( "Corridor - x5y54z4" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y54z4.c",
  "north" : DIR+"/rooms/x5y55z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
