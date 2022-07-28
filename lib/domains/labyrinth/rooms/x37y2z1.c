inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 2, 1 }));
  set_short( "Passage - x37y2z1" );
set_objects( DIR+"/npc/edwardio.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y2z1.c",
  "north" : DIR+"/rooms/x37y3z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
