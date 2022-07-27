inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 51, 9 }));
  set_short( "Corridor - x17y51z9" );
set_objects( DIR+"/monsters/angryweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y52z9.c",
  "south" : DIR+"/rooms/x17y50z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
