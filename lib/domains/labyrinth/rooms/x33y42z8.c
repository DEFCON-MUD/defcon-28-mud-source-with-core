inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 42, 8 }));
  set_short( "Corridor - x33y42z8" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y42z8.c",
  "north" : DIR+"/rooms/x33y43z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
