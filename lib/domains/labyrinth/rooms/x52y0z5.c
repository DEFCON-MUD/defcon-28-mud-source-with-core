inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 0, 5 }));
  set_short( "Corridor - x52y0z5" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y0z5.c",
  "east" : DIR+"/rooms/x53y0z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
