inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 29, 7 }));
  set_short( "Hallway - x47y29z7" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y30z7.c",
  "south" : DIR+"/rooms/x47y28z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crud in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
