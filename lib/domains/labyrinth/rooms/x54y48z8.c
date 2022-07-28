inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 48, 8 }));
  set_short( "Passage - x54y48z8" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y48z8.c",
  "east" : DIR+"/rooms/x55y48z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
