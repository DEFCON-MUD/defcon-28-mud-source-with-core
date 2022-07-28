inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 26, 6 }));
  set_short( "Passage - x50y26z6" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y26z6.c",
  "east" : DIR+"/rooms/x51y26z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
