inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 29, 2 }));
  set_short( "Passage - x5y29z2" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y30z2.c",
  "south" : DIR+"/rooms/x5y28z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
