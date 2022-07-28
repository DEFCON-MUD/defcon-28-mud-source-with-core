inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 12, 1 }));
  set_short( "Corridor - x60y12z1" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y12z1.c",
  "east" : DIR+"/rooms/x61y12z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crappy sales material in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
