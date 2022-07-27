inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 46, 9 }));
  set_short( "Passage - x47y46z9" );
set_objects( DIR+"/monsters/jenny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y46z9.c",
  "north" : DIR+"/rooms/x47y47z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the radioactive waste in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
