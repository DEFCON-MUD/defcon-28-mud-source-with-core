inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 31, 1 }));
  set_short( "Corridor - x33y31z1" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y32z1.c",
  "south" : DIR+"/rooms/x33y30z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
