inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 11, 7 }));
  set_short( "Passage - x57y11z7" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y12z7.c",
  "south" : DIR+"/rooms/x57y10z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
