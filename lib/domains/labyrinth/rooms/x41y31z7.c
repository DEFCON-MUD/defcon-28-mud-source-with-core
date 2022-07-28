inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 31, 7 }));
  set_short( "Passage - x41y31z7" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y32z7.c",
  "south" : DIR+"/rooms/x41y30z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
