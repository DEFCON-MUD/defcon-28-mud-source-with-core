inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 3, 4 }));
  set_short( "Corridor - x47y3z4" );
set_objects( DIR+"/npc/pasties.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y4z4.c",
  "south" : DIR+"/rooms/x47y2z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crappy sales material in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
