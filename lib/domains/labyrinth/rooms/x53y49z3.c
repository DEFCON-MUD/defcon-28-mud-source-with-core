inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 49, 3 }));
  set_short( "Corridor - x53y49z3" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y50z3.c",
  "south" : DIR+"/rooms/x53y48z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
