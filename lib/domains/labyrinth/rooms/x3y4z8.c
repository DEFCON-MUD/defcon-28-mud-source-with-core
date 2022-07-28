inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 4, 8 }));
  set_short( "Hallway - x3y4z8" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y4z8.c",
  "north" : DIR+"/rooms/x3y5z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
