inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 12, 1 }));
  set_short( "Hallway - x23y12z1" );
set_objects( DIR+"/monsters/bol.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y12z1.c",
  "north" : DIR+"/rooms/x23y13z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
