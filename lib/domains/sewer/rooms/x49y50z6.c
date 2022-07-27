inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 50, 6 }));
  set_short( "Hallway - x49y50z6" );
set_objects( DIR+"/monsters/craig.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y50z6.c",
  "north" : DIR+"/rooms/x49y51z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
