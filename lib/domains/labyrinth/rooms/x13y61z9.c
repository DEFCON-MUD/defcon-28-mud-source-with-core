inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 61, 9 }));
  set_short( "Passage - x13y61z9" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y62z9.c",
  "south" : DIR+"/rooms/x13y60z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
