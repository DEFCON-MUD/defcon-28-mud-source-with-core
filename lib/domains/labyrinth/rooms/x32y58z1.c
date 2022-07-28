inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 58, 1 }));
  set_short( "Hallway - x32y58z1" );
set_objects( DIR+"/npc/james.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y58z1.c",
  "east" : DIR+"/rooms/x33y58z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
