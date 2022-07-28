inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 6, 4 }));
  set_short( "Passage - x47y6z4" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y6z4.c",
  "north" : DIR+"/rooms/x47y7z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the radioactive waste in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
