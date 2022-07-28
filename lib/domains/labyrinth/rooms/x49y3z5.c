inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 3, 5 }));
  set_short( "Passage - x49y3z5" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y4z5.c",
  "south" : DIR+"/rooms/x49y2z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
