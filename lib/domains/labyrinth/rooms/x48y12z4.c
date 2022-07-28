inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 12, 4 }));
  set_short( "Passage - x48y12z4" );
set_objects( DIR+"/npc/r1elaine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y12z4.c",
  "east" : DIR+"/rooms/x49y12z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crappy sales material in this sty. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
