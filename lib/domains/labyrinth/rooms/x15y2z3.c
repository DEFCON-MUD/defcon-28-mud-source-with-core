inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 2, 3 }));
  set_short( "Corridor - x15y2z3" );
set_objects( DIR+"/npc/jenny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y2z3.c",
  "east" : DIR+"/rooms/x16y2z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
