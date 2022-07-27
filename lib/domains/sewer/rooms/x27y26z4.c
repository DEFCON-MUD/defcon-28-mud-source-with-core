inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 26, 4 }));
  set_short( "Passage - x27y26z4" );
set_objects( DIR+"/monsters/r1engineer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y26z4.c",
  "north" : DIR+"/rooms/x27y27z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
