inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 32, 0 }));
  set_short( "Hallway - x47y32z0" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y32z0.c",
  "east" : DIR+"/rooms/x48y32z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
