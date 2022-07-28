inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 31, 6 }));
  set_short( "Hallway - x7y31z6" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y32z6.c",
  "south" : DIR+"/rooms/x7y30z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
