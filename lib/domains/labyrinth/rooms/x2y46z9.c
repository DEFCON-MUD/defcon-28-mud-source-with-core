inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 46, 9 }));
  set_short( "Passage - x2y46z9" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y46z9.c",
  "east" : DIR+"/rooms/x3y46z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
