inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 44, 8 }));
  set_short( "Passage - x39y44z8" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y44z8.c",
  "south" : DIR+"/rooms/x39y43z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the random junk evilmog thought up in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
