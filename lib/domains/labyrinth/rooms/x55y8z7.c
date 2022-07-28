inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 8, 7 }));
  set_short( "Passage - x55y8z7" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y8z7.c",
  "north" : DIR+"/rooms/x55y9z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the radioactive waste in this dump. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
