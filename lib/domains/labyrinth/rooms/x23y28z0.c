inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 28, 0 }));
  set_short( "Passage - x23y28z0" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y29z0.c",
  "south" : DIR+"/rooms/x23y27z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
