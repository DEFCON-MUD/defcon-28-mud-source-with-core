inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 16, 2 }));
  set_short( "Corridor - x50y16z2" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y16z2.c",
  "east" : DIR+"/rooms/x51y16z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
