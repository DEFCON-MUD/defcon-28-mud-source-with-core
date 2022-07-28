inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 60, 4 }));
  set_short( "Corridor - x25y60z4" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y61z4.c",
  "south" : DIR+"/rooms/x25y59z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crappy sales material in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
