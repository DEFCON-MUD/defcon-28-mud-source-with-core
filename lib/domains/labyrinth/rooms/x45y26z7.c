inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 26, 7 }));
  set_short( "Hallway - x45y26z7" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y26z7.c",
  "north" : DIR+"/rooms/x45y27z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
