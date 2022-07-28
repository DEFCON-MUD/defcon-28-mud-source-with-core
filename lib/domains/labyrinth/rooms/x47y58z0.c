inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 58, 0 }));
  set_short( "Corridor - x47y58z0" );
set_objects( DIR+"/npc/largeheptopsquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y58z0.c",
  "north" : DIR+"/rooms/x47y59z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
