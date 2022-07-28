inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 32, 1 }));
  set_short( "Passage - x29y32z1" );
set_objects( DIR+"/npc/coder.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y32z1.c",
  "north" : DIR+"/rooms/x29y33z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the glorzo in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
