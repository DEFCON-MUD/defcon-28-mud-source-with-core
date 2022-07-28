inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 35, 1 }));
  set_short( "Corridor - x27y35z1" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y36z1.c",
  "south" : DIR+"/rooms/x27y34z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crappy sales material in this sty. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
