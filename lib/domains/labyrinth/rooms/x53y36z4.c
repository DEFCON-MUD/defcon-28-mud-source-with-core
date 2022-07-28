inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 36, 4 }));
  set_short( "Passage - x53y36z4" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y36z4.c",
  "north" : DIR+"/rooms/x53y37z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
