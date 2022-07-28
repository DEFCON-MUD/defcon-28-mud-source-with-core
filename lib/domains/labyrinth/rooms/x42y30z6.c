inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 30, 6 }));
  set_short( "Corridor - x42y30z6" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y30z6.c",
  "east" : DIR+"/rooms/x43y30z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the random junk evilmog thought up in this area. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
