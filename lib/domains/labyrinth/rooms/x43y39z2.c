inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 39, 2 }));
  set_short( "Corridor - x43y39z2" );
set_objects( DIR+"/npc/ken.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y40z2.c",
  "south" : DIR+"/rooms/x43y38z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
