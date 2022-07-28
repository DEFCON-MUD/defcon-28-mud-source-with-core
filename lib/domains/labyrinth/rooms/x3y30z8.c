inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 30, 8 }));
  set_short( "Hallway - x3y30z8" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y30z8.c",
  "east" : DIR+"/rooms/x4y30z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the glorzo in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
