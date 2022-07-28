inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 9, 8 }));
  set_short( "Corridor - x19y9z8" );
set_objects( DIR+"/npc/debra.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y10z8.c",
  "south" : DIR+"/rooms/x19y8z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
