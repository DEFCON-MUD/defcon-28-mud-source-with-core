inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 4, 4 }));
  set_short( "Hallway - x17y4z4" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y4z4.c",
  "east" : DIR+"/rooms/x18y4z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
