inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 24, 5 }));
  set_short( "Passage - x55y24z5" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y24z5.c",
  "north" : DIR+"/rooms/x55y25z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crappy sales material in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
