inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 3, 7 }));
  set_short( "Passage - x49y3z7" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y4z7.c",
  "south" : DIR+"/rooms/x49y2z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crappy sales material in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
