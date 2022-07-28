inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 18, 1 }));
  set_short( "Passage - x51y18z1" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y18z1.c",
  "east" : DIR+"/rooms/x52y18z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
