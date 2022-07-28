inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 6, 8 }));
  set_short( "Passage - x11y6z8" );
set_objects( DIR+"/npc/tiffany.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y7z8.c",
  "south" : DIR+"/rooms/x11y5z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crud in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
