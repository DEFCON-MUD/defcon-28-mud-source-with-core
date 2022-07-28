inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 34, 8 }));
  set_short( "Hallway - x13y34z8" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y34z8.c",
  "south" : DIR+"/rooms/x13y33z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
