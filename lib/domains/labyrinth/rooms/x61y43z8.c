inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 43, 8 }));
  set_short( "Passage - x61y43z8" );
set_objects( DIR+"/npc/mila.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y44z8.c",
  "south" : DIR+"/rooms/x61y42z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the glorzo in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
