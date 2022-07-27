inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 41, 5 }));
  set_short( "Passage - x59y41z5" );
set_objects( DIR+"/monsters/treelizard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y42z5.c",
  "south" : DIR+"/rooms/x59y40z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the muck in this area. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
