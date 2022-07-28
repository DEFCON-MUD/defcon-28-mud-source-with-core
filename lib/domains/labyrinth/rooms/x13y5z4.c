inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 5, 4 }));
  set_short( "Hallway - x13y5z4" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y6z4.c",
  "south" : DIR+"/rooms/x13y4z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crud in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
