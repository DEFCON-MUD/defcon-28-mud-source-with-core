inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 30, 5 }));
  set_short( "Corridor - x5y30z5" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y30z5.c",
  "north" : DIR+"/rooms/x5y31z5.c",
  "south" : DIR+"/rooms/x5y29z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
