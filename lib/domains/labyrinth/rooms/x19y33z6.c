inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 33, 6 }));
  set_short( "Corridor - x19y33z6" );
set_objects( DIR+"/npc/tech.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y34z6.c",
  "south" : DIR+"/rooms/x19y32z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crappy sales material in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
