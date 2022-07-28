inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 10, 8 }));
  set_short( "Passage - x45y10z8" );
set_objects( DIR+"/npc/baboon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y11z8.c",
  "south" : DIR+"/rooms/x45y9z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
