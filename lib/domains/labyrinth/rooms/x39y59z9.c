inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 59, 9 }));
  set_short( "Passage - x39y59z9" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y60z9.c",
  "south" : DIR+"/rooms/x39y58z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
