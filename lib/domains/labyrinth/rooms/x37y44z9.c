inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 44, 9 }));
  set_short( "Hallway - x37y44z9" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y44z9.c",
  "south" : DIR+"/rooms/x37y43z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
