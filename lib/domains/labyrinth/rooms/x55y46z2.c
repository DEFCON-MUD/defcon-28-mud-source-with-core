inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 46, 2 }));
  set_short( "Hallway - x55y46z2" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y46z2.c",
  "north" : DIR+"/rooms/x55y47z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
