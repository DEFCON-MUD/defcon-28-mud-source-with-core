inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 8, 0 }));
  set_short( "Passage - x21y8z0" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y8z0.c",
  "north" : DIR+"/rooms/x21y9z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crud in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
