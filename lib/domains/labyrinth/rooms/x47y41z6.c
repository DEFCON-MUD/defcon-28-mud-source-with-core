inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 41, 6 }));
  set_short( "Corridor - x47y41z6" );
set_objects( DIR+"/npc/largeheptopsquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y42z6.c",
  "south" : DIR+"/rooms/x47y40z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the glorzo in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
