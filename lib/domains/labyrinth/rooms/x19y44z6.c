inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 44, 6 }));
  set_short( "Passage - x19y44z6" );
set_objects( DIR+"/npc/sparrow.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y44z6.c",
  "south" : DIR+"/rooms/x19y43z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
