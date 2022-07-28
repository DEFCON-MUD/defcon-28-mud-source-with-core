inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 12, 4 }));
  set_short( "Corridor - x30y12z4" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y12z4.c",
  "east" : DIR+"/rooms/x31y12z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
