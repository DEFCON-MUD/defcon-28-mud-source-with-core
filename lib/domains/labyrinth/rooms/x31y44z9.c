inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 44, 9 }));
  set_short( "Passage - x31y44z9" );
set_objects( DIR+"/npc/jeff.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y44z9.c",
  "east" : DIR+"/rooms/x32y44z9.c",
  "south" : DIR+"/rooms/x31y43z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crap in this area. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
