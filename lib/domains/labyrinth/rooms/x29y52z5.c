inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 52, 5 }));
  set_short( "Corridor - x29y52z5" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y52z5.c",
  "south" : DIR+"/rooms/x29y51z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
