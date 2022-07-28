inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 2, 8 }));
  set_short( "Passage - x41y2z8" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y2z8.c",
  "east" : DIR+"/rooms/x42y2z8.c",
  "north" : DIR+"/rooms/x41y3z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, east, and north.%^RESET%^");
}
