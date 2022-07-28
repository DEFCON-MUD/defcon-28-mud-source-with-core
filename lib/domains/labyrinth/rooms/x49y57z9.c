inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 57, 9 }));
  set_short( "Corridor - x49y57z9" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y58z9.c",
  "south" : DIR+"/rooms/x49y56z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
