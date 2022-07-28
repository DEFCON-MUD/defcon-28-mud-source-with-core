inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 3, 2 }));
  set_short( "Corridor - x61y3z2" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y4z2.c",
  "south" : DIR+"/rooms/x61y2z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
