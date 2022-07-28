inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 48, 2 }));
  set_short( "Passage - x32y48z2" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y48z2.c",
  "east" : DIR+"/rooms/x33y48z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
