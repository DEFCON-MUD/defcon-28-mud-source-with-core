inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 48, 2 }));
  set_short( "Passage - x25y48z2" );
set_objects( DIR+"/npc/r1serviceman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y48z2.c",
  "south" : DIR+"/rooms/x25y47z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
