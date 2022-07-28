inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 10, 6 }));
  set_short( "Hallway - x43y10z6" );
set_objects( DIR+"/npc/jenny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y10z6.c",
  "south" : DIR+"/rooms/x43y9z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
