inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 38, 1 }));
  set_short( "Hallway - x39y38z1" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y38z1.c",
  "east" : DIR+"/rooms/x40y38z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the gunk in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
