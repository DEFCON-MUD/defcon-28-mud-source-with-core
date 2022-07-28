inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 58, 0 }));
  set_short( "Corridor - x7y58z0" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y58z0.c",
  "north" : DIR+"/rooms/x7y59z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
