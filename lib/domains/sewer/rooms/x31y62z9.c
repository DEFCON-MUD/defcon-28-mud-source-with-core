inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 62, 9 }));
  set_short( "Hallway - x31y62z9" );
set_objects( DIR+"/monsters/hans.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y62z9.c",
  "east" : DIR+"/rooms/x32y62z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
