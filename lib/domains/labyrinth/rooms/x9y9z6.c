inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 9, 6 }));
  set_short( "Corridor - x9y9z6" );
set_objects( DIR+"/npc/steve.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y10z6.c",
  "south" : DIR+"/rooms/x9y8z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
