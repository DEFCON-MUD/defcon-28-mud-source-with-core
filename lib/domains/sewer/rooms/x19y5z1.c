inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 5, 1 }));
  set_short( "Passage - x19y5z1" );
set_objects( DIR+"/monsters/greensnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y6z1.c",
  "south" : DIR+"/rooms/x19y4z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the sludge in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
