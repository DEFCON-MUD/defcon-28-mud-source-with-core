inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 10, 5 }));
  set_short( "Corridor - x7y10z5" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y10z5.c",
  "south" : DIR+"/rooms/x7y9z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
