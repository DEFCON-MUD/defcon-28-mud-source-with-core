inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 10, 5 }));
  set_short( "Passage - x44y10z5" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y10z5.c",
  "east" : DIR+"/rooms/x45y10z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
