inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 40, 9 }));
  set_short( "Passage - x33y40z9" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y40z9.c",
  "north" : DIR+"/rooms/x33y41z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
