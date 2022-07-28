inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 54, 0 }));
  set_short( "Corridor - x2y54z0" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y54z0.c",
  "east" : DIR+"/rooms/x3y54z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
