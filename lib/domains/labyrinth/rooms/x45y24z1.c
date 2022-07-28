inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 24, 1 }));
  set_short( "Corridor - x45y24z1" );
set_objects( DIR+"/npc/log.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y24z1.c",
  "north" : DIR+"/rooms/x45y25z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
