inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 15, 6 }));
  set_short( "Passage - x17y15z6" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y16z6.c",
  "south" : DIR+"/rooms/x17y14z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
