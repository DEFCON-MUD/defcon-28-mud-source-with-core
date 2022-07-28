inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 48, 1 }));
  set_short( "Hallway - x3y48z1" );
set_objects( DIR+"/npc/mamba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y48z1.c",
  "south" : DIR+"/rooms/x3y47z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
