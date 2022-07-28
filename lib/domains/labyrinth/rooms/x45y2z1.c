inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 2, 1 }));
  set_short( "Corridor - x45y2z1" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y2z1.c",
  "east" : DIR+"/rooms/x46y2z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
