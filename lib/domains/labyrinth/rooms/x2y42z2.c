inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 42, 2 }));
  set_short( "Hallway - x2y42z2" );
set_objects( DIR+"/npc/freddy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y42z2.c",
  "east" : DIR+"/rooms/x3y42z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
