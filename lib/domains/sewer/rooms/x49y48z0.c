inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 48, 0 }));
  set_short( "Passage - x49y48z0" );
set_objects( DIR+"/monsters/rk.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y48z0.c",
  "north" : DIR+"/rooms/x49y49z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the radioactive waste in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
