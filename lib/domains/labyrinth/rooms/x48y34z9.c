inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 34, 9 }));
  set_short( "Corridor - x48y34z9" );
set_objects( DIR+"/npc/agent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y34z9.c",
  "east" : DIR+"/rooms/x49y34z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
