inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 42, 6 }));
  set_short( "Passage - x61y42z6" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y42z6.c",
  "north" : DIR+"/rooms/x61y43z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
