inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 8, 7 }));
  set_short( "Corridor - x25y8z7" );
set_objects( DIR+"/npc/r1elaine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y9z7.c",
  "south" : DIR+"/rooms/x25y7z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
