inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 30, 1 }));
  set_short( "Passage - x35y30z1" );
set_objects( DIR+"/npc/eric.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y30z1.c",
  "north" : DIR+"/rooms/x35y31z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crap in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
