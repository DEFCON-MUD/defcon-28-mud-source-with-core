inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 26, 4 }));
  set_short( "Passage - x37y26z4" );
set_objects( DIR+"/npc/slowzombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y26z4.c",
  "east" : DIR+"/rooms/x38y26z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
