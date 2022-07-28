inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 57, 9 }));
  set_short( "Passage - x43y57z9" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y58z9.c",
  "south" : DIR+"/rooms/x43y56z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crap in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
