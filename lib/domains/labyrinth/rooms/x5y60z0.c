inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 60, 0 }));
  set_short( "Corridor - x5y60z0" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y60z0.c",
  "south" : DIR+"/rooms/x5y59z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
