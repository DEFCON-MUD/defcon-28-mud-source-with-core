inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 49, 6 }));
  set_short( "Corridor - x27y49z6" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y50z6.c",
  "south" : DIR+"/rooms/x27y48z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
