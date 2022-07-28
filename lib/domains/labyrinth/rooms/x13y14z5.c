inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 14, 5 }));
  set_short( "Corridor - x13y14z5" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y14z5.c",
  "north" : DIR+"/rooms/x13y15z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
