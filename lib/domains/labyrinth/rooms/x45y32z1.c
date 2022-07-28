inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 32, 1 }));
  set_short( "Hallway - x45y32z1" );
set_objects( DIR+"/npc/treelizard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y33z1.c",
  "south" : DIR+"/rooms/x45y31z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
