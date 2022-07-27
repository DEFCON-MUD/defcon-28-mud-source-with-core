inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 45, 5 }));
  set_short( "Passage - x9y45z5" );
set_objects( DIR+"/monsters/queenslug.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y46z5.c",
  "south" : DIR+"/rooms/x9y44z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
