inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 64, 0 }));
  set_short( "Hallway - x60y64z0" );
set_objects( DIR+"/npc/clubbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y64z0.c",
  "east" : DIR+"/rooms/x61y64z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
