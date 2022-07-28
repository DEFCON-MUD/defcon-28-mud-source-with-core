inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 2, 7 }));
  set_short( "Corridor - x31y2z7" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y2z7.c",
  "east" : DIR+"/rooms/x32y2z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crappy sales material in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
