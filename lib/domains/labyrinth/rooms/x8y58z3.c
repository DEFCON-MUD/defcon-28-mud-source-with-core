inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 58, 3 }));
  set_short( "Passage - x8y58z3" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y58z3.c",
  "east" : DIR+"/rooms/x9y58z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
