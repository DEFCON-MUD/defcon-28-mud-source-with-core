inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 26, 5 }));
  set_short( "Passage - x48y26z5" );
set_objects( DIR+"/npc/rick.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y26z5.c",
  "east" : DIR+"/rooms/x49y26z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
