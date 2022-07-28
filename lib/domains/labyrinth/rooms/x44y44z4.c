inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 44, 4 }));
  set_short( "Corridor - x44y44z4" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y44z4.c",
  "east" : DIR+"/rooms/x45y44z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
