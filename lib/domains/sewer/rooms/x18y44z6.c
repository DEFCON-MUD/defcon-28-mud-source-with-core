inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 44, 6 }));
  set_short( "Hallway - x18y44z6" );
set_objects( DIR+"/monsters/boar.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y44z6.c",
  "east" : DIR+"/rooms/x19y44z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
