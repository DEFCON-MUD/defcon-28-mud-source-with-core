inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 8, 8 }));
  set_short( "Corridor - x2y8z8" );
set_objects( DIR+"/monsters/greenslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y8z8.c",
  "east" : DIR+"/rooms/x3y8z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the radioactive waste in this stink-pit. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
