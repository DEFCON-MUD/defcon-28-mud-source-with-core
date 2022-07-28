inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 18, 0 }));
  set_short( "Passage - x21y18z0" );
set_objects( DIR+"/npc/culprit.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y18z0.c",
  "south" : DIR+"/rooms/x21y17z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
