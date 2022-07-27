inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 14, 8 }));
  set_short( "Passage - x21y14z8" );
set_objects( DIR+"/monsters/gorilla.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y14z8.c",
  "north" : DIR+"/rooms/x21y15z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the radioactive waste in this stink-pit. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
