inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 45, 2 }));
  set_short( "Corridor - x19y45z2" );
set_objects( DIR+"/monsters/kavi.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y46z2.c",
  "south" : DIR+"/rooms/x19y44z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
