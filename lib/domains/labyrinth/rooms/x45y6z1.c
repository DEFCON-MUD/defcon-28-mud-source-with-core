inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 6, 1 }));
  set_short( "Corridor - x45y6z1" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y6z1.c",
  "north" : DIR+"/rooms/x45y7z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
