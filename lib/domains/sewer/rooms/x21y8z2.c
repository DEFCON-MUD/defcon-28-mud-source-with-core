inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 8, 2 }));
  set_short( "Hallway - x21y8z2" );
set_objects( DIR+"/monsters/monitor.c");
 set_exits( ([
  "south" : DIR+"/rooms/x21y7z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west.%^RESET%^");
}
