inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 47, 9 }));
  set_short( "Hallway - x59y47z9" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y48z9.c",
  "south" : DIR+"/rooms/x59y46z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
