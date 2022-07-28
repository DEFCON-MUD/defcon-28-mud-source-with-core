inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 12, 6 }));
  set_short( "Corridor - x13y12z6" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y12z6.c",
  "east" : DIR+"/rooms/x14y12z6.c",
  "north" : DIR+"/rooms/x13y13z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the random junk evilmog thought up in this sty. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, east, and north.%^RESET%^");
}
