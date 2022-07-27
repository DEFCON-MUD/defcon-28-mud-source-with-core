inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 64, 4 }));
  set_short( "Hallway - x53y64z4" );
set_objects( DIR+"/monsters/raddgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y64z4.c",
  "east" : DIR+"/rooms/x54y64z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
