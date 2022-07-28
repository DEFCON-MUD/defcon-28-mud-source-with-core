inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 30, 6 }));
  set_short( "Passage - x23y30z6" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y30z6.c",
  "south" : DIR+"/rooms/x23y29z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
