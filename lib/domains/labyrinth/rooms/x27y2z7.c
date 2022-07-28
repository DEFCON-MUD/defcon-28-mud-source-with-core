inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 2, 7 }));
  set_short( "Hallway - x27y2z7" );
set_objects( DIR+"/npc/clubbouncer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y2z7.c",
  "north" : DIR+"/rooms/x27y3z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crappy sales material in this hellhole. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
