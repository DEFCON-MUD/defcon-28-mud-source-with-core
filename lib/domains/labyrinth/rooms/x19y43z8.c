inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 43, 8 }));
  set_short( "Passage - x19y43z8" );
set_objects( DIR+"/npc/doe.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y44z8.c",
  "south" : DIR+"/rooms/x19y42z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
