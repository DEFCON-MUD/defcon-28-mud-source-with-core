inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 31, 4 }));
  set_short( "Corridor - x55y31z4" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y32z4.c",
  "south" : DIR+"/rooms/x55y30z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
