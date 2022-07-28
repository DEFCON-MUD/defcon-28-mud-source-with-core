inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 10, 2 }));
  set_short( "Passage - x8y10z2" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y10z2.c",
  "east" : DIR+"/rooms/x9y10z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
