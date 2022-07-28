inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 60, 6 }));
  set_short( "Hallway - x5y60z6" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y60z6.c",
  "north" : DIR+"/rooms/x5y61z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
