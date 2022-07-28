inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 36, 5 }));
  set_short( "Corridor - x31y36z5" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y36z5.c",
  "east" : DIR+"/rooms/x32y36z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
