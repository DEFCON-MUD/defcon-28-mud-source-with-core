inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 61, 8 }));
  set_short( "Passage - x7y61z8" );
set_objects( DIR+"/npc/edwardio.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y62z8.c",
  "south" : DIR+"/rooms/x7y60z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the glorzo in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
