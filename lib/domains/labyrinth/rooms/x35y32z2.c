inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 32, 2 }));
  set_short( "Hallway - x35y32z2" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y32z2.c",
  "south" : DIR+"/rooms/x35y31z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
