inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 33, 6 }));
  set_short( "Corridor - x3y33z6" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y34z6.c",
  "south" : DIR+"/rooms/x3y32z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
