inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 64, 5 }));
  set_short( "Corridor - x35y64z5" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y64z5.c",
  "east" : DIR+"/rooms/x36y64z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
