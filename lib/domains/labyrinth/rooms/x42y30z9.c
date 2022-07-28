inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 30, 9 }));
  set_short( "Corridor - x42y30z9" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y30z9.c",
  "east" : DIR+"/rooms/x43y30z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the sludge in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
