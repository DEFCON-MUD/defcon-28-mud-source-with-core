inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 40, 8 }));
  set_short( "Passage - x5y40z8" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y40z8.c",
  "east" : DIR+"/rooms/x6y40z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
