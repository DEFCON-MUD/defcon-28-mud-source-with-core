inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 22, 6 }));
  set_short( "Hallway - x47y22z6" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y22z6.c",
  "east" : DIR+"/rooms/x48y22z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
