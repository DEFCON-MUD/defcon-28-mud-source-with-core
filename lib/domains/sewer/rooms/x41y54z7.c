inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 54, 7 }));
  set_short( "Passage - x41y54z7" );
set_objects( DIR+"/monsters/planner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y54z7.c",
  "east" : DIR+"/rooms/x42y54z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crappy sales material in this sty. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
