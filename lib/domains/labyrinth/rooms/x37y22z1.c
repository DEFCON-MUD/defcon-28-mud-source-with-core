inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 22, 1 }));
  set_short( "Corridor - x37y22z1" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y22z1.c",
  "east" : DIR+"/rooms/x38y22z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
