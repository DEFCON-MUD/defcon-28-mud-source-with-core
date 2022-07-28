inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 31, 8 }));
  set_short( "Hallway - x53y31z8" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y32z8.c",
  "south" : DIR+"/rooms/x53y30z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
